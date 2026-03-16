// Copyright (C) 2024 Alexandros DESROCHERS
//
// This library is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation; either version 2.1 of the License, or
// (at your option) any later version.
//
// This library is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
// for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this library; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

#ifndef MeshModel_hxx
#define MeshModel_hxx

#include "MeshModel_Attributes.hxx"
#include "MeshModel_Group.hxx"

#include <memory>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>

// ============================================================================
// MeshModel<ShapeType>
//
// Template container that represents the *input* to a meshing algorithm.
// It holds:
//   - A collection of geometric shapes (type-parameterised by ShapeType)
//   - Per-shape meshing attributes (MeshModel_Attributes)
//   - Named groups (MeshModel_Group) for logical grouping and attribute override
//
// Template parameter:
//   ShapeType  The geometric shape type. For OpenCASCADE use-cases this is
//              TopoDS_Shape; other formats (e.g., STEP entities, Brep, ...)
//              may be plugged in by specialising or aliasing this template.
//
// Example usage with OpenCASCADE:
//   #include <TopoDS_Shape.hxx>
//   using OCC_MeshModel = MeshModel<TopoDS_Shape>;
//
//   OCC_MeshModel model;
//   int idx = model.AddShape(myBox);
//   model.SetAttributes(idx, MeshModel_Attributes(0.01, 0.3));
//   auto& grp = model.AddGroup("walls");
//   grp.Add(idx);
// ============================================================================

template<typename ShapeType>
class MeshModel
{
public:
    // -------------------------------------------------------------------------
    // Constructors / destructor
    // -------------------------------------------------------------------------

    MeshModel()  = default;
    ~MeshModel() = default;

    //! Deep copy constructor.
    MeshModel(const MeshModel& theOther)
        : myShapes(theOther.myShapes),
          myAttributes(theOther.myAttributes),
          myGroupIndex(theOther.myGroupIndex)
    {
        myGroups.reserve(theOther.myGroups.size());
        for (const auto& grp : theOther.myGroups)
            myGroups.emplace_back(std::make_unique<MeshModel_Group>(*grp));
    }

    //! Deep copy assignment.
    MeshModel& operator=(const MeshModel& theOther)
    {
        if (this != &theOther)
        {
            myShapes     = theOther.myShapes;
            myAttributes = theOther.myAttributes;
            myGroupIndex = theOther.myGroupIndex;
            myGroups.clear();
            myGroups.reserve(theOther.myGroups.size());
            for (const auto& grp : theOther.myGroups)
                myGroups.emplace_back(std::make_unique<MeshModel_Group>(*grp));
        }
        return *this;
    }

    MeshModel(MeshModel&&)            = default;
    MeshModel& operator=(MeshModel&&) = default;

    // -------------------------------------------------------------------------
    // Shape management
    // -------------------------------------------------------------------------

    //! Adds a shape to the model using default meshing attributes.
    //! @return The 0-based index of the newly added shape.
    int AddShape(const ShapeType& theShape)
    {
        int idx = static_cast<int>(myShapes.size());
        myShapes.push_back(theShape);
        myAttributes.emplace_back(); // default attributes
        return idx;
    }

    //! Adds a shape together with explicit meshing attributes.
    //! @return The 0-based index of the newly added shape.
    int AddShape(const ShapeType& theShape, const MeshModel_Attributes& theAttributes)
    {
        int idx = static_cast<int>(myShapes.size());
        myShapes.push_back(theShape);
        myAttributes.push_back(theAttributes);
        return idx;
    }

    //! Returns the number of shapes currently in the model.
    int NbShapes() const
    {
        return static_cast<int>(myShapes.size());
    }

    //! Returns a const reference to the shape at @a theIndex.
    //! @throws std::out_of_range if theIndex is invalid.
    const ShapeType& Shape(int theIndex) const
    {
        checkShapeIndex(theIndex);
        return myShapes[static_cast<std::size_t>(theIndex)];
    }

    //! Returns a mutable reference to the shape at @a theIndex.
    //! @throws std::out_of_range if theIndex is invalid.
    ShapeType& Shape(int theIndex)
    {
        checkShapeIndex(theIndex);
        return myShapes[static_cast<std::size_t>(theIndex)];
    }

    // -------------------------------------------------------------------------
    // Attribute management
    // -------------------------------------------------------------------------

    //! Returns a const reference to the meshing attributes for shape @a theIndex.
    //! @throws std::out_of_range if theIndex is invalid.
    const MeshModel_Attributes& Attributes(int theIndex) const
    {
        checkShapeIndex(theIndex);
        return myAttributes[static_cast<std::size_t>(theIndex)];
    }

    //! Returns a mutable reference to the meshing attributes for shape @a theIndex.
    //! @throws std::out_of_range if theIndex is invalid.
    MeshModel_Attributes& Attributes(int theIndex)
    {
        checkShapeIndex(theIndex);
        return myAttributes[static_cast<std::size_t>(theIndex)];
    }

    //! Replaces the meshing attributes for shape @a theIndex.
    //! @throws std::out_of_range if theIndex is invalid.
    void SetAttributes(int theIndex, const MeshModel_Attributes& theAttributes)
    {
        checkShapeIndex(theIndex);
        myAttributes[static_cast<std::size_t>(theIndex)] = theAttributes;
    }

    // -------------------------------------------------------------------------
    // Group management
    // -------------------------------------------------------------------------

    //! Creates a new named group and returns a reference to it.
    //! If a group with @a theName already exists the existing group is returned.
    //! @param theName Must not be empty.
    MeshModel_Group& AddGroup(const std::string& theName)
    {
        auto it = myGroupIndex.find(theName);
        if (it != myGroupIndex.end())
            return *myGroups[it->second];

        int idx = static_cast<int>(myGroups.size());
        myGroups.emplace_back(std::make_unique<MeshModel_Group>(theName));
        myGroupIndex[theName] = idx;
        return *myGroups.back();
    }

    //! Returns the number of groups in the model.
    int NbGroups() const
    {
        return static_cast<int>(myGroups.size());
    }

    //! Returns a const reference to the group at @a theIndex (0-based).
    //! @throws std::out_of_range if theIndex is invalid.
    const MeshModel_Group& Group(int theIndex) const
    {
        checkGroupIndex(theIndex);
        return *myGroups[static_cast<std::size_t>(theIndex)];
    }

    //! Returns a mutable reference to the group at @a theIndex (0-based).
    //! @throws std::out_of_range if theIndex is invalid.
    MeshModel_Group& Group(int theIndex)
    {
        checkGroupIndex(theIndex);
        return *myGroups[static_cast<std::size_t>(theIndex)];
    }

    //! Returns a pointer to the group named @a theName, or nullptr if not found.
    const MeshModel_Group* FindGroup(const std::string& theName) const
    {
        auto it = myGroupIndex.find(theName);
        if (it == myGroupIndex.end())
            return nullptr;
        return myGroups[it->second].get();
    }

    //! Returns a mutable pointer to the group named @a theName, or nullptr if not found.
    MeshModel_Group* FindGroup(const std::string& theName)
    {
        auto it = myGroupIndex.find(theName);
        if (it == myGroupIndex.end())
            return nullptr;
        return myGroups[it->second].get();
    }

    //! Returns true when a group named @a theName exists.
    bool HasGroup(const std::string& theName) const
    {
        return myGroupIndex.find(theName) != myGroupIndex.end();
    }

    // -------------------------------------------------------------------------
    // Convenience
    // -------------------------------------------------------------------------

    //! Removes all shapes, attributes and groups from the model.
    void Clear()
    {
        myShapes.clear();
        myAttributes.clear();
        myGroups.clear();
        myGroupIndex.clear();
    }

private:
    // -------------------------------------------------------------------------
    // Internal helpers
    // -------------------------------------------------------------------------

    void checkShapeIndex(int theIndex) const
    {
        if (theIndex < 0 || theIndex >= static_cast<int>(myShapes.size()))
            throw std::out_of_range("MeshModel: shape index out of range");
    }

    void checkGroupIndex(int theIndex) const
    {
        if (theIndex < 0 || theIndex >= static_cast<int>(myGroups.size()))
            throw std::out_of_range("MeshModel: group index out of range");
    }

    // -------------------------------------------------------------------------
    // Data members
    // -------------------------------------------------------------------------

    std::vector<ShapeType>             myShapes;
    std::vector<MeshModel_Attributes>  myAttributes;
    std::vector<std::unique_ptr<MeshModel_Group>> myGroups;
    std::unordered_map<std::string, int>          myGroupIndex;
};

// ============================================================================
// Convenience alias for OpenCASCADE users
// ============================================================================

#ifdef HAVE_OCC
#include <TopoDS_Shape.hxx>
using OCC_MeshModel = MeshModel<TopoDS_Shape>;
#endif

#endif // MeshModel_hxx

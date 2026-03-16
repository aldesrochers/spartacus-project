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

#ifndef MeshModel_Group_hxx
#define MeshModel_Group_hxx

#include <string>
#include <vector>

// ============================================================================
// MeshModel_Group
//
// A named collection of shape indices that together form a logical group.
// Groups can be used by meshing algorithms to apply consistent settings
// or boundary conditions to a subset of the shapes in a MeshModel.
// ============================================================================

class MeshModel_Group
{
public:
    // -------------------------------------------------------------------------
    // Constructors
    // -------------------------------------------------------------------------

    //! Constructs a group with the given name.
    //! @param theName A non-empty string identifying this group.
    explicit MeshModel_Group(const std::string& theName);

    // -------------------------------------------------------------------------
    // Name
    // -------------------------------------------------------------------------

    //! Returns the group name.
    const std::string& Name() const;

    //! Renames the group.
    //! @param theName Must not be empty.
    void SetName(const std::string& theName);

    // -------------------------------------------------------------------------
    // Shape membership
    // -------------------------------------------------------------------------

    //! Returns the number of shape indices in this group.
    int NbShapes() const;

    //! Returns the shape index at position @a thePosition (0-based).
    int ShapeIndex(int thePosition) const;

    //! Returns true when the shape with index @a theIndex is in this group.
    bool Contains(int theIndex) const;

    //! Adds a shape index to this group.
    //! If the index is already present it is silently ignored.
    //! @param theIndex Must be >= 0.
    void Add(int theIndex);

    //! Removes a shape index from this group.
    //! If the index is not present it is silently ignored.
    void Remove(int theIndex);

    //! Removes all shape indices from this group.
    void Clear();

    // -------------------------------------------------------------------------
    // Iteration
    // -------------------------------------------------------------------------

    //! Returns a read-only reference to the internal index vector.
    const std::vector<int>& Indices() const;

private:
    std::string      myName;
    std::vector<int> myIndices;
};

#endif // MeshModel_Group_hxx

// ============================================================================
// Copyright (C) 2021-
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
//
// Alexis L. Desrochers (alexisdesrochers@gmail.com)
//
// ============================================================================


#ifndef __MeshDS_TMesh_hxx__
#define __MeshDS_TMesh_hxx__

// Spartacus
#include <MeshDS_Array1OfObject.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Group.hxx>
#include <MeshDS_Node.hxx>
#include <MeshDS_TObject.hxx>

// Forward declarations
class MeshDS_TMesh;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TMesh, MeshDS_TObject);


// ============================================================================
/*!
 *  \brief MeshDS_TMesh
*/
// ============================================================================
class MeshDS_TMesh : public MeshDS_TObject
{

public:
    // constructors
    Standard_EXPORT MeshDS_TMesh();
    // destructors
    Standard_EXPORT ~MeshDS_TMesh();

public:

    Standard_EXPORT MeshAbs_TypeOfObject    ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const MeshDS_Cell&  Cell(const Standard_Integer theIndex) const;
    Standard_EXPORT const MeshDS_Group& Group(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer    NbCells() const;
    Standard_EXPORT Standard_Integer    NbGroups() const;
    Standard_EXPORT Standard_Integer    NbNodes() const;
    Standard_EXPORT const MeshDS_Node&  Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                ResizeCells(const Standard_Integer theNbCells,
                                                    const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                ResizeGroups(const Standard_Integer theNbGroups,
                                                     const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                ResizeNodes(const Standard_Integer theNbNodes,
                                                    const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                SetCell(const Standard_Integer theIndex,
                                                const MeshDS_Cell& theCell);
    Standard_EXPORT void                SetGroup(const Standard_Integer theIndex,
                                                 const MeshDS_Group& theGroup);
    Standard_EXPORT void                SetNode(const Standard_Integer theIndex,
                                                const MeshDS_Node& theNode);

private:

    MeshDS_Array1OfObject   myCells;
    MeshDS_Array1OfObject   myGroups;
    MeshDS_Array1OfObject   myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TMesh, MeshDS_TObject);

};


#endif // __MeshDS_TMesh_hxx__

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


#ifndef __PolyMesh_Mesh_hxx__
#define __PolyMesh_Mesh_hxx__

// Spartacus
#include <PolyMesh_Array1OfCell.hxx>
#include <PolyMesh_Array1OfGroup.hxx>
#include <PolyMesh_Array1OfNode.hxx>
#include <PolyMesh_Object.hxx>

// Forward declarations
class PolyMesh_Mesh;

// Handles
DEFINE_STANDARD_HANDLE(PolyMesh_Mesh, PolyMesh_Object)


// ============================================================================
/*!
 *  \brief PolyMesh_Mesh
*/
// ============================================================================
class PolyMesh_Mesh : public PolyMesh_Object
{

public:
    // constructors
    Standard_EXPORT PolyMesh_Mesh();
    Standard_EXPORT PolyMesh_Mesh(const Standard_Integer theNbNodes,
                                    const Standard_Integer theNbCells);
    Standard_EXPORT PolyMesh_Mesh(const Standard_Integer theNbNodes,
                                    const Standard_Integer theNbCells,
                                    const Standard_Integer theNbGroups);
    Standard_EXPORT PolyMesh_Mesh(const PolyMesh_Array1OfNode& theNodes,
                                    const PolyMesh_Array1OfCell& theCells);
    Standard_EXPORT PolyMesh_Mesh(const PolyMesh_Array1OfNode& theNodes,
                                    const PolyMesh_Array1OfCell& theCells,
                                    const PolyMesh_Array1OfGroup& theGroups);
    // destructors
    Standard_EXPORT ~PolyMesh_Mesh();

public:

    Standard_EXPORT const Handle(PolyMesh_Cell)&  Cell(const Standard_Integer theIndex) const;
    Standard_EXPORT const Handle(PolyMesh_Group)& Group(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer                NbCells() const;
    Standard_EXPORT Standard_Integer                NbGroups() const;
    Standard_EXPORT Standard_Integer                NbNodes() const;
    Standard_EXPORT const Handle(PolyMesh_Node)&  Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                            ResizeCells(const Standard_Integer theNbCells,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeGroups(const Standard_Integer theNbGroups,
                                                                 const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeNodes(const Standard_Integer theNbNodes,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            SetCell(const Standard_Integer theIndex,
                                                            const Handle(PolyMesh_Cell)& theCell);
    Standard_EXPORT void                            SetGroup(const Standard_Integer theIndex,
                                                             const Handle(PolyMesh_Group)& theGroup);
    Standard_EXPORT void                            SetNode(const Standard_Integer theIndex,
                                                            const Handle(PolyMesh_Node)& theNode);

private:

    PolyMesh_Array1OfCell     myCells;
    PolyMesh_Array1OfGroup    myGroups;
    PolyMesh_Array1OfNode     myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(PolyMesh_Mesh, PolyMesh_Object)

};


#endif // __PolyMesh_Mesh_hxx__

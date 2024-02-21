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


#ifndef __PolyMesh2d_Mesh_hxx__
#define __PolyMesh2d_Mesh_hxx__

// Spartacus
#include <PolyMesh2d_Array1OfCell.hxx>
#include <PolyMesh2d_Array1OfGroup.hxx>
#include <PolyMesh2d_Array1OfNode.hxx>
#include <PolyMesh2d_Object.hxx>

// Forward declarations
class PolyMesh2d_Mesh;

// Handles
DEFINE_STANDARD_HANDLE(PolyMesh2d_Mesh, PolyMesh2d_Object)


// ============================================================================
/*!
 *  \brief PolyMesh2d_Mesh
*/
// ============================================================================
class PolyMesh2d_Mesh : public PolyMesh2d_Object
{

public:
    // constructors
    Standard_EXPORT PolyMesh2d_Mesh();
    Standard_EXPORT PolyMesh2d_Mesh(const Standard_Integer theNbNodes,
                                    const Standard_Integer theNbCells);
    Standard_EXPORT PolyMesh2d_Mesh(const Standard_Integer theNbNodes,
                                    const Standard_Integer theNbCells,
                                    const Standard_Integer theNbGroups);
    Standard_EXPORT PolyMesh2d_Mesh(const PolyMesh2d_Array1OfNode& theNodes,
                                    const PolyMesh2d_Array1OfCell& theCells);
    Standard_EXPORT PolyMesh2d_Mesh(const PolyMesh2d_Array1OfNode& theNodes,
                                    const PolyMesh2d_Array1OfCell& theCells,
                                    const PolyMesh2d_Array1OfGroup& theGroups);
    // destructors
    Standard_EXPORT ~PolyMesh2d_Mesh();

public:

    Standard_EXPORT const Handle(PolyMesh2d_Cell)&  Cell(const Standard_Integer theIndex) const;
    Standard_EXPORT const Handle(PolyMesh2d_Group)& Group(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer                NbCells() const;
    Standard_EXPORT Standard_Integer                NbGroups() const;
    Standard_EXPORT Standard_Integer                NbNodes() const;
    Standard_EXPORT const Handle(PolyMesh2d_Node)&  Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                            ResizeCells(const Standard_Integer theNbCells,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeGroups(const Standard_Integer theNbGroups,
                                                                 const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeNodes(const Standard_Integer theNbNodes,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            SetCell(const Standard_Integer theIndex,
                                                            const Handle(PolyMesh2d_Cell)& theCell);
    Standard_EXPORT void                            SetGroup(const Standard_Integer theIndex,
                                                             const Handle(PolyMesh2d_Group)& theGroup);
    Standard_EXPORT void                            SetNode(const Standard_Integer theIndex,
                                                            const Handle(PolyMesh2d_Node)& theNode);

private:

    PolyMesh2d_Array1OfCell     myCells;
    PolyMesh2d_Array1OfGroup    myGroups;
    PolyMesh2d_Array1OfNode     myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(PolyMesh2d_Mesh, PolyMesh2d_Object)

};


#endif // __PolyMesh2d_Mesh_hxx__

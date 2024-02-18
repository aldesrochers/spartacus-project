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


#ifndef __PolyMesh1d_Mesh_hxx__
#define __PolyMesh1d_Mesh_hxx__

// Spartacus
#include <PolyMesh1d_Array1OfCell.hxx>
#include <PolyMesh1d_Array1OfGroup.hxx>
#include <PolyMesh1d_Array1OfNode.hxx>
#include <PolyMesh1d_Object.hxx>

// Forward declarations
class PolyMesh1d_Mesh;

// Handles
DEFINE_STANDARD_HANDLE(PolyMesh1d_Mesh, PolyMesh1d_Object)


// ============================================================================
/*!
 *  \brief PolyMesh1d_Mesh
*/
// ============================================================================
class PolyMesh1d_Mesh : public PolyMesh1d_Object
{

public:
    // constructors
    Standard_EXPORT PolyMesh1d_Mesh();
    Standard_EXPORT PolyMesh1d_Mesh(const Standard_Integer theNbNodes,
                                    const Standard_Integer theNbCells);
    Standard_EXPORT PolyMesh1d_Mesh(const Standard_Integer theNbNodes,
                                    const Standard_Integer theNbCells,
                                    const Standard_Integer theNbGroups);
    Standard_EXPORT PolyMesh1d_Mesh(const PolyMesh1d_Array1OfNode& theNodes,
                                    const PolyMesh1d_Array1OfCell& theCells);
    Standard_EXPORT PolyMesh1d_Mesh(const PolyMesh1d_Array1OfNode& theNodes,
                                    const PolyMesh1d_Array1OfCell& theCells,
                                    const PolyMesh1d_Array1OfGroup& theGroups);
    // destructors
    Standard_EXPORT ~PolyMesh1d_Mesh();

public:

    Standard_EXPORT const Handle(PolyMesh1d_Cell)&  Cell(const Standard_Integer theIndex) const;
    Standard_EXPORT const Handle(PolyMesh1d_Group)& Group(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer                NbCells() const;
    Standard_EXPORT Standard_Integer                NbGroups() const;
    Standard_EXPORT Standard_Integer                NbNodes() const;
    Standard_EXPORT const Handle(PolyMesh1d_Node)&  Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                            ResizeCells(const Standard_Integer theNbCells,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeGroups(const Standard_Integer theNbGroups,
                                                                 const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeNodes(const Standard_Integer theNbNodes,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            SetCell(const Standard_Integer theIndex,
                                                            const Handle(PolyMesh1d_Cell)& theCell);
    Standard_EXPORT void                            SetGroup(const Standard_Integer theIndex,
                                                             const Handle(PolyMesh1d_Group)& theGroup);
    Standard_EXPORT void                            SetNode(const Standard_Integer theIndex,
                                                            const Handle(PolyMesh1d_Node)& theNode);

private:

    PolyMesh1d_Array1OfCell     myCells;
    PolyMesh1d_Array1OfGroup    myGroups;
    PolyMesh1d_Array1OfNode     myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(PolyMesh1d_Mesh, PolyMesh1d_Object)

};


#endif // __PolyMesh1d_Mesh_hxx__

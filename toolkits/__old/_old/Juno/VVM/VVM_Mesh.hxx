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


#ifndef __VVM_Mesh_hxx__
#define __VVM_Mesh_hxx__

// Spartacus
#include <VVM_Array1OfCell.hxx>
#include <VVM_Array1OfGroup.hxx>
#include <VVM_Array1OfNode.hxx>
#include <VVM_Object.hxx>

// Forward declarations
class VVM_Mesh;

// Handles
DEFINE_STANDARD_HANDLE(VVM_Mesh, VVM_Object);


// ============================================================================
/*!
 *  \brief VVM_Mesh
*/
// ============================================================================
class VVM_Mesh : public VVM_Object
{

public:
    // constructors
    Standard_EXPORT VVM_Mesh();
    Standard_EXPORT VVM_Mesh(const Standard_Integer theNbNodes,
                             const Standard_Integer theNbCells,
                             const Standard_Integer theNbNodeGroups = 0,
                             const Standard_Integer theNbCellGroups = 0);
    Standard_EXPORT VVM_Mesh(const VVM_Array1OfNode& theNodes,
                             const VVM_Array1OfCell& theCells,
                             const VVM_Array1OfGroup& theNodeGroups = VVM_Array1OfGroup(),
                             const VVM_Array1OfGroup& theCellGroups = VVM_Array1OfGroup());
    // destructors
    Standard_EXPORT ~VVM_Mesh();

public:

    Standard_EXPORT const Handle(VVM_Cell)&     Cell(const Standard_Integer theCellId) const;
    Standard_EXPORT const Handle(VVM_Group)&    CellGroup(const Standard_Integer theCellGroupId) const;
    Standard_EXPORT const VVM_Array1OfGroup&    CellGroups() const;
    Standard_EXPORT const VVM_Array1OfCell&     Cells() const;
    Standard_EXPORT Standard_Integer            NbCellGroups() const;
    Standard_EXPORT Standard_Integer            NbCells() const;
    Standard_EXPORT Standard_Integer            NbNodeGroups() const;
    Standard_EXPORT Standard_Integer            NbNodes() const;
    Standard_EXPORT const Handle(VVM_Node)&     Node(const Standard_Integer theNodeId) const;
    Standard_EXPORT const Handle(VVM_Group)&    NodeGroup(const Standard_Integer theNodeGroupId) const;
    Standard_EXPORT const VVM_Array1OfGroup&    NodeGroups() const;
    Standard_EXPORT const VVM_Array1OfNode&     Nodes() const;
    Standard_EXPORT void                        ResizeCellGroups(const Standard_Integer theNbCellGroups,
                                                                 const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                        ResizeCells(const Standard_Integer theNbCells,
                                                            const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                        ResizeNodeGroups(const Standard_Integer theNbNodeGroups,
                                                                 const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                        ResizeNodes(const Standard_Integer theNbNodes,
                                                            const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                        SetCell(const Standard_Integer theCellId,
                                                        const Handle(VVM_Cell)& theCell);
    Standard_EXPORT void                        SetCellGroup(const Standard_Integer theCellGroupId,
                                                             const Handle(VVM_Group)& theCellGroup);
    Standard_EXPORT void                        SetCellGroups(const VVM_Array1OfGroup& theCellGroups);
    Standard_EXPORT void                        SetCells(const VVM_Array1OfCell& theCells);
    Standard_EXPORT void                        SetNode(const Standard_Integer theNodeId,
                                                        const Handle(VVM_Node)& theNode);
    Standard_EXPORT void                        SetNodeGroup(const Standard_Integer theNodeGroupId,
                                                             const Handle(VVM_Group)& theNodeGroup);
    Standard_EXPORT void                        SetNodeGroups(const VVM_Array1OfGroup& theNodeGroups);
    Standard_EXPORT void                        SetNodes(const VVM_Array1OfNode& theNodes);

private:

    VVM_Array1OfGroup       myCellGroups;
    VVM_Array1OfCell        myCells;
    VVM_Array1OfGroup       myNodeGroups;
    VVM_Array1OfNode        myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(VVM_Mesh, VVM_Object);

};

#endif // __VVM_Mesh_hxx__

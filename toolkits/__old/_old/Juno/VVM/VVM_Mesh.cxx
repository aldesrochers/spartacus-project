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

#include <iostream>
using namespace std;

// Spartacus
#include <VVM_Mesh.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Mesh::VVM_Mesh()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Mesh::VVM_Mesh(const Standard_Integer theNbNodes,
                   const Standard_Integer theNbCells,
                   const Standard_Integer theNbNodeGroups,
                   const Standard_Integer theNbCellGroups)
{
    ResizeCellGroups(theNbCellGroups);
    ResizeCells(theNbCells);
    ResizeNodeGroups(theNbNodeGroups);
    ResizeNodes(theNbNodes);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Mesh::VVM_Mesh(const VVM_Array1OfNode &theNodes,
                   const VVM_Array1OfCell &theCells,
                   const VVM_Array1OfGroup &theNodeGroups,
                   const VVM_Array1OfGroup &theCellGroups)
{
    SetCellGroups(theCellGroups);
    SetCells(theCells);
    SetNodeGroups(theNodeGroups);
    SetNodes(theNodes);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
VVM_Mesh::~VVM_Mesh()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const Handle(VVM_Cell)& VVM_Mesh::Cell(const Standard_Integer theCellId) const
{
    return myCells.Value(theCellId);
}

// ============================================================================
/*!
 *  \brief CellGroup()
*/
// ============================================================================
const Handle(VVM_Group)& VVM_Mesh::CellGroup(const Standard_Integer theCellGroupId) const
{
    return myCellGroups.Value(theCellGroupId);
}

// ============================================================================
/*!
 *  \brief CellGroups()
*/
// ============================================================================
const VVM_Array1OfGroup& VVM_Mesh::CellGroups() const
{
    return myCellGroups;
}

// ============================================================================
/*!
 *  \brief Cells()
*/
// ============================================================================
const VVM_Array1OfCell& VVM_Mesh::Cells() const
{
    return myCells;
}

// ============================================================================
/*!
 *  \brief NbCellGroups()
*/
// ============================================================================
Standard_Integer VVM_Mesh::NbCellGroups() const
{
    return myCellGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer VVM_Mesh::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbNodeGroups()
*/
// ============================================================================
Standard_Integer VVM_Mesh::NbNodeGroups() const
{
    return myNodeGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer VVM_Mesh::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const Handle(VVM_Node)& VVM_Mesh::Node(const Standard_Integer theNodeId) const
{
    return myNodes.Value(theNodeId);
}

// ============================================================================
/*!
 *  \brief NodeGroup()
*/
// ============================================================================
const Handle(VVM_Group)& VVM_Mesh::NodeGroup(const Standard_Integer theNodeGroupId) const
{
    return myNodeGroups.Value(theNodeGroupId);
}

// ============================================================================
/*!
 *  \brief NodeGroups()
*/
// ============================================================================
const VVM_Array1OfGroup& VVM_Mesh::NodeGroups() const
{
    return myNodeGroups;
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const VVM_Array1OfNode& VVM_Mesh::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ResizeCellGroups()
*/
// ============================================================================
void VVM_Mesh::ResizeCellGroups(const Standard_Integer theNbCellGroups,
                                const Standard_Boolean theCopyOld)
{
    if(theNbCellGroups < 1)
        return;
    myCellGroups.Resize(1, theNbCellGroups, theCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void VVM_Mesh::ResizeCells(const Standard_Integer theNbCells,
                           const Standard_Boolean theCopyOld)
{
    myCells.Resize(1, theNbCells, theCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeNodeGroups()
*/
// ============================================================================
void VVM_Mesh::ResizeNodeGroups(const Standard_Integer theNbNodeGroups,
                                const Standard_Boolean theCopyOld)
{
    if(theNbNodeGroups < 1)
        return;
    myNodeGroups.Resize(1, theNbNodeGroups, theCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void VVM_Mesh::ResizeNodes(const Standard_Integer theNbNodes,
                           const Standard_Boolean theCopyOld)
{
    myNodes.Resize(1, theNbNodes, theCopyOld);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void VVM_Mesh::SetCell(const Standard_Integer theCellId,
                       const Handle(VVM_Cell) &theCell)
{
    myCells.SetValue(theCellId, theCell);
}

// ============================================================================
/*!
 *  \brief SetCellGroup()
*/
// ============================================================================
void VVM_Mesh::SetCellGroup(const Standard_Integer theCellGroupId,
                            const Handle(VVM_Group) &theCellGroup)
{
    myCellGroups.SetValue(theCellGroupId, theCellGroup);
}

// ============================================================================
/*!
 *  \brief SetCellGroups()
*/
// ============================================================================
void VVM_Mesh::SetCellGroups(const VVM_Array1OfGroup &theCellGroups)
{
    myCellGroups = theCellGroups;
}

// ============================================================================
/*!
 *  \brief SetCells()
*/
// ============================================================================
void VVM_Mesh::SetCells(const VVM_Array1OfCell &theCells)
{
    myCells = theCells;
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void VVM_Mesh::SetNode(const Standard_Integer theNodeId,
                       const Handle(VVM_Node) &theNode)
{
    myNodes.SetValue(theNodeId, theNode);
}

// ============================================================================
/*!
 *  \brief SetNodeGroup()
*/
// ============================================================================
void VVM_Mesh::SetNodeGroup(const Standard_Integer theNodeGroupId,
                            const Handle(VVM_Group) &theNodeGroup)
{
    myNodeGroups.SetValue(theNodeGroupId, theNodeGroup);
}

// ============================================================================
/*!
 *  \brief SetNodeGroups()
*/
// ============================================================================
void VVM_Mesh::SetNodeGroups(const VVM_Array1OfGroup &theNodeGroups)
{
    myNodeGroups = theNodeGroups;
}

// ============================================================================
/*!
 *  \brief SetNodes()
*/
// ============================================================================
void VVM_Mesh::SetNodes(const VVM_Array1OfNode &theNodes)
{
    myNodes = theNodes;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(VVM_Mesh, VVM_Object);
IMPLEMENT_STANDARD_RTTIEXT(VVM_Mesh, VVM_Object);

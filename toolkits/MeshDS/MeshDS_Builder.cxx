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


// Spartacus
#include <MeshDS_Builder.hxx>
#include <MeshDS_TCell.hxx>
#include <MeshDS_TGroup.hxx>
#include <MeshDS_TMesh.hxx>
#include <MeshDS_TNode.hxx>

#include <MeshRep_Node1d.hxx>
#include <MeshRep_Node2d.hxx>
#include <MeshRep_Node3d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_Builder::MeshDS_Builder()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_Builder::~MeshDS_Builder()
{

}

// ============================================================================
/*!
 *  \brief MakeCell()
*/
// ============================================================================
void MeshDS_Builder::MakeCell(MeshDS_Cell& theCell) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell();
    MakeObject(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeGroup()
*/
// ============================================================================
void MeshDS_Builder::MakeGroup(MeshDS_Group& theGroup) const
{
    Handle(MeshDS_TGroup) aTGroup = new MeshDS_TGroup();
    MakeObject(theGroup, aTGroup);
}

// ============================================================================
/*!
 *  \brief MakeLinearLine2N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearLine2N(MeshDS_Cell &theCell,
                                      const MeshDS_Node &theNode1,
                                      const MeshDS_Node &theNode2) const
{
    MakeCell(theCell);
    UpdateLinearLine2N(theCell, theNode1, theNode2);
}

// ============================================================================
/*!
 *  \brief MakeMesh()
*/
// ============================================================================
void MeshDS_Builder::MakeMesh(MeshDS_Mesh &theMesh) const
{
    Handle(MeshDS_TMesh) aTMesh = new MeshDS_TMesh();
    MakeObject(theMesh, aTMesh);
}

// ============================================================================
/*!
 *  \brief MakeNode()
*/
// ============================================================================
void MeshDS_Builder::MakeNode(MeshDS_Node& theNode) const
{
    Handle(MeshDS_TNode) aTNode = new MeshDS_TNode();
    MakeObject(theNode, aTNode);
}

// ============================================================================
/*!
 *  \brief MakeNode()
*/
// ============================================================================
void MeshDS_Builder::MakeNode(MeshDS_Node& theNode,
                              const gp_Pnt& thePoint) const
{
    MakeNode(theNode);
    UpdateNode(theNode, thePoint);
}

// ============================================================================
/*!
 *  \brief MakeObject()
*/
// ============================================================================
void MeshDS_Builder::MakeObject(MeshDS_Object &theObject,
                                const Handle(MeshDS_TObject) &theTObject) const
{
    theObject.SetTObject(theTObject);
}

// ============================================================================
/*!
 *  \brief UpdateLinearLine2N()
*/
// ============================================================================
void MeshDS_Builder::UpdateLinearLine2N(const MeshDS_Cell &theCell,
                                        const MeshDS_Node &theNode1,
                                        const MeshDS_Node &theNode2) const
{
    UpdateCell(theCell, MeshAbs_LinearLine2N, 2);
    UpdateCell(theCell, 1, theNode1);
    UpdateCell(theCell, 2, theNode2);
}

// ============================================================================
/*!
 *  \brief UpdateCell()
 *  Utility method used to set type and number of nodes in cell.
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const MeshAbs_TypeOfCell theType,
                                const Standard_Integer theNbNodes) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    aTCell->ResizeNodes(theNbNodes, Standard_False);
    aTCell->SetType(theType);
    aTCell->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateCell()
 *  Utility method used to set a node at index in cell. Cell is linked to
 *  the provided node.
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const Standard_Integer theIndex,
                                const MeshDS_Node& theNode) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    aTCell->SetNode(theIndex, theNode);
    aTCell->SetModified(Standard_True);

    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    MeshDS_ListOfCell& aList = aTNode->LinkedCells();
    aList.Append(theCell);
    aTNode->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateNode()
*/
// ============================================================================
void MeshDS_Builder::UpdateNode(const MeshDS_Node& theNode,
                                const gp_Pnt& thePoint) const
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    aTNode->SetModified(Standard_True);
    aTNode->SetPoint(thePoint);
}

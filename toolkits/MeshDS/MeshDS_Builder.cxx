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
#include <MeshRep_Cell1d.hxx>
#include <MeshRep_Cell2d.hxx>
#include <MeshRep_Cell3d.hxx>
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
void MeshDS_Builder::MakeCell(MeshDS_Cell &theCell) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell();
    MakeObject(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeCell()
*/
// ============================================================================
void MeshDS_Builder::MakeCell(MeshDS_Cell &theCell,
                              const Handle(Mesh1d_Cell) &theCell1d) const
{
    MakeCell(theCell);
    UpdateCell(theCell, theCell1d);
}

// ============================================================================
/*!
 *  \brief MakeCell()
*/
// ============================================================================
void MeshDS_Builder::MakeCell(MeshDS_Cell &theCell,
                              const Handle(Mesh2d_Cell) &theCell2d) const
{
    MakeCell(theCell);
    UpdateCell(theCell, theCell2d);
}

// ============================================================================
/*!
 *  \brief MakeCell()
*/
// ============================================================================
void MeshDS_Builder::MakeCell(MeshDS_Cell &theCell,
                              const Handle(Mesh_Cell) &theCell3d) const
{
    MakeCell(theCell);
    UpdateCell(theCell, theCell3d);
}

// ============================================================================
/*!
 *  \brief MakeGroup()
*/
// ============================================================================
void MeshDS_Builder::MakeGroup(MeshDS_Group &theGroup) const
{
    Handle(MeshDS_TGroup) aTGroup = new MeshDS_TGroup();
    MakeObject(theGroup, aTGroup);
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
 *  \brief MakeMesh()
*/
// ============================================================================
void MeshDS_Builder::MakeMesh(MeshDS_Mesh &theMesh,
                              const Standard_Integer theNbNodes,
                              const Standard_Integer theNbCells,
                              const Standard_Integer theNbGroups) const
{
    MakeMesh(theMesh);
    UpdateMesh(theMesh, theNbNodes, theNbCells, theNbGroups);
}

// ============================================================================
/*!
 *  \brief MakeNode()
*/
// ============================================================================
void MeshDS_Builder::MakeNode(MeshDS_Node &theNode) const
{
    Handle(MeshDS_TNode) aTNode = new MeshDS_TNode();
    MakeObject(theNode, aTNode);
}

// ============================================================================
/*!
 *  \brief MakeNode()
*/
// ============================================================================
void MeshDS_Builder::MakeNode(MeshDS_Node &theNode,
                              const Handle(Mesh1d_Node) &theNode1d) const
{
    MakeNode(theNode);
    UpdateNode(theNode, theNode1d);
}

// ============================================================================
/*!
 *  \brief MakeNode()
*/
// ============================================================================
void MeshDS_Builder::MakeNode(MeshDS_Node &theNode,
                              const Handle(Mesh2d_Node) &theNode2d) const
{
    MakeNode(theNode);
    UpdateNode(theNode, theNode2d);
}

// ============================================================================
/*!
 *  \brief MakeNode()
*/
// ============================================================================
void MeshDS_Builder::MakeNode(MeshDS_Node &theNode,
                              const Handle(Mesh_Node) &theNode3d) const
{
    MakeNode(theNode);
    UpdateNode(theNode, theNode3d);
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
 *  \brief UpdateMesh()
*/
// ============================================================================
void MeshDS_Builder::UpdateMesh(const MeshDS_Mesh &theMesh,
                                const Standard_Integer theNbNodes,
                                const Standard_Integer theNbCells,
                                const Standard_Integer theNbGroups) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    aTMesh->ResizeCells(theNbCells);
    aTMesh->ResizeGroups(theNbGroups);
    aTMesh->ResizeNodes(theNbNodes);
    aTMesh->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateNode()
*/
// ============================================================================
void MeshDS_Builder::UpdateNode(const MeshDS_Node &theNode,
                                const Handle(Mesh1d_Node) &theNode1d) const
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    Handle(MeshRep_Node1d) aReprensentation = new MeshRep_Node1d(theNode1d);
    aTNode->SetRepresentation(aReprensentation);
    aTNode->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateNode()
*/
// ============================================================================
void MeshDS_Builder::UpdateNode(const MeshDS_Node &theNode,
                                const Handle(Mesh2d_Node) &theNode2d) const
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    Handle(MeshRep_Node2d) aRepresentation = new MeshRep_Node2d(theNode2d);
    aTNode->SetRepresentation(aRepresentation);
    aTNode->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateNode()
*/
// ============================================================================
void MeshDS_Builder::UpdateNode(const MeshDS_Node &theNode,
                                const Handle(Mesh_Node) &theNode3d) const
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    Handle(MeshRep_Node3d) aRepresentation = new MeshRep_Node3d(theNode3d);
    aTNode->SetRepresentation(aRepresentation);
    aTNode->SetModified(Standard_True);
}
// ============================================================================
/*!
 *  \brief UpdateCell()
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const Handle(Mesh1d_Cell) &theCell1d) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    Handle(MeshRep_Cell1d) aReprensentation = new MeshRep_Cell1d(theCell1d);
    aTCell->SetRepresentation(aReprensentation);
    aTCell->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateCell()
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const Handle(Mesh2d_Cell) &theCell2d) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    Handle(MeshRep_Cell2d) aRepresentation = new MeshRep_Cell2d(theCell2d);
    aTCell->SetRepresentation(aRepresentation);
    aTCell->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateCell()
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const Handle(Mesh_Cell) &theCell3d) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    Handle(MeshRep_Cell3d) aRepresentation = new MeshRep_Cell3d(theCell3d);
    aTCell->SetRepresentation(aRepresentation);
    aTCell->SetModified(Standard_True);
}




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
#include <MeshDS_Point1d.hxx>



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
 *  \brief AddCell()
 *  Add a cell to a group.
*/
// ============================================================================
void MeshDS_Builder::AddCell(MeshDS_Group &theGroup,
                             const MeshDS_Cell &theCell) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    MeshDS_ListOfObject& aList = aTGroup->Cells();
    aList.Append(theCell);
    aTGroup->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief LinkCell()
 *  Link a cell to a node.
*/
// ============================================================================
void MeshDS_Builder::LinkCell(MeshDS_Node &theNode,
                              const MeshDS_Cell &theCell) const
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    MeshDS_ListOfObject& aList = aTNode->LinkedCells();
    aList.Append(theCell);
    aTNode->SetModified(Standard_True);
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
                              const MeshAbs_TypeOfCell theCellType,
                              const TColStd_SequenceOfInteger &theConnectivity) const
{
    MakeCell(theCell);
    UpdateCell(theCell, theCellType, theConnectivity);
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
                              const gp_Pnt1d& thePoint) const
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
 *  \brief SetCell()
 *  Set a cell within a mesh.
*/
// ============================================================================
void MeshDS_Builder::SetCell(MeshDS_Mesh &theMesh,
                             const Standard_Integer theIndex,
                             const MeshDS_Cell &theCell) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    aTMesh->SetCell(theIndex, theCell);
    aTMesh->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief SetGroup()
 *  Set a group within a mesh.
*/
// ============================================================================
void MeshDS_Builder::SetGroup(MeshDS_Mesh &theMesh,
                             const Standard_Integer theIndex,
                             const MeshDS_Group &theGroup) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    aTMesh->SetGroup(theIndex, theGroup);
    aTMesh->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief SetNode()
 *  Set a node within a mesh.
*/
// ============================================================================
void MeshDS_Builder::SetNode(MeshDS_Mesh &theMesh,
                             const Standard_Integer theIndex,
                             const MeshDS_Node &theNode) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    aTMesh->SetNode(theIndex, theNode);
    aTMesh->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateCell()
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const MeshAbs_TypeOfCell theCellType,
                                const TColStd_SequenceOfInteger& theConnectivity) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());

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
                                const gp_Pnt1d& thePoint) const
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    Handle(MeshDS_Point1d) aPoint1d = new MeshDS_Point1d(thePoint);
    aTNode->SetPoint(aPoint1d);
    aTNode->SetModified(Standard_True);
}



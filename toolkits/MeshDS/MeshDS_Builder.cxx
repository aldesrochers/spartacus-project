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
#include <MeshDS_Point1d.hxx>
#include <MeshDS_Point2d.hxx>
#include <MeshDS_Point3d.hxx>
#include <MeshDS_TCell.hxx>
#include <MeshDS_TGroup.hxx>
#include <MeshDS_TMesh.hxx>
#include <MeshDS_TNode.hxx>


// ============================================================================
/*!
 *  \brief AddCell()
*/
// ============================================================================
void MeshDS_Builder::AddCell(const MeshDS_Group &theGroup,
                             const MeshDS_Cell &theCell) const
{
    // add cell to group
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    MeshDS_ListOfObject& aList = aTGroup->Cells();
    aList.Append(theCell);
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
                              const Standard_Integer theNbNodes) const
{
    MakeCell(theCell);
    UpdateCell(theCell, theCellType, theNbNodes);
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
 *  \brief MakeGroup()
*/
// ============================================================================
void MeshDS_Builder::MakeGroup(MeshDS_Group &theGroup,
                               const TCollection_AsciiString &theName) const
{
    MakeGroup(theGroup);
    UpdateGroup(theGroup, theName);
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
    ResizeMesh(theMesh, theNbNodes, theNbCells, theNbGroups);
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
                              const gp_Pnt1d &thePoint) const
{
    MakeNode(theNode);
    UpdateNode(theNode, thePoint);
}

// ============================================================================
/*!
 *  \brief MakeNode()
*/
// ============================================================================
void MeshDS_Builder::MakeNode(MeshDS_Node &theNode,
                              const gp_Pnt2d &thePoint) const
{
    MakeNode(theNode);
    UpdateNode(theNode, thePoint);
}

// ============================================================================
/*!
 *  \brief MakeNode()
*/
// ============================================================================
void MeshDS_Builder::MakeNode(MeshDS_Node &theNode,
                              const gp_Pnt &thePoint) const
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
 *  \brief ResizeMesh()
*/
// ============================================================================
void MeshDS_Builder::ResizeMesh(const MeshDS_Mesh &theMesh,
                                const Standard_Integer theNbNodes,
                                const Standard_Integer theNbCells,
                                const Standard_Integer theNbGroups) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    aTMesh->ResizeNodes(theNbNodes);
    aTMesh->ResizeCells(theNbCells);
    aTMesh->ResizeGroups(theNbGroups);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void MeshDS_Builder::SetCell(const MeshDS_Mesh &theMesh,
                             const Standard_Integer theIndex,
                             const MeshDS_Cell &theCell) const
{
    // bind Cell to mesh
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    aTMesh->SetCell(theIndex, theCell);

    // set Cell parent mesh
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    aTCell->SetMesh(theMesh);
}

// ============================================================================
/*!
 *  \brief SetGroup()
*/
// ============================================================================
void MeshDS_Builder::SetGroup(const MeshDS_Mesh &theMesh,
                              const Standard_Integer theIndex,
                              const MeshDS_Group &theGroup) const
{
    // bind Group to mesh
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    aTMesh->SetGroup(theIndex, theGroup);

    // set Group parent mesh
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    aTGroup->SetMesh(theMesh);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void MeshDS_Builder::SetNode(const MeshDS_Mesh &theMesh,
                             const Standard_Integer theIndex,
                             const MeshDS_Node &theNode) const
{
    // bind node to mesh
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    aTMesh->SetNode(theIndex, theNode);

    // set node parent mesh
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    aTNode->SetMesh(theMesh);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void MeshDS_Builder::SetNode(const MeshDS_Cell &theCell,
                             const Standard_Integer theIndex,
                             const MeshDS_Node &theNode) const
{
    // Add node to cell definition
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    aTCell->SetNode(theIndex, theNode);

    // Link cell to node
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    MeshDS_ListOfObject& aList = aTNode->LinkedCells();
    aList.Append(theCell);
}

// ============================================================================
/*!
 *  \brief UpdateCell()
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const MeshAbs_TypeOfCell theCellType,
                                const Standard_Integer theNbNodes) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    aTCell->SetCellType(theCellType);
    aTCell->ResizeNodes(theNbNodes, Standard_False);
}

// ============================================================================
/*!
 *  \brief UpdateGroup()
*/
// ============================================================================
void MeshDS_Builder::UpdateGroup(const MeshDS_Group &theGroup,
                                 const TCollection_AsciiString& theName) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    aTGroup->SetName(theName);
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
}

// ============================================================================
/*!
 *  \brief UpdateNode()
*/
// ============================================================================
void MeshDS_Builder::UpdateNode(const MeshDS_Node &theNode,
                                const gp_Pnt2d& thePoint) const
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    Handle(MeshDS_Point2d) aPoint2d = new MeshDS_Point2d(thePoint);
    aTNode->SetPoint(aPoint2d);
}

// ============================================================================
/*!
 *  \brief UpdateNode()
*/
// ============================================================================
void MeshDS_Builder::UpdateNode(const MeshDS_Node &theNode,
                                const gp_Pnt& thePoint) const
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    Handle(MeshDS_Point3d) aPoint3d = new MeshDS_Point3d(thePoint);
    aTNode->SetPoint(aPoint3d);
}

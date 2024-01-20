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
#include <MeshDS_Builder.hxx>
#include <MeshDS_Cell1dRepresentation.hxx>
#include <MeshDS_Node1dRepresentation.hxx>
#include <MeshDS_TCell.hxx>
#include <MeshDS_TGroup.hxx>
#include <MeshDS_TMesh.hxx>
#include <MeshDS_TNode.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>
#include <Standard_NullObject.hxx>


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
*/
// ============================================================================
void MeshDS_Builder::AddCell(MeshDS_Group &theGroup,
                             const MeshDS_Cell &theCell) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshDS_Builder::AddCell()");

    MeshDS_ListOfObject& aList = aTGroup->Cells();
    if(!aList.Contains(theCell)) {
        aList.Append(theCell);
        aTGroup->SetModified(Standard_True);
    }
}

// ============================================================================
/*!
 *  \brief AddGroup()
*/
// ============================================================================
void MeshDS_Builder::AddGroup(MeshDS_Mesh &theMesh,
                              const MeshDS_Group &theGroup) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    if(aTMesh.IsNull())
        throw Standard_NullObject("MeshDS_Builder::AddGroup()");

    MeshDS_ListOfObject& aList = aTMesh->Groups();
    if(!aList.Contains(theGroup)) {
        aList.Append(theGroup);
        aTMesh->SetModified(Standard_True);
    }
}

// ============================================================================
/*!
 *  \brief AddNode()
*/
// ============================================================================
void MeshDS_Builder::AddNode(MeshDS_Cell &theCell,
                             const MeshDS_Node &theNode) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    if(aTCell.IsNull())
        throw Standard_NullObject("MeshDS_Builder::AddNode()");

    MeshDS_ListOfObject& aList = aTCell->Nodes();
    if(!aList.Contains(theNode)) {
        aList.Append(theNode);
        aTCell->SetModified(Standard_True);
    }
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
 *  \brief RemoveCell()
*/
// ============================================================================
void MeshDS_Builder::RemoveCell(MeshDS_Group &theGroup,
                                const MeshDS_Cell &theCell) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshDS_Builder::RemoveCell()");

    MeshDS_ListOfObject& aList = aTGroup->Cells();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    while(anIterator.More()) {
        if(anIterator.Value() == theCell) {
            aList.Remove(anIterator);
            aTGroup->SetModified(Standard_True);
            break;
        }
    }
}

// ============================================================================
/*!
 *  \brief RemoveGroup()
*/
// ============================================================================
void MeshDS_Builder::RemoveGroup(MeshDS_Mesh &theMesh,
                                const MeshDS_Group &theGroup) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    if(aTMesh.IsNull())
        throw Standard_NullObject("MeshDS_Builder::RemoveGroup()");

    MeshDS_ListOfObject& aList = aTMesh->Groups();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    while(anIterator.More()) {
        if(anIterator.Value() == theGroup) {
            aList.Remove(anIterator);
            aTMesh->SetModified(Standard_True);
            break;
        }
    }
}

// ============================================================================
/*!
 *  \brief RemoveNode()
*/
// ============================================================================
void MeshDS_Builder::RemoveNode(MeshDS_Cell &theCell,
                                const MeshDS_Node &theNode) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    if(aTCell.IsNull())
        throw Standard_NullObject("MeshDS_Builder::RemoveNode()");

    MeshDS_ListOfObject& aList = aTCell->Nodes();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    while(anIterator.More()) {
        if(anIterator.Value() == theNode) {
            aList.Remove(anIterator);
            aTCell->SetModified(Standard_True);
            break;
        }
    }
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
    if(aTCell.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UpdateCell()");

    Handle(MeshDS_Cell1dRepresentation) aRepresentation  = new MeshDS_Cell1dRepresentation(theCell1d);
    aTCell->SetModified(Standard_True);
    aTCell->SetRepresentation(aRepresentation);
}

// ============================================================================
/*!
 *  \brief UpdateGroup()
*/
// ============================================================================
void MeshDS_Builder::UpdateGroup(const MeshDS_Group &theGroup,
                                 const TCollection_AsciiString &theGroupName) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UpdateGroup()");

    aTGroup->SetGroupName(theGroupName);
    aTGroup->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateGroup()
*/
// ============================================================================
void MeshDS_Builder::UpdateGroup(const MeshDS_Group &theGroup,
                                 const Standard_Integer theGroupId) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UpdateGroup()");

    aTGroup->SetGroupId(theGroupId);
    aTGroup->SetModified(Standard_True);
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
    if(aTNode.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UpdateNode()");

    Handle(MeshDS_Node1dRepresentation) aRepresentation  = new MeshDS_Node1dRepresentation(theNode1d);
    aTNode->SetModified(Standard_True);
    aTNode->SetRepresentation(aRepresentation);
}

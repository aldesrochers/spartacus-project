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
#include <MeshDS_TElement.hxx>
#include <MeshDS_TGroup.hxx>
#include <MeshDS_TMesh.hxx>
#include <MeshDS_TNode.hxx>
#include <MeshDS_Tool.hxx>

// OpenCascade
#include <BRepLib_MakeVertex.hxx>
#include <Standard_DomainError.hxx>
#include <Standard_NullObject.hxx>


// ****************************************************************************
/*!
 *  \brief LinkElementToNode()
 *  Helper method used to link an element to a node.
*/
// ****************************************************************************
static void LinkElementToNode(const MeshDS_Node& theNode,
                              const MeshDS_Element& theElement)
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    if(aTNode.IsNull())
        throw Standard_NullObject("MeshDS_Builder::LinkElementToNode()");

    MeshDS_ListOfObject& aList = aTNode->LinkedElements();
    aList.Append(theElement);
    aTNode->SetModified(Standard_True);
}

// ****************************************************************************
/*!
 *  \brief LinkGroupToElement()
 *  Helper method used to link a group to an element.
*/
// ****************************************************************************
static void LinkGroupToElement(const MeshDS_Element& theElement,
                               const MeshDS_Group& theGroup)
{
    const Handle(MeshDS_TElement)& aTElement = *((Handle(MeshDS_TElement)*) &theElement.TObject());
    if(aTElement.IsNull())
        throw Standard_NullObject("MeshDS_Builder::LinkGroupToElement()");

    MeshDS_ListOfObject& aList = aTElement->LinkedGroups();
    aList.Append(theElement);
    aTElement->SetModified(Standard_True);
}

// ****************************************************************************
/*!
 *  \brief LinkMeshToGroup()
 *  Helper method used to link a mesh to a group.
*/
// ****************************************************************************
static void LinkMeshToGroup(const MeshDS_Group& theGroup,
                            const MeshDS_Mesh& theMesh)
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshDS_Builder::LinkMeshToGroup()");

    MeshDS_ListOfObject& aList = aTGroup->LinkedMeshes();
    aList.Append(theMesh);
    aTGroup->SetModified(Standard_True);
}

// ****************************************************************************
/*!
 *  \brief UnlinkElementFromNode()
*/
// ****************************************************************************
static void UnlinkElementFromNode(const MeshDS_Node& theNode,
                                  const MeshDS_Element& theElement)
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    if(aTNode.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UnlinkElementFromNode()");

    MeshDS_Object anObject = theElement;
    MeshDS_ListOfObject& aList = aTNode->LinkedElements();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    while(anIterator.More()) {
        if(anObject.IsEqual(anIterator.Value())) {
            aList.Remove(anIterator);
            aTNode->SetModified(Standard_True);
            break;
        }
        anIterator.Next();
    }
}

// ****************************************************************************
/*!
 *  \brief UnlinkGroupFromElement()
 *  Helper method used to unlink a group from an element.
*/
// ****************************************************************************
static void UnlinkGroupFromElement(const MeshDS_Element& theElement,
                                   const MeshDS_Group& theGroup)
{
    const Handle(MeshDS_TElement)& aTElement = *((Handle(MeshDS_TElement)*) &theElement.TObject());
    if(aTElement.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UnlinkGroupFromElement()");

    MeshDS_Object anObject = theGroup;
    MeshDS_ListOfObject& aList = aTElement->LinkedGroups();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    while(anIterator.More()) {
        if(anObject.IsEqual(anIterator.Value())) {
            aList.Remove(anIterator);
            aTElement->SetModified(Standard_True);
            break;
        }
        anIterator.Next();
    }
}

// ****************************************************************************
/*!
 *  \brief UnlinkMeshFromGroup()
 *  Helper method used to unlink a mesh from a group.
*/
// ****************************************************************************
static void UnlinkMeshFromGroup(const MeshDS_Group& theGroup,
                                const MeshDS_Mesh& theMesh)
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UnlinkMeshFromGroup()");

    MeshDS_Object anObject = theMesh;
    MeshDS_ListOfObject& aList = aTGroup->LinkedMeshes();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    while(anIterator.More()) {
        if(anObject.IsEqual(anIterator.Value())) {
            aList.Remove(anIterator);
            aTGroup->SetModified(Standard_True);
            break;
        }
        anIterator.Next();
    }
}


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
 *  \brief AddElement()
 *  Add an element to group.
*/
// ============================================================================
void MeshDS_Builder::AddElement(MeshDS_Group &theGroup,
                                const MeshDS_Element &theElement) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshDS_Builder::AddElement()");

    // add element in group
    MeshDS_ListOfObject& aList = aTGroup->Elements();
    aList.Append(theElement);
    aTGroup->SetModified(Standard_True);

    // link group to element
    LinkGroupToElement(theElement, theGroup);
}

// ============================================================================
/*!
 *  \brief AddGroup()
 *  Add a group to a mesh.
*/
// ============================================================================
void MeshDS_Builder::AddGroup(MeshDS_Mesh &theMesh,
                              const MeshDS_Group &theGroup) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    if(aTMesh.IsNull())
        throw Standard_NullObject("MeshDS_Builder::AddGroup()");

    // add group in mesh
    MeshDS_ListOfObject& aList = aTMesh->Groups();
    aList.Append(theGroup);
    aTMesh->SetModified(Standard_True);

    // set mesh in group
    LinkMeshToGroup(theGroup, theMesh);
}

// ============================================================================
/*!
 *  \brief MakeElement()
 *  Make an undefined (null) element.
*/
// ============================================================================
void MeshDS_Builder::MakeElement(MeshDS_Element &theElement) const
{
    Handle(MeshDS_TElement) aTElement = new MeshDS_TElement();
    MakeObject(theElement, aTElement);
}

// ============================================================================
/*!
 *  \brief MakeGroup()
 *  Make a new empty group.
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
 *  Make a new empty group with name.
*/
// ============================================================================
void MeshDS_Builder::MakeGroup(MeshDS_Group &theGroup,
                               const TCollection_AsciiString &theGroupName) const
{
    MakeGroup(theGroup);
    UpdateGroup(theGroup, theGroupName);
}

// ============================================================================
/*!
 *  \brief MakeLinearLine2N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearLine2N(MeshDS_Element &theElement,
                                      const MeshDS_Node &theNode1,
                                      const MeshDS_Node &theNode2) const
{
    MakeElement(theElement);
    UpdateLinearLine2N(theElement, theNode1, theNode2);
}

// ============================================================================
/*!
 *  \brief MakeLinearQuadrangle4N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearQuadrangle4N(MeshDS_Element &theElement,
                                            const MeshDS_Node &theNode1,
                                            const MeshDS_Node &theNode2,
                                            const MeshDS_Node &theNode3,
                                            const MeshDS_Node &theNode4) const
{
    MakeElement(theElement);
    UpdateLinearQuadrangle4N(theElement, theNode1, theNode2, theNode3, theNode4);
}

// ============================================================================
/*!
 *  \brief MakeLinearTriangle3N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearTriangle3N(MeshDS_Element &theElement,
                                          const MeshDS_Node &theNode1,
                                          const MeshDS_Node &theNode2,
                                          const MeshDS_Node &theNode3) const
{
    MakeElement(theElement);
    UpdateLinearTriangle3N(theElement, theNode1, theNode2, theNode3);
}

// ============================================================================
/*!
 *  \brief MakeMesh()
 *  Make a new mesh with default 3d dimension.
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
 *  Make a new undefined node.
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
 *  Make a new node in 3d space.
*/
// ============================================================================
void MeshDS_Builder::MakeNode(MeshDS_Node &theNode,
                              const gp_Pnt& thePoint) const
{
    MakeNode(theNode);
    UpdateNode(theNode, thePoint);
}

// ============================================================================
/*!
 *  \brief MakeObject()
 *  Make an object from a transient object.
*/
// ============================================================================
void MeshDS_Builder::MakeObject(MeshDS_Object &theObject,
                                 const Handle(MeshDS_TObject) &theTObject) const
{
    theObject.SetTObject(theTObject);
}

// ============================================================================
/*!
 *  \brief RemoveElement()
 *  Remove an element from group.
*/
// ============================================================================
void MeshDS_Builder::RemoveElement(MeshDS_Group &theGroup,
                                   const MeshDS_Element &theElement) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshDS_Builder::RemoveElement()");

    // remove element from group
    MeshDS_Object anObject = theElement;
    MeshDS_ListOfObject& aList = aTGroup->Elements();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    while(anIterator.More()) {
        if(anObject.IsEqual(anIterator.Value())) {
            aList.Remove(anIterator);
            aTGroup->SetModified(Standard_True);
            break;
        }
        anIterator.Next();
    }

    // unlink group from element
    UnlinkGroupFromElement(theElement, theGroup);
}

// ============================================================================
/*!
 *  \brief RemoveGroup()
 *  Remove a group from a mesh.
*/
// ============================================================================
void MeshDS_Builder::RemoveGroup(MeshDS_Mesh& theMesh,
                                 const MeshDS_Group &theGroup) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    if(aTMesh.IsNull())
        throw Standard_NullObject("MeshDS_Builder::RemoveGroup()");

    // remove group from mesh
    MeshDS_Object anObject = theGroup;
    MeshDS_ListOfObject& aList = aTMesh->Groups();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    while(anIterator.More()) {
        if(anObject.IsEqual(anIterator.Value())) {
            aList.Remove(anIterator);
            aTMesh->SetModified(Standard_True);
            break;
        }
        anIterator.Next();
    }

    // unlink group from element
    UnlinkMeshFromGroup(theGroup, theMesh);
}

// ============================================================================
/*!
 *  \brief UpdateLinearLine2N()
 *  Update a linear line element.
*/
// ============================================================================
void MeshDS_Builder::UpdateLinearLine2N(const MeshDS_Element &theElement,
                                        const MeshDS_Node &theNode1,
                                        const MeshDS_Node &theNode2) const
{
    const Handle(MeshDS_TElement)& aTElement = *((Handle(MeshDS_TElement)*) &theElement.TObject());
    if(aTElement.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UpdateLinearLine2N()");

    // update element
    aTElement->SetElementType(MeshAbs_ELE_LinearLine2N);
    aTElement->ResizeNodes(2);
    aTElement->SetNode(1, theNode1);
    aTElement->SetNode(2, theNode2);
    aTElement->SetModified(Standard_True);

    // link element to nodes
    LinkElementToNode(theNode1, theElement);
    LinkElementToNode(theNode2, theElement);
}

// ============================================================================
/*!
 *  \brief UpdateLinearQuadrangle4N()
 *  Update a linear quadrangle element.
*/
// ============================================================================
void MeshDS_Builder::UpdateLinearQuadrangle4N(const MeshDS_Element &theElement,
                                              const MeshDS_Node &theNode1,
                                              const MeshDS_Node &theNode2,
                                              const MeshDS_Node &theNode3,
                                              const MeshDS_Node &theNode4) const
{
    const Handle(MeshDS_TElement)& aTElement = *((Handle(MeshDS_TElement)*) &theElement.TObject());
    if(aTElement.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UpdateLinearQuadrangle()");

    // update element
    aTElement->SetElementType(MeshAbs_ELE_LinearQuadrangle4N);
    aTElement->ResizeNodes(4);
    aTElement->SetNode(1, theNode1);
    aTElement->SetNode(2, theNode2);
    aTElement->SetNode(3, theNode3);
    aTElement->SetNode(4, theNode4);
    aTElement->SetModified(Standard_True);

    // link element to nodes
    LinkElementToNode(theNode1, theElement);
    LinkElementToNode(theNode2, theElement);
    LinkElementToNode(theNode3, theElement);
    LinkElementToNode(theNode4, theElement);
}

// ============================================================================
/*!
 *  \brief UpdateLinearTriangle3N()
 *  Update a linear triangle element.
*/
// ============================================================================
void MeshDS_Builder::UpdateLinearTriangle3N(const MeshDS_Element &theElement,
                                            const MeshDS_Node &theNode1,
                                            const MeshDS_Node &theNode2,
                                            const MeshDS_Node &theNode3) const
{
    const Handle(MeshDS_TElement)& aTElement = *((Handle(MeshDS_TElement)*) &theElement.TObject());
    if(aTElement.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UpdateLinearLine()");

    // update element
    aTElement->SetElementType(MeshAbs_ELE_LinearTriangle3N);
    aTElement->ResizeNodes(4);
    aTElement->SetNode(1, theNode1);
    aTElement->SetNode(2, theNode2);
    aTElement->SetNode(3, theNode3);
    aTElement->SetModified(Standard_True);

    // link element to nodes
    LinkElementToNode(theNode1, theElement);
    LinkElementToNode(theNode2, theElement);
    LinkElementToNode(theNode3, theElement);
}

// ============================================================================
/*!
 *  \brief UpdateGroup()
 *  Update a group.
*/
// ============================================================================
void MeshDS_Builder::UpdateGroup(const MeshDS_Group& theGroup,
                                 const TCollection_AsciiString& theGroupName) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UpdateGroup()");

    aTGroup->SetGroupName(theGroupName);
    aTGroup->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateNode()
 *  Update a node.
*/
// ============================================================================
void MeshDS_Builder::UpdateNode(const MeshDS_Node &theNode,
                                const gp_Pnt& thePoint) const
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    if(aTNode.IsNull())
        throw Standard_NullObject("MeshDS_Builder::UpdateNode()");

    aTNode->SetPoint(thePoint);
    aTNode->SetModified(Standard_True);
}

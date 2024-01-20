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
#include <MeshDS.hxx>
#include <MeshDS_Element.hxx>
#include <MeshDS_Group.hxx>
#include <MeshDS_TElement.hxx>
#include <MeshDS_TGroup.hxx>
#include <MeshDS_TMesh.hxx>
#include <MeshExp.hxx>

// OpenCascasde
#include <Standard_NullObject.hxx>


// ============================================================================
/*!
 *  \brief ListElements()
 *  List all elements contained within a group.
*/
// ============================================================================
void MeshExp::ListElements(const MeshDS_Group &theGroup,
                           MeshTools_ListOfObject &theList)
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshExp::ListElements()");

    MeshDS_ListOfObject& aList = aTGroup->Elements();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        MeshDS_Element anElement = MeshDS::Element(anIterator.Value());
        if(!theList.Contains(anElement))
            theList.Append(anElement);
    }
}

// ============================================================================
/*!
 *  \brief ListElements()
 *  List all elements contained within a mesh.
*/
// ============================================================================
void MeshExp::ListElements(const MeshDS_Mesh &theMesh,
                           MeshTools_ListOfObject &theList)
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    if(aTMesh.IsNull())
        throw Standard_NullObject("MeshExp::ListElements()");

    MeshDS_ListOfObject& aList = aTMesh->Groups();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        MeshDS_Group aGroup = MeshDS::Group(anIterator.Value());
        MeshDS_ListOfObject aList2;
        ListElements(aGroup, aList2);
        MeshDS_ListIteratorOfListOfObject anIterator2(aList2);
        for(; anIterator2.More(); anIterator2.Next()) {
            MeshDS_Element anElement = MeshDS::Element(anIterator2.Value());
            if(!theList.Contains(anElement))
                theList.Append(anElement);
        }
    }
}

// ============================================================================
/*!
 *  \brief ListGroups()
 *  List all groups contained within a mesh.
*/
// ============================================================================
void MeshExp::ListGroups(const MeshDS_Mesh &theMesh,
                         MeshTools_ListOfObject &theList)
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    if(aTMesh.IsNull())
        throw Standard_NullObject("MeshExp::ListElements()");

    MeshDS_ListOfObject& aList = aTMesh->Groups();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        MeshDS_Group aGroup = MeshDS::Group(anIterator.Value());
        if(!theList.Contains(aGroup))
            theList.Append(aGroup);
    }
}

// ============================================================================
/*!
 *  \brief ListNodes()
 *  List all nodes contained within an element.
*/
// ============================================================================
void MeshExp::ListNodes(const MeshDS_Element& theElement,
                        MeshTools_ListOfObject &theList)
{
    const Handle(MeshDS_TElement)& aTElement = *((Handle(MeshDS_TElement)*) &theElement.TObject());
    if(aTElement.IsNull())
        throw Standard_NullObject("MeshExp::ListNodes()");

    MeshDS_Array1OfObject& anArray = aTElement->Nodes();
    for(Standard_Integer i=anArray.Lower(); i<=anArray.Upper(); i++) {
        MeshDS_Node aNode = MeshDS::Node(anArray.Value(i));
        if(!theList.Contains(aNode))
            theList.Append(aNode);
    }
}

// ============================================================================
/*!
 *  \brief ListNodes()
 *  List all nodes contained within a group.
*/
// ============================================================================
void MeshExp::ListNodes(const MeshDS_Group &theGroup,
                        MeshTools_ListOfObject &theList)
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    if(aTGroup.IsNull())
        throw Standard_NullObject("MeshExp::ListNodes()");

    MeshDS_ListOfObject& aList = aTGroup->Elements();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        MeshDS_Element anElement = MeshDS::Element(anIterator.Value());
        MeshDS_ListOfObject aList2;
        ListNodes(anElement, aList2);
        MeshDS_ListIteratorOfListOfObject anIterator2(aList2);
        for(; anIterator2.More(); anIterator2.Next()) {
            MeshDS_Node aNode = MeshDS::Node(anIterator2.Value());
            if(!theList.Contains(aNode))
                theList.Append(aNode);
        }
    }
}

// ============================================================================
/*!
 *  \brief ListNodes()
 *  List all nodes contained within a mesh.
*/
// ============================================================================
void MeshExp::ListNodes(const MeshDS_Mesh &theMesh,
                        MeshTools_ListOfObject &theList)
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    if(aTMesh.IsNull())
        throw Standard_NullObject("MeshExp::ListNodes()");

    MeshDS_ListOfObject& aList = aTMesh->Groups();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        MeshDS_Group aGroup = MeshDS::Group(anIterator.Value());
        MeshDS_ListOfObject aList2;
        ListNodes(aGroup, aList2);
        MeshDS_ListIteratorOfListOfObject anIterator2(aList2);
        for(; anIterator2.More(); anIterator2.Next()) {
            MeshDS_Node aNode = MeshDS::Node(anIterator2.Value());
            if(!theList.Contains(aNode))
                theList.Append(aNode);
        }
    }
}

// ============================================================================
/*!
 *  \brief MapElements()
 *  Map all elements contained within a group.
*/
// ============================================================================
void MeshExp::MapElements(const MeshDS_Group &theGroup,
                          MeshTools_IndexedMapOfObject &theMap)
{
    MeshTools_ListOfObject aList;
    ListElements(theGroup, aList);
    MeshTools_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theMap.Add(anIterator.Value());
}

// ============================================================================
/*!
 *  \brief MapElements()
 *  Map all elements contained within a mesh.
*/
// ============================================================================
void MeshExp::MapElements(const MeshDS_Mesh &theMesh,
                          MeshTools_IndexedMapOfObject &theMap)
{
    MeshTools_ListOfObject aList;
    ListElements(theMesh, aList);
    MeshTools_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theMap.Add(anIterator.Value());
}

// ============================================================================
/*!
 *  \brief MapGroups()
 *  Map all groups contained within a mesh.
*/
// ============================================================================
void MeshExp::MapGroups(const MeshDS_Mesh &theMesh,
                        MeshTools_IndexedMapOfObject &theMap)
{
    MeshTools_ListOfObject aList;
    ListGroups(theMesh, aList);
    MeshTools_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theMap.Add(anIterator.Value());
}

// ============================================================================
/*!
 *  \brief MapNodes()
 *  Map all nodes contained within an element.
*/
// ============================================================================
void MeshExp::MapNodes(const MeshDS_Element &theElement,
                       MeshTools_IndexedMapOfObject &theMap)
{
    MeshTools_ListOfObject aList;
    ListNodes(theElement, aList);
    MeshTools_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theMap.Add(anIterator.Value());
}

// ============================================================================
/*!
 *  \brief MapNodes()
 *  Map all nodes contained within a group.
*/
// ============================================================================
void MeshExp::MapNodes(const MeshDS_Group &theGroup,
                       MeshTools_IndexedMapOfObject &theMap)
{
    MeshTools_ListOfObject aList;
    ListNodes(theGroup, aList);
    MeshTools_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theMap.Add(anIterator.Value());
}

// ============================================================================
/*!
 *  \brief MapNodes()
 *  Map all nodes contained within a mesh.
*/
// ============================================================================
void MeshExp::MapNodes(const MeshDS_Mesh &theMesh,
                       MeshTools_IndexedMapOfObject &theMap)
{
    MeshTools_ListOfObject aList;
    ListNodes(theMesh, aList);
    MeshTools_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theMap.Add(anIterator.Value());
}


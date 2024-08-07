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
#include <ModelDS.hxx>
#include <ModelDS_TElement.hxx>
#include <ModelDS_TNode.hxx>
#include <ModelExp.hxx>


// ============================================================================
/*!
 *  \brief ListDOFs()
*/
// ============================================================================
void ModelExp::ListDOFs(const ModelDS_Node &theNode,
                        ModelTools_ListOfObject &theList)
{
    const ModelDS_TNode* aTNode = static_cast<const ModelDS_TNode*>(theNode.TObject().get());
    const ModelDS_ListOfObject& aList = aTNode->DOFs();
    ModelDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theList.Append(anIterator.Value());
}

// ============================================================================
/*!
 *  \brief MapDOFs()
*/
// ============================================================================
void ModelExp::MapDOFs(const ModelDS_Node &theNode,
                       ModelTools_IndexedMapOfObject &theMap)
{
    const ModelDS_TNode* aTNode = static_cast<const ModelDS_TNode*>(theNode.TObject().get());
    const ModelDS_ListOfObject& aList = aTNode->DOFs();
    ModelDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theMap.Add(anIterator.Value());
}

// ============================================================================
/*!
 *  \brief MapModelizations()
*/
// ============================================================================
void ModelExp::MapModelizations(const ModelDS_Element &theElement,
                                ModelTools_IndexedMapOfObject &theMap)
{
    /*
    const ModelDS_TElement* aTElement = static_cast<const ModelDS_TElement*>(theElement.TObject().get());
    const ModelDS_ListOfObject& aList = aTElement->Modelizations();
    ModelDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theMap.Add(anIterator.Value());
    */
}


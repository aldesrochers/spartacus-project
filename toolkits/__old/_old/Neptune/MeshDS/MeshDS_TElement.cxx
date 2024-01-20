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
#include <MeshDS_TElement.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TElement::MeshDS_TElement()
    : myElementType(MeshAbs_ELE_Null)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TElement::~MeshDS_TElement()
{

}

// ============================================================================
/*!
 *  \brief ElementType()
*/
// ============================================================================
MeshAbs_TypeOfElement MeshDS_TElement::ElementType() const
{
    return myElementType;
}

// ============================================================================
/*!
 *  \brief LinkedGroups()
*/
// ============================================================================
MeshDS_ListOfObject& MeshDS_TElement::LinkedGroups()
{
    return myLinkedGroups;
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer MeshDS_TElement::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const MeshDS_Node& MeshDS_TElement::Node(const Standard_Integer theIndex) const
{
    MeshDS_Object anObject = myNodes.Value(theIndex);
    return MeshDS::Node(anObject);
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
MeshDS_Array1OfObject& MeshDS_TElement::Nodes()
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
MeshAbs_TypeOfObject MeshDS_TElement::ObjectType() const
{
    return MeshAbs_OBJ_Element;
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void MeshDS_TElement::ResizeNodes(const Standard_Integer theNbNodes,
                                  const Standard_Boolean theCopyOld)
{
    myNodes.Resize(1, theNbNodes, theCopyOld);
}

// ============================================================================
/*!
 *  \brief SetElementType()
*/
// ============================================================================
void MeshDS_TElement::SetElementType(const MeshAbs_TypeOfElement theElementType)
{
    myElementType = theElementType;
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void MeshDS_TElement::SetNode(const Standard_Integer theIndex,
                              const MeshDS_Node& theNode)
{
    myNodes.SetValue(theIndex, theNode);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TElement, MeshDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TElement, MeshDS_TObject);

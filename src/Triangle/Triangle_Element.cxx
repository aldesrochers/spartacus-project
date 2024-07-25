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
#include <Triangle_Element.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Element::Triangle_Element()
    : myType(Triangle_InvalidElement),
    myMaximumArea(-1.)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_Element::~Triangle_Element()
{

}

// ============================================================================
/*!
 *  \brief Attribute()
*/
// ============================================================================
Standard_Real Triangle_Element::Attribute(const Standard_Integer theIndex) const
{
    return myAttributes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Attributes()
*/
// ============================================================================
const TColStd_Array1OfReal& Triangle_Element::Attributes() const
{
    return myAttributes;
}

// ============================================================================
/*!
 *  \brief ChangeAttributes()
*/
// ============================================================================
TColStd_Array1OfReal& Triangle_Element::ChangeAttributes()
{
    return myAttributes;
}

// ============================================================================
/*!
 *  \brief ChangeNeighbors()
*/
// ============================================================================
TColStd_Array1OfInteger& Triangle_Element::ChangeNeighbors()
{
    return myNeighbors;
}

// ============================================================================
/*!
 *  \brief ChangeNodes()
*/
// ============================================================================
TColStd_Array1OfInteger& Triangle_Element::ChangeNodes()
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief MaximumArea()
*/
// ============================================================================
Standard_Real Triangle_Element::MaximumArea() const
{
    return myMaximumArea;
}

// ============================================================================
/*!
 *  \brief NbAttributes()
*/
// ============================================================================
Standard_Integer Triangle_Element::NbAttributes() const
{
    return myAttributes.Size();
}

// ============================================================================
/*!
 *  \brief NbNeighbors()
*/
// ============================================================================
Standard_Integer Triangle_Element::NbNeighbors() const
{
    return myNeighbors.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Triangle_Element::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Neighbor()
*/
// ============================================================================
Standard_Integer Triangle_Element::Neighbor(const Standard_Integer theIndex) const
{
    return myNeighbors.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Neighbors()
*/
// ============================================================================
const TColStd_Array1OfInteger& Triangle_Element::Neighbors() const
{
    return myNeighbors;
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Standard_Integer Triangle_Element::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const TColStd_Array1OfInteger& Triangle_Element::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ResizeAttributes()
*/
// ============================================================================
void Triangle_Element::ResizeAttributes(const Standard_Integer theNbAttributes,
                                        const Standard_Boolean toCopyData)
{
    myAttributes.Resize(1, theNbAttributes, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNeighbors()
*/
// ============================================================================
void Triangle_Element::ResizeNeighbors(const Standard_Integer theNbNeighbors,
                                       const Standard_Boolean toCopyData)
{
    myNeighbors.Resize(1, theNbNeighbors, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Triangle_Element::ResizeNodes(const Standard_Integer theNbNodes,
                                   const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetAttribute()
*/
// ============================================================================
void Triangle_Element::SetAttribute(const Standard_Integer theIndex,
                                    const Standard_Real theValue)
{
    myAttributes.SetValue(theIndex, theValue);
}

// ============================================================================
/*!
 *  \brief SetMaximumArea()
*/
// ============================================================================
void Triangle_Element::SetMaximumArea(const Standard_Real theMaximumArea)
{
    myMaximumArea = theMaximumArea;
}

// ============================================================================
/*!
 *  \brief SetNeighbor()
*/
// ============================================================================
void Triangle_Element::SetNeighbor(const Standard_Integer theIndex,
                                   const Standard_Integer theNeighbor)
{
    myNeighbors.SetValue(theIndex, theNeighbor);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Triangle_Element::SetNode(const Standard_Integer theIndex,
                               const Standard_Integer theNode)
{
    myNodes.SetValue(theIndex, theNode);
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void Triangle_Element::SetType(const Triangle_TypeOfElement theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
Triangle_TypeOfElement Triangle_Element::Type() const
{
    return myType;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Triangle_Element, Triangle_Object)
IMPLEMENT_STANDARD_RTTIEXT(Triangle_Element, Triangle_Object)


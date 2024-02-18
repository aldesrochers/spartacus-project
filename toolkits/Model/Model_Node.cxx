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
#include <Model_Node.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Node::Model_Node()
{
    ResizeCoordinates(3, Standard_False);
    SetX(0.);
    SetY(0.);
    SetZ(0.);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Node::Model_Node(const Standard_Integer theNbCoordinates)
{
    ResizeCoordinates(theNbCoordinates, Standard_False);
    SetX(0.);
    SetY(0.);
    SetZ(0.);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Node::Model_Node(const Standard_Real theX)
{
    ResizeCoordinates(1, Standard_False);
    SetX(theX);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Node::Model_Node(const Standard_Real theX,
                       const Standard_Real theY)
{
    ResizeCoordinates(2, Standard_False);
    SetX(theX);
    SetY(theY);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Node::Model_Node(const Standard_Real theX,
                       const Standard_Real theY,
                       const Standard_Real theZ)
{
    ResizeCoordinates(3, Standard_False);
    SetX(theX);
    SetY(theY);
    SetZ(theZ);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Node::~Model_Node()
{

}

// ============================================================================
/*!
 *  \brief Coordinate()
*/
// ============================================================================
Standard_Real Model_Node::Coordinate(const Standard_Integer theIndex) const
{
    return myCoordinates.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief NbCoordinates()
*/
// ============================================================================
Standard_Integer Model_Node::NbCoordinates() const
{
    return myCoordinates.Size();
}

// ============================================================================
/*!
 *  \brief ResizeCoordinates()
*/
// ============================================================================
void Model_Node::ResizeCoordinates(const Standard_Integer theNbCoordinates,
                                   const Standard_Boolean toCopyData)
{
    Standard_DomainError_Raise_if(theNbCoordinates < 1,
                                  "Model_Node::Model_ResizeCoordinates()");
    Standard_DomainError_Raise_if(theNbCoordinates > 3,
                                  "Model_Node::Model_ResizeCoordinates()");
    myCoordinates.Resize(1, theNbCoordinates, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetCoordinate()
*/
// ============================================================================
void Model_Node::SetCoordinate(const Standard_Integer theIndex,
                               const Standard_Real theCoordinate)
{
    myCoordinates.SetValue(theIndex, theCoordinate);
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void Model_Node::SetX(const Standard_Real theX)
{
    myCoordinates.SetValue(1, theX);
}

// ============================================================================
/*!
 *  \brief SetY()
*/
// ============================================================================
void Model_Node::SetY(const Standard_Real theY)
{
    myCoordinates.SetValue(2, theY);
}

// ============================================================================
/*!
 *  \brief SetZ()
*/
// ============================================================================
void Model_Node::SetZ(const Standard_Real theZ)
{
    myCoordinates.SetValue(3, theZ);
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real Model_Node::X() const
{
    return myCoordinates.Value(1);
}

// ============================================================================
/*!
 *  \brief Y()
*/
// ============================================================================
Standard_Real Model_Node::Y() const
{
    return myCoordinates.Value(2);
}

// ============================================================================
/*!
 *  \brief Z()
*/
// ============================================================================
Standard_Real Model_Node::Z() const
{
    return myCoordinates.Value(3);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Node, Model_Object);
IMPLEMENT_STANDARD_RTTIEXT(Model_Node, Model_Object);

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
#include <Mesh1d_Vertex.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Vertex::Mesh1d_Vertex()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Vertex::Mesh1d_Vertex(const gp_Pnt1d &thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Vertex::Mesh1d_Vertex(const Standard_Real theX)
{
    myPoint.SetX(theX);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh1d_Vertex::~Mesh1d_Vertex()
{

}

// ============================================================================
/*!
 *  Distance()
*/
// ============================================================================
Standard_Real Mesh1d_Vertex::Distance(const Handle(Mesh1d_Vertex) &theOther) const
{
    const gp_Pnt1d& aPoint = theOther->Point();
    return aPoint.Distance(myPoint);
}

// ============================================================================
/*!
 *  Point()
*/
// ============================================================================
const gp_Pnt1d& Mesh1d_Vertex::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void Mesh1d_Vertex::SetPoint(const gp_Pnt1d &thePoint)
{
    myPoint = thePoint;
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void Mesh1d_Vertex::SetX(const Standard_Real theX)
{
    myPoint.SetX(theX);
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real Mesh1d_Vertex::X() const
{
    return myPoint.X();
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh1d_Vertex, Mesh1d_Entity)
IMPLEMENT_STANDARD_RTTIEXT(Mesh1d_Vertex, Mesh1d_Entity)

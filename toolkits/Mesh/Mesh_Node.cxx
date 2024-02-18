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
#include <Mesh_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_Node::Mesh_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_Node::Mesh_Node(const gp_Pnt &thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_Node::Mesh_Node(const Standard_Real theX,
                     const Standard_Real theY,
                     const Standard_Real theZ)
{
    myPoint.SetX(theX);
    myPoint.SetY(theY);
    myPoint.SetZ(theZ);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh_Node::~Mesh_Node()
{

}

// ============================================================================
/*!
 *  Point()
*/
// ============================================================================
const gp_Pnt& Mesh_Node::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void Mesh_Node::SetPoint(const gp_Pnt &thePoint)
{
    myPoint = thePoint;
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void Mesh_Node::SetX(const Standard_Real theX)
{
    myPoint.SetX(theX);
}

// ============================================================================
/*!
 *  \brief SetY()
*/
// ============================================================================
void Mesh_Node::SetY(const Standard_Real theY)
{
    myPoint.SetY(theY);
}

// ============================================================================
/*!
 *  \brief SetZ()
*/
// ============================================================================
void Mesh_Node::SetZ(const Standard_Real theZ)
{
    myPoint.SetZ(theZ);
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real Mesh_Node::X() const
{
    return myPoint.X();
}

// ============================================================================
/*!
 *  \brief Y()
*/
// ============================================================================
Standard_Real Mesh_Node::Y() const
{
    return myPoint.Y();
}

// ============================================================================
/*!
 *  \brief Z()
*/
// ============================================================================
Standard_Real Mesh_Node::Z() const
{
    return myPoint.Z();
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh_Node, Mesh_Object)
IMPLEMENT_STANDARD_RTTIEXT(Mesh_Node, Mesh_Object)

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
#include <Mesh2d_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_Node::Mesh2d_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_Node::Mesh2d_Node(const Standard_Real theX,
                         const Standard_Real theY)
    : myNode2d(theX, theY)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh2d_Node::~Mesh2d_Node()
{

}

// ============================================================================
/*!
 *  \brief Distance()
*/
// ============================================================================
Standard_Real Mesh2d_Node::Distance(const Handle(Mesh2d_Node) &theOther) const
{
    return myNode2d.Distance(theOther->Node2d());
}

// ============================================================================
/*!
 *  \brief Node2d()
*/
// ============================================================================
const mp_Node2d& Mesh2d_Node::Node2d() const
{
    return myNode2d;
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void Mesh2d_Node::SetX(const Standard_Real theX)
{
    myNode2d.SetX(theX);
}

// ============================================================================
/*!
 *  \brief SetY()
*/
// ============================================================================
void Mesh2d_Node::SetY(const Standard_Real theY)
{
    myNode2d.SetY(theY);
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real Mesh2d_Node::X() const
{
    return myNode2d.X();
}

// ============================================================================
/*!
 *  \brief Y()
*/
// ============================================================================
Standard_Real Mesh2d_Node::Y() const
{
    return myNode2d.Y();
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh2d_Node, Mesh2d_Object);
IMPLEMENT_STANDARD_RTTIEXT(Mesh2d_Node, Mesh2d_Object);

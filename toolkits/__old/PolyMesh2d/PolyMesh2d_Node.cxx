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
#include <PolyMesh2d_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh2d_Node::PolyMesh2d_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh2d_Node::PolyMesh2d_Node(const gp_Pnt2d& thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh2d_Node::PolyMesh2d_Node(const Standard_Real theX,
                                 const Standard_Real theY)
{
    myPoint.SetX(theX);
    myPoint.SetY(theY);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
PolyMesh2d_Node::~PolyMesh2d_Node()
{

}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt2d& PolyMesh2d_Node::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void PolyMesh2d_Node::SetPoint(const gp_Pnt2d &thePoint)
{
    myPoint = thePoint;
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void PolyMesh2d_Node::SetX(const Standard_Real theX)
{
    myPoint.SetX(theX);
}

// ============================================================================
/*!
 *  \brief SetY()
*/
// ============================================================================
void PolyMesh2d_Node::SetY(const Standard_Real theY)
{
    myPoint.SetY(theY);
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real PolyMesh2d_Node::X() const
{
    return myPoint.X();
}

// ============================================================================
/*!
 *  \brief Y()
*/
// ============================================================================
Standard_Real PolyMesh2d_Node::Y() const
{
    return myPoint.Y();
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(PolyMesh2d_Node, PolyMesh2d_Object)
IMPLEMENT_STANDARD_RTTIEXT(PolyMesh2d_Node, PolyMesh2d_Object)

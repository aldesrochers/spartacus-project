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
#include <PolyMesh_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Node::PolyMesh_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Node::PolyMesh_Node(const gp_Pnt& thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Node::PolyMesh_Node(const Standard_Real theX,
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
PolyMesh_Node::~PolyMesh_Node()
{

}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt& PolyMesh_Node::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void PolyMesh_Node::SetPoint(const gp_Pnt &thePoint)
{
    myPoint = thePoint;
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void PolyMesh_Node::SetX(const Standard_Real theX)
{
    myPoint.SetX(theX);
}

// ============================================================================
/*!
 *  \brief SetY()
*/
// ============================================================================
void PolyMesh_Node::SetY(const Standard_Real theY)
{
    myPoint.SetY(theY);
}

// ============================================================================
/*!
 *  \brief SetZ()
*/
// ============================================================================
void PolyMesh_Node::SetZ(const Standard_Real theZ)
{
    myPoint.SetZ(theZ);
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real PolyMesh_Node::X() const
{
    return myPoint.X();
}

// ============================================================================
/*!
 *  \brief Y()
*/
// ============================================================================
Standard_Real PolyMesh_Node::Y() const
{
    return myPoint.Y();
}

// ============================================================================
/*!
 *  \brief Z()
*/
// ============================================================================
Standard_Real PolyMesh_Node::Z() const
{
    return myPoint.Z();
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(PolyMesh_Node, PolyMesh_Object)
IMPLEMENT_STANDARD_RTTIEXT(PolyMesh_Node, PolyMesh_Object)

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
#include <Triangle_Node.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Node::Triangle_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Node::Triangle_Node(const gp_Pnt2d &thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_Node::~Triangle_Node()
{

}

// ============================================================================
/*!
 *  \brief Attributes()
*/
// ============================================================================
const TColStd_Array1OfInteger& Triangle_Node::Attributes() const
{
    return myAttributes;
}

// ============================================================================
/*!
 *  \brief BoundaryMarker()
*/
// ============================================================================
Standard_Integer Triangle_Node::BoundaryMarker() const
{
    return myBoundaryMarker;
}

// ============================================================================
/*!
 *  \brief ChangeAttributes()
*/
// ============================================================================
TColStd_Array1OfInteger& Triangle_Node::ChangeAttributes()
{
    return myAttributes;
}

// ============================================================================
/*!
 *  \brief ChangePoint()
*/
// ============================================================================
gp_Pnt2d& Triangle_Node::ChangePoint()
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief NbAttributes()
*/
// ============================================================================
Standard_Integer Triangle_Node::NbAttributes() const
{
    return myAttributes.Size();
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt2d& Triangle_Node::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetBoundaryMarker()
*/
// ============================================================================
void Triangle_Node::SetBoundaryMarker(const Standard_Integer theBoundaryMarker)
{
    myBoundaryMarker = theBoundaryMarker;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void Triangle_Node::SetPoint(const gp_Pnt2d &thePoint)
{
    myPoint = thePoint;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Triangle_Node, Triangle_Object)
IMPLEMENT_STANDARD_RTTIEXT(Triangle_Node, Triangle_Object)


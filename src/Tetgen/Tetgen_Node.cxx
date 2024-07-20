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
#include <Tetgen_Node.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Tetgen_Node::Tetgen_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Tetgen_Node::Tetgen_Node(const gp_Pnt &thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Tetgen_Node::~Tetgen_Node()
{

}

// ============================================================================
/*!
 *  \brief Attributes()
*/
// ============================================================================
const TColStd_Array1OfInteger& Tetgen_Node::Attributes() const
{
    return myAttributes;
}

// ============================================================================
/*!
 *  \brief BoundaryMarker()
*/
// ============================================================================
Standard_Integer Tetgen_Node::BoundaryMarker() const
{
    return myBoundaryMarker;
}

// ============================================================================
/*!
 *  \brief ChangeAttributes()
*/
// ============================================================================
TColStd_Array1OfInteger& Tetgen_Node::ChangeAttributes()
{
    return myAttributes;
}

// ============================================================================
/*!
 *  \brief ChangePoint()
*/
// ============================================================================
gp_Pnt& Tetgen_Node::ChangePoint()
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief NbAttributes()
*/
// ============================================================================
Standard_Integer Tetgen_Node::NbAttributes() const
{
    return myAttributes.Size();
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt& Tetgen_Node::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetBoundaryMarker()
*/
// ============================================================================
void Tetgen_Node::SetBoundaryMarker(const Standard_Integer theBoundaryMarker)
{
    myBoundaryMarker = theBoundaryMarker;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void Tetgen_Node::SetPoint(const gp_Pnt &thePoint)
{
    myPoint = thePoint;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Tetgen_Node, Tetgen_Object)
IMPLEMENT_STANDARD_RTTIEXT(Tetgen_Node, Tetgen_Object)


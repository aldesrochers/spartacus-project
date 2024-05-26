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
#include <FE1d_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_Node::FE1d_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_Node::FE1d_Node(const gp_Pnt1d& thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE1d_Node::~FE1d_Node()
{

}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt1d& FE1d_Node::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void FE1d_Node::SetPoint(const gp_Pnt1d& thePoint)
{
    myPoint = thePoint;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE1d_Node, Standard_Transient);
IMPLEMENT_STANDARD_RTTIEXT(FE1d_Node, Standard_Transient);

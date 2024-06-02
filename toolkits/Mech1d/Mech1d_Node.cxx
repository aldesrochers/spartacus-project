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
#include <Mech1d_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mech1d_Node::Mech1d_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mech1d_Node::Mech1d_Node(const gp_Pnt1d& thePoint)
    : FE1d_Node(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mech1d_Node::~Mech1d_Node()
{

}

// ============================================================================
/*!
 *  \brief DX()
*/
// ============================================================================
const Handle(DOF_Translation)& Mech1d_Node::DX() const
{
    return myDX;
}

// ============================================================================
/*!
 *  \brief SetDX()
*/
// ============================================================================
void Mech1d_Node::SetDX(const Handle(DOF_Translation) &theDX)
{
    myDX = theDX;
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mech1d_Node, FE1d_Node)
IMPLEMENT_STANDARD_RTTIEXT(Mech1d_Node, FE1d_Node)

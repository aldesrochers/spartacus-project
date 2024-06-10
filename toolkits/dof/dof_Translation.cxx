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
#include <dof_Translation.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
dof_Translation::dof_Translation()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
dof_Translation::~dof_Translation()
{

}

// ============================================================================
/*!
 *  \brief Acceleration()
*/
// ============================================================================
Standard_Real dof_Translation::Acceleration() const
{
    return myAcceleration;
}

// ============================================================================
/*!
 *  \brief Displacement()
*/
// ============================================================================
Standard_Real dof_Translation::Displacement() const
{
    return myDisplacement;
}

// ============================================================================
/*!
 *  \brief SetAcceleration()
*/
// ============================================================================
void dof_Translation::SetAcceleration(const Standard_Real theAcceleration)
{
    myAcceleration = theAcceleration;
}

// ============================================================================
/*!
 *  \brief SetDisplacement()
*/
// ============================================================================
void dof_Translation::SetDisplacement(const Standard_Real theDisplacement)
{
    myDisplacement = theDisplacement;
}

// ============================================================================
/*!
 *  \brief SetVelocity()
*/
// ============================================================================
void dof_Translation::SetVelocity(const Standard_Real theVelocity)
{
    myVelocity = theVelocity;
}

// ============================================================================
/*!
 *  \brief Velocity()
*/
// ============================================================================
Standard_Real dof_Translation::Velocity() const
{
    return myVelocity;
}


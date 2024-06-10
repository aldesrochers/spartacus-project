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
#include <fep_Translation.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_Translation::fep_Translation()
{

}
// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
fep_Translation::~fep_Translation()
{

}

// ============================================================================
/*!
 *  \brief Acceleration()
*/
// ============================================================================
Standard_Real fep_Translation::Acceleration() const
{
    return myAcceleration;
}

// ============================================================================
/*!
 *  \brief Displacement()
*/
// ============================================================================
Standard_Real fep_Translation::Displacement() const
{
    return myDisplacement;
}

// ============================================================================
/*!
 *  \brief Force()
*/
// ============================================================================
Standard_Real fep_Translation::Force() const
{
    return myForce;
}

// ============================================================================
/*!
 *  \brief SetAcceleration()
*/
// ============================================================================
void fep_Translation::SetAcceleration(const Standard_Real theAcceleration)
{
    myAcceleration = theAcceleration;
}

// ============================================================================
/*!
 *  \brief SetDisplacement()
*/
// ============================================================================
void fep_Translation::SetDisplacement(const Standard_Real theDisplacement)
{
    myDisplacement = theDisplacement;
}

// ============================================================================
/*!
 *  \brief SetForce()
*/
// ============================================================================
void fep_Translation::SetForce(const Standard_Real theForce)
{
    myForce = theForce;
}

// ============================================================================
/*!
 *  \brief SetVelocity()
*/
// ============================================================================
void fep_Translation::SetVelocity(const Standard_Real theVelocity)
{
    myVelocity = theVelocity;
}

// ============================================================================
/*!
 *  \brief Velocity()
*/
// ============================================================================
Standard_Real fep_Translation::Velocity() const
{
    return myVelocity;
}



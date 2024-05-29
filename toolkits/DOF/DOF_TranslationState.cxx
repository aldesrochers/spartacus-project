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
#include <DOF_TranslationState.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOF_TranslationState::DOF_TranslationState()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DOF_TranslationState::~DOF_TranslationState()
{

}

// ============================================================================
/*!
 *  \brief Acceleration()
*/
// ============================================================================
Standard_Real DOF_TranslationState::Acceleration() const
{
    return myAcceleration;
}

// ============================================================================
/*!
 *  \brief Displacement()
*/
// ============================================================================
Standard_Real DOF_TranslationState::Displacement() const
{
    return myDisplacement;
}

// ============================================================================
/*!
 *  \brief Force()
*/
// ============================================================================
Standard_Real DOF_TranslationState::Force() const
{
    return myForce;
}

// ============================================================================
/*!
 *  \brief SetAcceleration()
*/
// ============================================================================
void DOF_TranslationState::SetAcceleration(const Standard_Real theAcceleration)
{
    myAcceleration = theAcceleration;
}

// ============================================================================
/*!
 *  \brief SetDisplacement()
*/
// ============================================================================
void DOF_TranslationState::SetDisplacement(const Standard_Real theDisplacement)
{
    myDisplacement = theDisplacement;
}

// ============================================================================
/*!
 *  \brief SetForce()
*/
// ============================================================================
void DOF_TranslationState::SetForce(const Standard_Real theForce)
{
    myForce = theForce;
}

// ============================================================================
/*!
 *  \brief SetVelocity()
*/
// ============================================================================
void DOF_TranslationState::SetVelocity(const Standard_Real theVelocity)
{
    myVelocity = theVelocity;
}

// ============================================================================
/*!
 *  \brief Velocity()
*/
// ============================================================================
Standard_Real DOF_TranslationState::Velocity() const
{
    return myVelocity;
}

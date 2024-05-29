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
#include <DOF_Translation.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOF_Translation::DOF_Translation()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DOF_Translation::~DOF_Translation()
{

}

// ============================================================================
/*!
 *  \brief CommitState()
*/
// ============================================================================
void DOF_Translation::CommitState()
{
    myPreviousAcceleration = myCurrentAcceleration;
    myPreviousForce = myCurrentForce;
    myPreviousTranslation = myCurrentTranslation;
    myPreviousVelocity = myCurrentVelocity;
}

// ============================================================================
/*!
 *  \brief CurrentAcceleration()
*/
// ============================================================================
Standard_Real DOF_Translation::CurrentAcceleration() const
{
    return myCurrentAcceleration;
}

// ============================================================================
/*!
 *  \brief CurrentForce()
*/
// ============================================================================
Standard_Real DOF_Translation::CurrentForce() const
{
    return myCurrentForce;
}

// ============================================================================
/*!
 *  \brief CurrentTranslation()
*/
// ============================================================================
Standard_Real DOF_Translation::CurrentTranslation() const
{
    return myCurrentTranslation;
}

// ============================================================================
/*!
 *  \brief CurrentVelocity()
*/
// ============================================================================
Standard_Real DOF_Translation::CurrentVelocity() const
{
    return myCurrentVelocity;
}

// ============================================================================
/*!
 *  \brief InitialAcceleration()
*/
// ============================================================================
Standard_Real DOF_Translation::InitialAcceleration() const
{
    return myInitialAcceleration;
}

// ============================================================================
/*!
 *  \brief InitialForce()
*/
// ============================================================================
Standard_Real DOF_Translation::InitialForce() const
{
    return myInitialForce;
}

// ============================================================================
/*!
 *  \brief InitialTranslation()
*/
// ============================================================================
Standard_Real DOF_Translation::InitialTranslation() const
{
    return myInitialTranslation;
}

// ============================================================================
/*!
 *  \brief InitialVelocity()
*/
// ============================================================================
Standard_Real DOF_Translation::InitialVelocity() const
{
    return myInitialVelocity;
}

// ============================================================================
/*!
 *  \brief PreviousAcceleration()
*/
// ============================================================================
Standard_Real DOF_Translation::PreviousAcceleration() const
{
    return myPreviousAcceleration;
}

// ============================================================================
/*!
 *  \brief PreviousForce()
*/
// ============================================================================
Standard_Real DOF_Translation::PreviousForce() const
{
    return myPreviousForce;
}

// ============================================================================
/*!
 *  \brief PreviousTranslation()
*/
// ============================================================================
Standard_Real DOF_Translation::PreviousTranslation() const
{
    return myPreviousTranslation;
}

// ============================================================================
/*!
 *  \brief PreviousVelocity()
*/
// ============================================================================
Standard_Real DOF_Translation::PreviousVelocity() const
{
    return myPreviousVelocity;
}

// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
void DOF_Translation::RevertToInitialState()
{
    myPreviousAcceleration = myInitialAcceleration;
    myPreviousForce = myInitialForce;
    myPreviousTranslation = myInitialTranslation;
    myPreviousVelocity = myInitialVelocity;
    myInitialAcceleration = myInitialAcceleration;
    myInitialForce = myInitialForce;
    myInitialTranslation = myInitialTranslation;
    myInitialVelocity = myInitialVelocity;
}

// ============================================================================
/*!
 *  \brief RevertToPreviousState()
*/
// ============================================================================
void DOF_Translation::RevertToPreviousState()
{
    myCurrentAcceleration = myPreviousAcceleration;
    myCurrentForce = myPreviousForce;
    myCurrentTranslation = myPreviousTranslation;
    myCurrentVelocity = myPreviousVelocity;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(DOF_Translation, DOF_Motion)
IMPLEMENT_STANDARD_RTTIEXT(DOF_Translation, DOF_Motion)

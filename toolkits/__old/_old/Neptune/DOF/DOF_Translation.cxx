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
    myPreviousDisplacement = myCurrentDisplacement;
    myPreviousVelocity = myCurrentVelocity;
    SetNotChanged();
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
 *  \brief CurrentDisplacement()
*/
// ============================================================================
Standard_Real DOF_Translation::CurrentDisplacement() const
{
    return myCurrentDisplacement;
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
 *  \brief InitialDisplacement()
*/
// ============================================================================
Standard_Real DOF_Translation::InitialDisplacement() const
{
    return myInitialDisplacement;
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
 *  \brief PreviousDisplacement()
*/
// ============================================================================
Standard_Real DOF_Translation::PreviousDisplacement() const
{
    return myPreviousDisplacement;
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
    myCurrentAcceleration = myInitialAcceleration;
    myCurrentDisplacement = myInitialDisplacement;
    myCurrentVelocity = myInitialVelocity;
    myPreviousAcceleration = myInitialAcceleration;
    myPreviousDisplacement = myInitialDisplacement;
    myPreviousVelocity = myInitialVelocity;
    SetNotChanged();
}

// ============================================================================
/*!
 *  \brief RevertToPreviousState()
*/
// ============================================================================
void DOF_Translation::RevertToPreviousState()
{
    myCurrentAcceleration = myPreviousAcceleration;
    myCurrentDisplacement = myPreviousDisplacement;
    myCurrentVelocity = myPreviousVelocity;
    SetNotChanged();
}

// ============================================================================
/*!
 *  \brief SetCurrentAcceleration()
*/
// ============================================================================
void DOF_Translation::SetCurrentAcceleration(const Standard_Real theAcceleration)
{
    myCurrentAcceleration = theAcceleration;
    SetChanged();
}

// ============================================================================
/*!
 *  \brief SetCurrentDisplacement()
*/
// ============================================================================
void DOF_Translation::SetCurrentDisplacement(const Standard_Real theDisplacement)
{
    myCurrentDisplacement = theDisplacement;
    SetChanged();
}

// ============================================================================
/*!
 *  \brief SetCurrentVelocity()
*/
// ============================================================================
void DOF_Translation::SetCurrentVelocity(const Standard_Real theVelocity)
{
    myCurrentVelocity = theVelocity;
    SetChanged();
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(DOF_Translation, DOF_Motion);
IMPLEMENT_STANDARD_RTTIEXT(DOF_Translation, DOF_Motion);

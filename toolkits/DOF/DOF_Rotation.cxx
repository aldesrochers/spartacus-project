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
#include <DOF_Rotation.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOF_Rotation::DOF_Rotation()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DOF_Rotation::~DOF_Rotation()
{

}

// ============================================================================
/*!
 *  \brief CommitState()
*/
// ============================================================================
void DOF_Rotation::CommitState()
{
    myPreviousAngularAcceleration = myCurrentAngularAcceleration;
    myPreviousAngularVelocity = myCurrentAngularVelocity;
    myPreviousMoment = myCurrentMoment;
    myPreviousRotation = myCurrentRotation;
}

// ============================================================================
/*!
 *  \brief CurrentAngularAcceleration()
*/
// ============================================================================
Standard_Real DOF_Rotation::CurrentAngularAcceleration() const
{
    return myCurrentAngularAcceleration;
}

// ============================================================================
/*!
 *  \brief CurrentAngularVelocity()
*/
// ============================================================================
Standard_Real DOF_Rotation::CurrentAngularVelocity() const
{
    return myCurrentAngularVelocity;
}

// ============================================================================
/*!
 *  \brief CurrentMoment()
*/
// ============================================================================
Standard_Real DOF_Rotation::CurrentMoment() const
{
    return myCurrentMoment;
}

// ============================================================================
/*!
 *  \brief CurrentRotation()
*/
// ============================================================================
Standard_Real DOF_Rotation::CurrentRotation() const
{
    return myCurrentRotation;
}

// ============================================================================
/*!
 *  \brief InitialAngularAcceleration()
*/
// ============================================================================
Standard_Real DOF_Rotation::InitialAngularAcceleration() const
{
    return myInitialAngularAcceleration;
}

// ============================================================================
/*!
 *  \brief InitialAngularVelocity()
*/
// ============================================================================
Standard_Real DOF_Rotation::InitialAngularVelocity() const
{
    return myInitialAngularVelocity;
}

// ============================================================================
/*!
 *  \brief InitialMoment()
*/
// ============================================================================
Standard_Real DOF_Rotation::InitialMoment() const
{
    return myInitialMoment;
}

// ============================================================================
/*!
 *  \brief InitialRotation()
*/
// ============================================================================
Standard_Real DOF_Rotation::InitialRotation() const
{
    return myInitialRotation;
}

// ============================================================================
/*!
 *  \brief PreviousAngularAcceleration()
*/
// ============================================================================
Standard_Real DOF_Rotation::PreviousAngularAcceleration() const
{
    return myPreviousAngularAcceleration;
}

// ============================================================================
/*!
 *  \brief PreviousAngularVelocity()
*/
// ============================================================================
Standard_Real DOF_Rotation::PreviousAngularVelocity() const
{
    return myPreviousAngularVelocity;
}

// ============================================================================
/*!
 *  \brief PreviousMoment()
*/
// ============================================================================
Standard_Real DOF_Rotation::PreviousMoment() const
{
    return myPreviousMoment;
}

// ============================================================================
/*!
 *  \brief PreviousRotation()
*/
// ============================================================================
Standard_Real DOF_Rotation::PreviousRotation() const
{
    return myPreviousRotation;
}



// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
void DOF_Rotation::RevertToInitialState()
{
    myPreviousAngularAcceleration = myInitialAngularAcceleration;
    myPreviousAngularVelocity = myInitialAngularVelocity;
    myPreviousMoment = myInitialMoment;
    myPreviousRotation = myInitialRotation;
    myInitialAngularAcceleration = myInitialAngularAcceleration;
    myInitialAngularVelocity = myInitialAngularVelocity;
    myInitialMoment = myInitialMoment;
    myInitialRotation = myInitialRotation;
}

// ============================================================================
/*!
 *  \brief RevertToPreviousState()
*/
// ============================================================================
void DOF_Rotation::RevertToPreviousState()
{
    myCurrentAngularAcceleration = myPreviousAngularAcceleration;
    myCurrentAngularVelocity = myPreviousAngularVelocity;
    myCurrentMoment = myPreviousMoment;
    myCurrentRotation = myPreviousRotation;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
DOFAbs_TypeOfDOF DOF_Rotation::Type() const
{
    return DOFAbs_DOF_Rotation;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(DOF_Rotation, DOF_Motion)
IMPLEMENT_STANDARD_RTTIEXT(DOF_Rotation, DOF_Motion)

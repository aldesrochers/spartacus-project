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
    myCommitedAcceleration = myTrialAcceleration;
    myCommitedDisplacement = myTrialDisplacement;
    myCommitedVelocity = myTrialVelocity;
}

// ============================================================================
/*!
 *  \brief CommitedAcceleration()
*/
// ============================================================================
Standard_Real DOF_Translation::CommitedAcceleration() const
{
    return myCommitedAcceleration;
}

// ============================================================================
/*!
 *  \brief CommitedDisplacement()
*/
// ============================================================================
Standard_Real DOF_Translation::CommitedDisplacement() const
{
    return myCommitedDisplacement;
}

// ============================================================================
/*!
 *  \brief CommitedForce()
*/
// ============================================================================
Standard_Real DOF_Translation::CommitedForce() const
{
    return myCommitedForce;
}

// ============================================================================
/*!
 *  \brief CommitedVelocity()
*/
// ============================================================================
Standard_Real DOF_Translation::CommitedVelocity() const
{
    return myCommitedVelocity;
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
 *  \brief InitialForce()
*/
// ============================================================================
Standard_Real DOF_Translation::InitialForce() const
{
    return myInitialForce;
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
 *  \brief RevertToCommitState()
*/
// ============================================================================
void DOF_Translation::RevertToCommitState()
{
    myTrialAcceleration = myCommitedAcceleration;
    myTrialDisplacement = myCommitedDisplacement;
    myTrialVelocity = myCommitedVelocity;
}

// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
void DOF_Translation::RevertToInitialState()
{
    myCommitedAcceleration = myInitialAcceleration;
    myCommitedDisplacement = myInitialDisplacement;
    myCommitedVelocity = myInitialVelocity;
    myTrialAcceleration = myInitialAcceleration;
    myTrialDisplacement = myInitialDisplacement;
    myTrialVelocity = myInitialVelocity;
}

// ============================================================================
/*!
 *  \brief TrialAcceleration()
*/
// ============================================================================
Standard_Real DOF_Translation::TrialAcceleration() const
{
    return myTrialAcceleration;
}

// ============================================================================
/*!
 *  \brief TrialDisplacement()
*/
// ============================================================================
Standard_Real DOF_Translation::TrialDisplacement() const
{
    return myTrialDisplacement;
}

// ============================================================================
/*!
 *  \brief TrialForce()
*/
// ============================================================================
Standard_Real DOF_Translation::TrialForce() const
{
    return myTrialForce;
}

// ============================================================================
/*!
 *  \brief TrialVelocity()
*/
// ============================================================================
Standard_Real DOF_Translation::TrialVelocity() const
{
    return myTrialVelocity;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(DOF_Translation, DOF_Motion)
IMPLEMENT_STANDARD_RTTIEXT(DOF_Translation, DOF_Motion)

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
 *  \brief Constructor
*/
// ============================================================================
DOF_Rotation::DOF_Rotation(const DOF_RotationState& theInitialState)
    : myInitialState(theInitialState)
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
    myCommitedState = myTrialState;
}

// ============================================================================
/*!
 *  \brief CommitedState()
*/
// ============================================================================
const DOF_RotationState& DOF_Rotation::CommitedState() const
{
    return myCommitedState;
}

// ============================================================================
/*!
 *  \brief InitialState()
*/
// ============================================================================
const DOF_RotationState& DOF_Rotation::InitialState() const
{
    return myInitialState;
}

// ============================================================================
/*!
 *  \brief MotionType()
*/
// ============================================================================
DOFAbs_TypeOfMotion DOF_Rotation::MotionType() const
{
    return DOFAbs_TOM_Rotation;
}

// ============================================================================
/*!
 *  \brief RevertToCommitState()
*/
// ============================================================================
void DOF_Rotation::RevertToCommitState()
{
    myTrialState = myCommitedState;
}

// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
void DOF_Rotation::RevertToInitialState()
{
    myCommitedState = myInitialState;
    myTrialState = myInitialState;
}

// ============================================================================
/*!
 *  \brief SetTrialState()
*/
// ============================================================================
void DOF_Rotation::SetTrialState(const DOF_RotationState &theTrialState)
{
    myTrialState = theTrialState;
}

// ============================================================================
/*!
 *  \brief TrialState()
*/
// ============================================================================
const DOF_RotationState& DOF_Rotation::TrialState() const
{
    return myTrialState;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(DOF_Rotation, DOF_Motion)
IMPLEMENT_STANDARD_RTTIEXT(DOF_Rotation, DOF_Motion)

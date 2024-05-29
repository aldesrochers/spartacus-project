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
 *  \brief Constructor
*/
// ============================================================================
DOF_Translation::DOF_Translation(const DOF_TranslationState& theInitialState)
    : myInitialState(theInitialState)
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
    myCommitedState = myTrialState;
}

// ============================================================================
/*!
 *  \brief CommitedState()
*/
// ============================================================================
const DOF_TranslationState& DOF_Translation::CommitedState() const
{
    return myCommitedState;
}

// ============================================================================
/*!
 *  \brief InitialState()
*/
// ============================================================================
const DOF_TranslationState& DOF_Translation::InitialState() const
{
    return myInitialState;
}

// ============================================================================
/*!
 *  \brief MotionType()
*/
// ============================================================================
DOFAbs_TypeOfMotion DOF_Translation::MotionType() const
{
    return DOFAbs_TOM_Translation;
}

// ============================================================================
/*!
 *  \brief RevertToCommitState()
*/
// ============================================================================
void DOF_Translation::RevertToCommitState()
{
    myTrialState = myCommitedState;
}

// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
void DOF_Translation::RevertToInitialState()
{
    myCommitedState = myInitialState;
    myTrialState = myInitialState;
}

// ============================================================================
/*!
 *  \brief SetTrialState()
*/
// ============================================================================
void DOF_Translation::SetTrialState(const DOF_TranslationState &theTrialState)
{
    myTrialState = theTrialState;
}

// ============================================================================
/*!
 *  \brief TrialState()
*/
// ============================================================================
const DOF_TranslationState& DOF_Translation::TrialState() const
{
    return myTrialState;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(DOF_Translation, DOF_Motion)
IMPLEMENT_STANDARD_RTTIEXT(DOF_Translation, DOF_Motion)

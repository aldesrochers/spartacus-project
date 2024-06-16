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

#include <iostream>
using namespace std;

// Spartacus
#include <UCM_Elastic.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
UCM_Elastic::UCM_Elastic()
    : myCommitedVariables(1,2,0.),
    myInitialVariables(1,2,0.),
    myTrialVariables(1,2,0.)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
UCM_Elastic::UCM_Elastic(const cmp_Elastic& theMaterial)
    : myMaterial(theMaterial),
    myCommitedVariables(1,2,0.),
    myInitialVariables(1,2,0.),
    myTrialVariables(1,2,0.)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
UCM_Elastic::~UCM_Elastic()
{

}

// ============================================================================
/*!
 *  \brief CommitedDerivatives()
*/
// ============================================================================
math_Matrix UCM_Elastic::CommitedDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief CommitedValues()
*/
// ============================================================================
math_Vector UCM_Elastic::CommitedValues() const
{
    return CommitedDerivatives() * myCommitedVariables;
}

// ============================================================================
/*!
 *  \brief CommitedVariables()
*/
// ============================================================================
math_Vector UCM_Elastic::CommitedVariables() const
{
    return myCommitedVariables;
}

// ============================================================================
/*!
 *  \brief CommitState()
*/
// ============================================================================
void UCM_Elastic::CommitState()
{
    myCommitedVariables = myTrialVariables;
}

// ============================================================================
/*!
 *  \brief InitialDerivatives()
*/
// ============================================================================
math_Matrix UCM_Elastic::InitialDerivatives() const
{
    math_Matrix D(1,1,1,2,0.);
    D(1,1) = myMaterial.E();
    D(1,2) = -1. * myMaterial.Alpha() * myMaterial.E();
    return D;
}

// ============================================================================
/*!
 *  \brief InitialValues()
*/
// ============================================================================
math_Vector UCM_Elastic::InitialValues() const
{
    return InitialDerivatives() * myInitialVariables;
}

// ============================================================================
/*!
 *  \brief InitialVariables()
*/
// ============================================================================
math_Vector UCM_Elastic::InitialVariables() const
{
    return myInitialVariables;
}

// ============================================================================
/*!
 *  \brief RevertToCommitState()
*/
// ============================================================================
void UCM_Elastic::RevertToCommitState()
{
    myTrialVariables = myCommitedVariables;
}

// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
void UCM_Elastic::RevertToInitialState()
{
    myCommitedVariables = myInitialVariables;
    myTrialVariables = myInitialVariables;
}

// ============================================================================
/*!
 *  \brief SetTrialVariables()
*/
// ============================================================================
void UCM_Elastic::SetTrialVariables(const math_Vector &theTrialVariables)
{
    myTrialVariables = theTrialVariables;
}

// ============================================================================
/*!
 *  \brief TrialDerivatives()
*/
// ============================================================================
math_Matrix UCM_Elastic::TrialDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief TrialValues()
*/
// ============================================================================
math_Vector UCM_Elastic::TrialValues() const
{
    return TrialDerivatives() * myTrialVariables;
}

// ============================================================================
/*!
 *  \brief TrialVariables()
*/
// ============================================================================
math_Vector UCM_Elastic::TrialVariables() const
{
    return myTrialVariables;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(UCM_Elastic, UCM_Material)
IMPLEMENT_STANDARD_RTTIEXT(UCM_Elastic, UCM_Material)

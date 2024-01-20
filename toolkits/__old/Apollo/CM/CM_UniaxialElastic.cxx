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
#include <CM_UniaxialElastic.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
CM_UniaxialElastic::CM_UniaxialElastic(const cmp_Elastic& theProperties,
                                       const Standard_Real theInitialTemperature)
    : myInitialTemperature(theInitialTemperature),
      myProperties(theProperties)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
CM_UniaxialElastic::~CM_UniaxialElastic()
{

}

// ============================================================================
/*!
 *  \brief CommitState()
*/
// ============================================================================
void CM_UniaxialElastic::CommitState()
{
    myPreviousStrain = myCurrentStrain;
    myPreviousTemperature = myCurrentTemperature;
}

// ============================================================================
/*!
 *  \brief CurrentDerivatives()
*/
// ============================================================================
math_Matrix CM_UniaxialElastic::CurrentDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief CurrentValues()
*/
// ============================================================================
math_Vector CM_UniaxialElastic::CurrentValues() const
{
    math_Vector F(1, 0.);
    F(1) = myProperties.E() * (myCurrentStrain - (myCurrentTemperature - myInitialTemperature) * myProperties.Alpha());
    return F;
}

// ============================================================================
/*!
 *  \brief CurrentVariables()
*/
// ============================================================================
math_Vector CM_UniaxialElastic::CurrentVariables() const
{
    math_Vector V(2, 0.);
    V(1) = myCurrentStrain;
    V(2) = myCurrentTemperature;
    return V;
}

// ============================================================================
/*!
 *  \brief InitialDerivatives()
*/
// ============================================================================
math_Matrix CM_UniaxialElastic::InitialDerivatives() const
{
    math_Matrix D(1, 1, 1, 2, 0.);
    D(1,1) = myProperties.E();
    D(1,2) = -1. * myProperties.E() * myProperties.Alpha();
    return D;
}

// ============================================================================
/*!
 *  \brief InitialValues()
*/
// ============================================================================
math_Vector CM_UniaxialElastic::InitialValues() const
{
    math_Vector F(1, 0.);
    return F;
}

// ============================================================================
/*!
 *  \brief InitialVariables()
*/
// ============================================================================
math_Vector CM_UniaxialElastic::InitialVariables() const
{
    math_Vector V(2, 0.);
    return V;
}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
Standard_Integer CM_UniaxialElastic::NbEquations() const
{
    return 1;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer CM_UniaxialElastic::NbVariables() const
{
    return 2;
}

// ============================================================================
/*!
 *  \brief PreviousDerivatives()
*/
// ============================================================================
math_Matrix CM_UniaxialElastic::PreviousDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief PreviousValues()
*/
// ============================================================================
math_Vector CM_UniaxialElastic::PreviousValues() const
{
    math_Vector F(1, 0.);
    F(1) = myProperties.E() * (myPreviousStrain - (myPreviousTemperature - myInitialTemperature) * myProperties.Alpha());
    return F;
}

// ============================================================================
/*!
 *  \brief PreviousVariables()
*/
// ============================================================================
math_Vector CM_UniaxialElastic::PreviousVariables() const
{
    math_Vector V(2, 0.);
    V(1) = myPreviousStrain;
    V(2) = myPreviousTemperature;
    return V;
}

// ============================================================================
/*!
 *  \brief Properties()
*/
// ============================================================================
cmp_Elastic CM_UniaxialElastic::Properties() const
{
    return myProperties;
}

// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
void CM_UniaxialElastic::RevertToInitialState()
{
    myCurrentStrain = 0.;
    myCurrentTemperature = myInitialTemperature;
    myPreviousStrain = 0.;
    myPreviousTemperature = myInitialTemperature;
}

// ============================================================================
/*!
 *  \brief RevertToPreviousState()
*/
// ============================================================================
void CM_UniaxialElastic::RevertToPreviousState()
{
    myCurrentStrain = myPreviousStrain;
    myCurrentTemperature = myPreviousTemperature;
}

// ============================================================================
/*!
 *  \brief SetCurrentVariables()
*/
// ============================================================================
void CM_UniaxialElastic::SetCurrentVariables(const math_Vector &theVariables)
{
    myCurrentStrain = theVariables.Value(1);
    myCurrentTemperature = theVariables.Value(2);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(CM_UniaxialElastic, CM_Material);
IMPLEMENT_STANDARD_RTTIEXT(CM_UniaxialElastic, CM_Material);

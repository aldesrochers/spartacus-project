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
#include <EM1d_ElasticTruss.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
EM1d_ElasticTruss::EM1d_ElasticTruss(const Standard_Real theX1,
                                     const Standard_Real theX2,
                                     const Standard_Real theArea,
                                     const Standard_Real theElasticModulous)
    : myArea(theArea),
      myElasticModulous(theElasticModulous),
      myX1(theX1),
      myX2(theX2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
EM1d_ElasticTruss::~EM1d_ElasticTruss()
{

}

// ============================================================================
/*!
 *  \brief CommitState()
*/
// ============================================================================
Standard_Boolean EM1d_ElasticTruss::CommitState()
{
    myPreviousDX1 = myCurrentDX1;
    myPreviousDX2 = myCurrentDX2;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief CurrentDerivatives()
*/
// ============================================================================
math_Matrix EM1d_ElasticTruss::CurrentDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief CurrentValues()
*/
// ============================================================================
math_Vector EM1d_ElasticTruss::CurrentValues() const
{
    return CurrentDerivatives() * CurrentVariables();
}

// ============================================================================
/*!
 *  \brief CurrentVariables()
*/
// ============================================================================
math_Vector EM1d_ElasticTruss::CurrentVariables() const
{
    math_Vector aVector(1, 2, 0.);
    aVector(1) = myCurrentDX1;
    aVector(2) = myCurrentDX2;
    return aVector;
}

// ============================================================================
/*!
 *  \brief InitialDerivatives()
*/
// ============================================================================
math_Matrix EM1d_ElasticTruss::InitialDerivatives() const
{
    Standard_Real L = Abs(myX2 - myX1);
    Standard_Real K = myArea * myElasticModulous / L;
    math_Matrix aMatrix(1, 2, 1, 2, 0.);
    aMatrix(1,1) = K;
    aMatrix(1,2) = -K;
    aMatrix(2,1) = -K;
    aMatrix(2,2) = K;
    return aMatrix;
}

// ============================================================================
/*!
 *  \brief InitialValues()
*/
// ============================================================================
math_Vector EM1d_ElasticTruss::InitialValues() const
{
    return InitialDerivatives() * InitialVariables();
}

// ============================================================================
/*!
 *  \brief InitialVariables()
*/
// ============================================================================
math_Vector EM1d_ElasticTruss::InitialVariables() const
{
    math_Vector aVector(1, 2, 0.);
    return aVector;
}

// ============================================================================
/*!
 *  \brief NbValues()
*/
// ============================================================================
Standard_Integer EM1d_ElasticTruss::NbValues() const
{
    return 2;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer EM1d_ElasticTruss::NbVariables() const
{
    return 2;
}

// ============================================================================
/*!
 *  \brief PreviousDerivatives()
*/
// ============================================================================
math_Matrix EM1d_ElasticTruss::PreviousDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief PreviousValues()
*/
// ============================================================================
math_Vector EM1d_ElasticTruss::PreviousValues() const
{
    return PreviousDerivatives() * PreviousVariables();
}

// ============================================================================
/*!
 *  \brief PreviousVariables()
*/
// ============================================================================
math_Vector EM1d_ElasticTruss::PreviousVariables() const
{
    math_Vector aVector(1, 2, 0.);
    aVector(1) = myPreviousDX1;
    aVector(2) = myPreviousDX2;
    return aVector;
}

// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
Standard_Boolean EM1d_ElasticTruss::RevertToInitialState()
{
    myCurrentDX1 = 0.;
    myCurrentDX2 = 0.;
    myPreviousDX1 = 0.;
    myPreviousDX2 = 0.;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief RevertToPreviousState()
*/
// ============================================================================
Standard_Boolean EM1d_ElasticTruss::RevertToPreviousState()
{
    myCurrentDX1 = myPreviousDX1;
    myCurrentDX2 = myPreviousDX2;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief SetCurrentVariables()
*/
// ============================================================================
Standard_Boolean EM1d_ElasticTruss::SetCurrentVariables(const math_Vector &theVariables)
{
    myCurrentDX1 = theVariables.Value(theVariables.Min() + 0);
    myCurrentDX2 = theVariables.Value(theVariables.Min() + 1);
    return Standard_True;
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(EM1d_ElasticTruss, EM1d_Element);
IMPLEMENT_STANDARD_RTTIEXT(EM1d_ElasticTruss, EM1d_Element);

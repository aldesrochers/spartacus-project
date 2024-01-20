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
#include <FE1d_ElasticTrussElement.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_ElasticTrussElement::FE1d_ElasticTrussElement(const Standard_Real theX1,
                                                   const Standard_Real theX2,
                                                   const xsp_Elastic& theSection,
                                                   const Standard_Real theInitialTemperature)
    : FE1d_TrussElement(theX1, theX2),
      myInitialTemperature(theInitialTemperature),
      mySection(theSection)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_ElasticTrussElement::FE1d_ElasticTrussElement(const Standard_Real theX1,
                                                   const Standard_Real theX2,
                                                   const Standard_Real theArea,
                                                   const Standard_Real theElasticModulous,
                                                   const Standard_Real theInitialTemperature)
    : FE1d_TrussElement(theX1, theX2),
      myInitialTemperature(theInitialTemperature),
      mySection(theArea, theElasticModulous)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE1d_ElasticTrussElement::~FE1d_ElasticTrussElement()
{

}

// ============================================================================
/*!
 *  \brief CommitState()
*/
// ============================================================================
void FE1d_ElasticTrussElement::CommitState()
{
    myPreviousDX1 = myCurrentDX1;
    myPreviousDX2 = myCurrentDX2;
    myPreviousTemperature = myCurrentTemperature;
}

// ============================================================================
/*!
 *  \brief CurrentDerivatives()
*/
// ============================================================================
math_Matrix FE1d_ElasticTrussElement::CurrentDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief CurrentValues()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::CurrentValues() const
{
    Standard_Real L0 = InitialLength();
    Standard_Real Eps = (myX2 + myCurrentDX2 - myX1 - myCurrentDX1) / L0;
    Standard_Real F = mySection.E() * mySection.A() * (Eps - (myCurrentTemperature - myInitialTemperature) * mySection.Alpha());
    math_Vector V(2, 0.);
    V(1) = -F;
    V(2) = F;
    return V;
}

// ============================================================================
/*!
 *  \brief CurrentVariables()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::CurrentVariables() const
{
    math_Vector V(3, 0.);
    V(1) = myCurrentDX1;
    V(2) = myCurrentDX2;
    V(3) = myCurrentTemperature;
    return V;
}

// ============================================================================
/*!
 *  \brief InitialDerivatives()
*/
// ============================================================================
math_Matrix FE1d_ElasticTrussElement::InitialDerivatives() const
{
    // compute section derivatives
    math_Matrix D(1, 1, 1, 2, 0.);
    D(1,1) = mySection.E() * mySection.A();
    D(1,2) = -1. * mySection.E() * mySection.A() * mySection.Alpha();
    // section force to element forces
    math_Matrix TL(1, 2, 1, 1, 0.);
    TL(1,1) = -1.;
    TL(2,1) = 1.;
    // element variables to section variables
    Standard_Real L0 = InitialLength();
    math_Matrix TR(1, 2, 1, 3, 0.);
    TR(1,1) = -1. / L0;
    TR(1,2) = 1. / L0;
    TR(2,3) = 1.;
    // return element stiffness matrix
    return (TL * D) * TR;
}

// ============================================================================
/*!
 *  \brief InitialValues()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::InitialValues() const
{
    math_Vector F(2, 0.);
    return F;
}

// ============================================================================
/*!
 *  \brief InitialVariables()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::InitialVariables() const
{
    math_Vector V(3, 0.);
    V(3) = myInitialTemperature;
    return V;
}

// ============================================================================
/*!
 *  \brief InitialTemperature()
*/
// ============================================================================
Standard_Real FE1d_ElasticTrussElement::InitialTemperature() const
{
    return myInitialTemperature;
}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
Standard_Integer FE1d_ElasticTrussElement::NbEquations() const
{
    return 2;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer FE1d_ElasticTrussElement::NbVariables() const
{
    return 3;
}

// ============================================================================
/*!
 *  \brief PreviousDerivatives()
*/
// ============================================================================
math_Matrix FE1d_ElasticTrussElement::PreviousDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief PreviousValues()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::PreviousValues() const
{
    Standard_Real L0 = InitialLength();
    Standard_Real Eps = (myX2 + myPreviousDX2 - myX1 - myPreviousDX1) / L0;
    Standard_Real F = mySection.E() * mySection.A() * (Eps - (myPreviousTemperature - myInitialTemperature) * mySection.Alpha());
    math_Vector V(2, 0.);
    V(1) = -F;
    V(2) = F;
    return V;
}

// ============================================================================
/*!
 *  \brief PreviousVariables()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::PreviousVariables() const
{
    math_Vector V(3, 0.);
    V(1) = myPreviousDX1;
    V(2) = myPreviousDX2;
    V(3) = myPreviousTemperature;
    return V;
}

// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
void FE1d_ElasticTrussElement::RevertToInitialState()
{
    myCurrentDX1 = 0.;
    myCurrentDX2 = 0.;
    myCurrentTemperature = myInitialTemperature;
    myPreviousDX1 = 0.;
    myPreviousDX2 = 0.;
    myPreviousTemperature = myInitialTemperature;
}

// ============================================================================
/*!
 *  \brief RevertToPreviousState()
*/
// ============================================================================
void FE1d_ElasticTrussElement::RevertToPreviousState()
{
    myCurrentDX1 = myPreviousDX1;
    myCurrentDX2 = myPreviousDX2;
    myCurrentTemperature = myPreviousTemperature;
}

// ============================================================================
/*!
 *  \brief Section()
*/
// ============================================================================
xsp_Elastic FE1d_ElasticTrussElement::Section() const
{
    return mySection;
}

// ============================================================================
/*!
 *  \brief SetCurrentVariables()
*/
// ============================================================================
void FE1d_ElasticTrussElement::SetCurrentVariables(const math_Vector &theVariables)
{
    myCurrentDX1 = theVariables.Value(1);
    myCurrentDX2 = theVariables.Value(2);
    myCurrentTemperature = theVariables.Value(3);
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE1d_ElasticTrussElement, FE1d_TrussElement);
IMPLEMENT_STANDARD_RTTIEXT(FE1d_ElasticTrussElement, FE1d_TrussElement);

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
#include <XSM_Elastic1d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XSM_Elastic1d::XSM_Elastic1d(const Standard_Real theArea,
                             const Standard_Real theElasticModulous,
                             const Standard_Real theAlpha,
                             const Standard_Real theInitialStrain,
                             const Standard_Real theInitialTemperature)
    : myAlpha(theAlpha),
      myArea(theArea),
      myElasticModulous(theElasticModulous),
      myCurrentStrain(theInitialStrain),
      myCurrentTemperature(theInitialTemperature),
      myInitialStrain(theInitialStrain),
      myInitialTemperature(theInitialTemperature),
      myPreviousStrain(theInitialStrain),
      myPreviousTemperature(theInitialTemperature)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
XSM_Elastic1d::~XSM_Elastic1d()
{

}

// ============================================================================
/*!
 *  \brief Alpha()
*/
// ============================================================================
Standard_Real XSM_Elastic1d::Alpha() const
{
    return myAlpha;
}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real XSM_Elastic1d::Area() const
{
    return myArea;
}

// ============================================================================
/*!
 *  \brief CommitState()
*/
// ============================================================================
Standard_Boolean XSM_Elastic1d::CommitState()
{
    myPreviousStrain = myCurrentStrain;
    myPreviousTemperature = myCurrentTemperature;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief CurrentDerivatives()
*/
// ============================================================================
math_Matrix XSM_Elastic1d::CurrentDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief CurrentValues()
*/
// ============================================================================
math_Vector XSM_Elastic1d::CurrentValues() const
{
    math_Vector aVector(1, 1, 0.);
    Standard_Real dT = myCurrentTemperature - myInitialTemperature;
    aVector(1) = myArea * myElasticModulous * (myCurrentStrain - myAlpha * dT);
    return aVector;
}

// ============================================================================
/*!
 *  \brief CurrentVariables()
*/
// ============================================================================
math_Vector XSM_Elastic1d::CurrentVariables() const
{
    math_Vector aVector(1, 2, 0.);
    aVector(1) = myCurrentStrain;
    aVector(2) = myCurrentTemperature;
    return aVector;
}

// ============================================================================
/*!
 *  \brief ElasticModulous()
*/
// ============================================================================
Standard_Real XSM_Elastic1d::ElasticModulous() const
{
    return myElasticModulous;
}

// ============================================================================
/*!
 *  \brief InitialDerivatives()
*/
// ============================================================================
math_Matrix XSM_Elastic1d::InitialDerivatives() const
{
    math_Matrix aMatrix(1, 2, 1, 1, 0.);
    aMatrix(1,1) = myElasticModulous * myArea;
    aMatrix(2,1) = -myElasticModulous * myAlpha * myArea;
    return aMatrix;
}

// ============================================================================
/*!
 *  \brief InitialValues()
*/
// ============================================================================
math_Vector XSM_Elastic1d::InitialValues() const
{
    math_Vector aVector(1, 1, 0.);
    return aVector;
}

// ============================================================================
/*!
 *  \brief InitialVariables()
*/
// ============================================================================
math_Vector XSM_Elastic1d::InitialVariables() const
{
    math_Vector aVector(1, 2, 0.);
    aVector(1) = myInitialStrain;
    aVector(2) = myInitialTemperature;
    return aVector;
}

// ============================================================================
/*!
 *  \brief InitialStrain()
*/
// ============================================================================
Standard_Real XSM_Elastic1d::InitialStrain() const
{
    return myInitialStrain;
}

// ============================================================================
/*!
 *  \brief InitialTemperature()
*/
// ============================================================================
Standard_Real XSM_Elastic1d::InitialTemperature() const
{
    return myInitialTemperature;
}

// ============================================================================
/*!
 *  \brief NbValues()
*/
// ============================================================================
Standard_Integer XSM_Elastic1d::NbValues() const
{
    return 1;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer XSM_Elastic1d::NbVariables() const
{
    return 2;
}

// ============================================================================
/*!
 *  \brief PreviousDerivatives()
*/
// ============================================================================
math_Matrix XSM_Elastic1d::PreviousDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief PreviousValues()
*/
// ============================================================================
math_Vector XSM_Elastic1d::PreviousValues() const
{
    math_Vector aVector(1, 1, 0.);
    Standard_Real dT = myPreviousTemperature - myInitialTemperature;
    aVector(1) = myArea * myElasticModulous * (myPreviousStrain - myAlpha * dT);
    return aVector;
}

// ============================================================================
/*!
 *  \brief PreviousVariables()
*/
// ============================================================================
math_Vector XSM_Elastic1d::PreviousVariables() const
{
    math_Vector aVector(1, 2, 0.);
    aVector(1) = myPreviousStrain;
    aVector(2) = myPreviousTemperature;
    return aVector;
}

// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
Standard_Boolean XSM_Elastic1d::RevertToInitialState()
{
    myCurrentStrain = myInitialStrain;
    myCurrentTemperature = myInitialTemperature;
    myPreviousStrain = myInitialStrain;
    myPreviousTemperature = myInitialTemperature;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief RevertToPreviousState()
*/
// ============================================================================
Standard_Boolean XSM_Elastic1d::RevertToPreviousState()
{
    myCurrentStrain = myPreviousStrain;
    myCurrentTemperature = myPreviousTemperature;
    return Standard_True;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(XSM_Elastic1d, XSM_Section);
IMPLEMENT_STANDARD_RTTIEXT(XSM_Elastic1d, XSM_Section);

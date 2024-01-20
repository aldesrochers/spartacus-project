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
#include <XSM_UniaxialElastic.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XSM_UniaxialElastic::XSM_UniaxialElastic(const material_Elastic& theMaterial,
                                         const Standard_Real theArea,
                                         const Standard_Real theInitialTemperature)
    : myArea(theArea),
      myInitialTemperature(theInitialTemperature),
      myMaterial(theMaterial)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
XSM_UniaxialElastic::~XSM_UniaxialElastic()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real XSM_UniaxialElastic::Area() const
{
    return myArea;
}

// ============================================================================
/*!
 *  \brief CommitState()
*/
// ============================================================================
void XSM_UniaxialElastic::CommitState()
{
    myPreviousStrain = myCurrentStrain;
    myPreviousTemperature = myCurrentTemperature;
}

// ============================================================================
/*!
 *  \brief CurrentDerivatives()
*/
// ============================================================================
math_Matrix XSM_UniaxialElastic::CurrentDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief CurrentValues()
*/
// ============================================================================
math_Vector XSM_UniaxialElastic::CurrentValues() const
{
    math_Vector F(1, 0.);
    F(1) = myMaterial.E() * myArea * (myCurrentStrain - (myCurrentTemperature - myInitialTemperature) * myMaterial.Alpha());
    return F;
}

// ============================================================================
/*!
 *  \brief CurrentVariables()
*/
// ============================================================================
math_Vector XSM_UniaxialElastic::CurrentVariables() const
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
math_Matrix XSM_UniaxialElastic::InitialDerivatives() const
{
    math_Matrix D(1, 1, 1, 2, 0.);
    D(1,1) = myMaterial.E() * myArea;
    D(1,2) = -1. * myMaterial.E() * myArea * myMaterial.Alpha();
    return D;
}

// ============================================================================
/*!
 *  \brief InitialValues()
*/
// ============================================================================
math_Vector XSM_UniaxialElastic::InitialValues() const
{
    math_Vector F(1, 0.);
    return F;
}

// ============================================================================
/*!
 *  \brief InitialVariables()
*/
// ============================================================================
math_Vector XSM_UniaxialElastic::InitialVariables() const
{
    math_Vector V(2, 0.);
    return V;
}

// ============================================================================
/*!
 *  \brief Material()
*/
// ============================================================================
const material_Elastic& XSM_UniaxialElastic::Material() const
{
    return myMaterial;
}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
Standard_Integer XSM_UniaxialElastic::NbEquations() const
{
    return 1;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer XSM_UniaxialElastic::NbVariables() const
{
    return 2;
}

// ============================================================================
/*!
 *  \brief PreviousDerivatives()
*/
// ============================================================================
math_Matrix XSM_UniaxialElastic::PreviousDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief PreviousValues()
*/
// ============================================================================
math_Vector XSM_UniaxialElastic::PreviousValues() const
{
    math_Vector F(1, 0.);
    F(1) = myMaterial.E() * myArea * (myPreviousStrain - (myPreviousTemperature - myInitialTemperature) * myMaterial.Alpha());
    return F;
}

// ============================================================================
/*!
 *  \brief PreviousVariables()
*/
// ============================================================================
math_Vector XSM_UniaxialElastic::PreviousVariables() const
{
    math_Vector V(2, 0.);
    V(1) = myPreviousStrain;
    V(2) = myPreviousTemperature;
    return V;
}

// ============================================================================
/*!
 *  \brief RevertToInitialState()
*/
// ============================================================================
void XSM_UniaxialElastic::RevertToInitialState()
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
void XSM_UniaxialElastic::RevertToPreviousState()
{
    myCurrentStrain = myPreviousStrain;
    myCurrentTemperature = myPreviousTemperature;
}

// ============================================================================
/*!
 *  \brief SetCurrentVariables()
*/
// ============================================================================
void XSM_UniaxialElastic::SetCurrentVariables(const math_Vector &theVariables)
{
    myCurrentStrain = theVariables.Value(1);
    myCurrentTemperature = theVariables.Value(2);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(XSM_UniaxialElastic, XSM_Section);
IMPLEMENT_STANDARD_RTTIEXT(XSM_UniaxialElastic, XSM_Section);

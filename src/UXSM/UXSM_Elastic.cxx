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
#include <UXSM_Elastic.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
UXSM_Elastic::UXSM_Elastic(const cmp_Elastic& theMaterial,
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
UXSM_Elastic::~UXSM_Elastic()
{

}

// ============================================================================
/*!
 *  \brief UpdateState()
*/
// ============================================================================
Standard_Boolean UXSM_Elastic::UpdateState()
{
    // current state
    Standard_Real A = myArea;
    Standard_Real Alpha = myMaterial.Alpha();
    Standard_Real E = myMaterial.E();
    Standard_Real Eps = myCurrentStrain;
    Standard_Real T0 = myInitialTemperature;
    Standard_Real T = myCurrentTemperature;

    // force, stiffness calculations
    Standard_Real F = A * E * (Eps - Alpha * (T - T0));
    Standard_Real K = A * E;

    // update internal state
    myCurrentForce = F;
    myCurrentStiffness = K;

    return Standard_True;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(UXSM_Elastic, UXSM_Section);
IMPLEMENT_STANDARD_RTTIEXT(UXSM_Elastic, UXSM_Section);

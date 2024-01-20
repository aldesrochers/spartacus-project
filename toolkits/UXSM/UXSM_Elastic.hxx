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


#ifndef __UXSM_Elastic_hxx__
#define __UXSM_Elastic_hxx__

// Spartacus
#include <cmp_Elastic.hxx>
#include <UXSM_Section.hxx>

// Forward declarations
class UXSM_Elastic;

// Handles
DEFINE_STANDARD_HANDLE(UXSM_Elastic, UXSM_Section);


// ============================================================================
/*!
 *  \brief UXSM_Elastic
 *  Class implementation of an elastic section model.
 *
 *  F(Eps, T) = A * E * (Eps - Alpha * (T - T0))
*/
// ============================================================================
class UXSM_Elastic : public UXSM_Section
{

public:
    // constructors
    Standard_EXPORT UXSM_Elastic(const cmp_Elastic& theMaterial,
                                 const Standard_Real theArea,
                                 const Standard_Real theInitialTemperature = 0.);
    // destructors
    Standard_EXPORT ~UXSM_Elastic();

public:

    Standard_EXPORT Standard_Boolean    UpdateState() Standard_OVERRIDE;

private:

    Standard_Real   myArea;
    Standard_Real   myInitialTemperature;
    cmp_Elastic     myMaterial;

public:

    DEFINE_STANDARD_RTTIEXT(UXSM_Elastic, UXSM_Section);

};


#endif // __UXSM_Elastic_hxx__

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


#ifndef __UCM_Elastic_hxx__
#define __UCM_Elastic_hxx__

// Spartacus
#include <cmp_Elastic.hxx>
#include <UCM_Material.hxx>

// Forward declarations
class UCM_Elastic;

// Handles
DEFINE_STANDARD_HANDLE(UCM_Elastic, UCM_Material)


// ============================================================================
/*!
 *  \brief UCM_Elastic
 *  Implementation of an elastic constitutive Material with given equation :
 *  Sig = E * (Eps - Alpha * (T - T0)) = f(Eps, T)
 *
*/
// ============================================================================
class UCM_Elastic : public UCM_Material
{

public:
    // constructors
    Standard_EXPORT UCM_Elastic();
    Standard_EXPORT UCM_Elastic(const cmp_Elastic& theMaterial);
    // destructors
    Standard_EXPORT ~UCM_Elastic();

public:

    Standard_EXPORT math_Matrix     CommitedDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     CommitedValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     CommitedVariables() const Standard_OVERRIDE;
    Standard_EXPORT void            CommitState() Standard_OVERRIDE;
    Standard_EXPORT math_Matrix     InitialDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     InitialValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     InitialVariables() const Standard_OVERRIDE;
    Standard_EXPORT void            RevertToCommitState() Standard_OVERRIDE;
    Standard_EXPORT void            RevertToInitialState() Standard_OVERRIDE;
    Standard_EXPORT void            SetTrialVariables(const math_Vector& theVariables) Standard_OVERRIDE;
    Standard_EXPORT math_Matrix     TrialDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     TrialValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     TrialVariables() const Standard_OVERRIDE;

public:

    Standard_EXPORT const cmp_Elastic&  Material() const;

private:

    math_Vector         myCommitedVariables;
    math_Vector         myInitialVariables;
    cmp_Elastic         myMaterial;
    math_Vector         myTrialVariables;

public:

    DEFINE_STANDARD_RTTIEXT(UCM_Elastic, UCM_Material)

};


#endif // __UCM_Elastic_hxx__

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


#ifndef __XSM_Uniaxial_hxx__
#define __XSM_Uniaxial_hxx__

// Spartacus
#include <XSM_Section.hxx>

// Forward declarations
class XSM_Uniaxial;

// Handles
DEFINE_STANDARD_HANDLE(XSM_Uniaxial, XSM_Section)


// ============================================================================
/*!
 *  \brief XSM_Uniaxial
*/
// ============================================================================
class XSM_Uniaxial : public XSM_Section
{

public:
    // constructors
    Standard_EXPORT XSM_Uniaxial();
    // destructors
    Standard_EXPORT ~XSM_Uniaxial();

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

    DEFINE_STANDARD_RTTIEXT(XSM_Uniaxial, XSM_Section)

};


#endif // __XSM_Uniaxial_hxx__

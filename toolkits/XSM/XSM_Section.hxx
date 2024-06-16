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


#ifndef __XSM_Section_hxx__
#define __XSM_Section_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <math_Matrix.hxx>
#include <math_Vector.hxx>

// Forward declarations
class XSM_Section;

// Handles
DEFINE_STANDARD_HANDLE(XSM_Section, Standard_Transient)


// ============================================================================
/*!
 *  \brief XSM_Section
*/
// ============================================================================
class XSM_Section : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT XSM_Section();
    // destructors
    Standard_EXPORT ~XSM_Section();

public:

    virtual Standard_EXPORT math_Matrix     CommitedDerivatives() const = 0;
    virtual Standard_EXPORT math_Vector     CommitedValues() const = 0;
    virtual Standard_EXPORT math_Vector     CommitedVariables() const = 0;
    virtual Standard_EXPORT void            CommitState() = 0;
    virtual Standard_EXPORT math_Matrix     InitialDerivatives() const = 0;
    virtual Standard_EXPORT math_Vector     InitialValues() const = 0;
    virtual Standard_EXPORT math_Vector     InitialVariables() const = 0;
    virtual Standard_EXPORT void            RevertToCommitState() = 0;
    virtual Standard_EXPORT void            RevertToInitialState() = 0;
    virtual Standard_EXPORT void            SetTrialVariables(const math_Vector& theVariables) = 0;
    virtual Standard_EXPORT math_Matrix     TrialDerivatives() const = 0;
    virtual Standard_EXPORT math_Vector     TrialValues() const = 0;
    virtual Standard_EXPORT math_Vector     TrialVariables() const = 0;

public:

    DEFINE_STANDARD_RTTIEXT(XSM_Section, Standard_Transient)

};


#endif // __XSM_Section_hxx__

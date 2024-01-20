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


#ifndef __CM_Material_hxx__
#define __CM_Material_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <math_Matrix.hxx>
#include <math_Vector.hxx>

// Forward declarations
class CM_Material;

// Handles
DEFINE_STANDARD_HANDLE(CM_Material, Standard_Transient);


// ============================================================================
/*!
 *  \brief CM_Material
 *  Base class implementation of a material constitutive model.
*/
// ============================================================================
class CM_Material : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT CM_Material();
    // destructors
    Standard_EXPORT ~CM_Material();

public:

    virtual Standard_EXPORT Standard_Boolean    CommitState() = 0;
    virtual Standard_EXPORT math_Matrix         CurrentDerivatives() const = 0;
    virtual Standard_EXPORT math_Vector         CurrentValues() const = 0;
    virtual Standard_EXPORT math_Vector         CurrentVariables() const = 0;
    virtual Standard_EXPORT math_Matrix         InitialDerivatives() const = 0;
    virtual Standard_EXPORT math_Vector         InitialValues() const = 0;
    virtual Standard_EXPORT math_Vector         InitialVariables() const = 0;
    virtual Standard_EXPORT Standard_Integer    NbValues() const = 0;
    virtual Standard_EXPORT Standard_Integer    NbVariables() const = 0;
    virtual Standard_EXPORT math_Matrix         PreviousDerivatives() const = 0;
    virtual Standard_EXPORT math_Vector         PreviousValues() const = 0;
    virtual Standard_EXPORT math_Vector         PreviousVariables() const = 0;
    virtual Standard_EXPORT Standard_Boolean    RevertToInitialState() = 0;
    virtual Standard_EXPORT Standard_Boolean    RevertToPreviousState() = 0;

public:

    DEFINE_STANDARD_RTTIEXT(CM_Material, Standard_Transient);

};

#endif // __CM_Material_hxx__

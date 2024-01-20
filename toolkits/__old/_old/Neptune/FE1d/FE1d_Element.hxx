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


#ifndef __FE1d_Element_hxx__
#define __FE1d_Element_hxx__

// Spartacus
#include <FE1d_Object.hxx>

// OpenCascade
#include <math_Matrix.hxx>
#include <math_Vector.hxx>

// Forward declarations
class FE1d_Element;

// Handles
DEFINE_STANDARD_HANDLE(FE1d_Element, FE1d_Object);


// ============================================================================
/*!
 *  \brief FE1d_Element
 *  Base class implementation of a finite element in 1d space.
*/
// ============================================================================
class FE1d_Element : public FE1d_Object
{

public:
    // constructors
    Standard_EXPORT FE1d_Element();
    // destructors
    Standard_EXPORT ~FE1d_Element();

public:

    virtual Standard_EXPORT math_Matrix     CurrentDerivatives() const = 0;
    virtual Standard_EXPORT math_Vector     CurrentValues() const = 0;
    virtual Standard_EXPORT math_Vector     CurrentVariables() const = 0;
    virtual Standard_EXPORT math_Matrix     InitialDerivatives() const = 0;
    virtual Standard_EXPORT math_Vector     InitialValues() const = 0;
    virtual Standard_EXPORT math_Vector     InitialVariables() const = 0;
    virtual Standard_EXPORT math_Matrix     PreviousDerivatives() const = 0;
    virtual Standard_EXPORT math_Vector     PreviousValues() const = 0;
    virtual Standard_EXPORT math_Vector     PreviousVariables() const = 0;


public:

    DEFINE_STANDARD_RTTIEXT(FE1d_Element, FE1d_Object);

};

#endif // __FE1d_Element_hxx__

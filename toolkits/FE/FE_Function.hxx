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


#ifndef __FE_Function_hxx__
#define __FE_Function_hxx__

// Spartacus
#include <FE_Object.hxx>

// OpenCascade
#include <math_Matrix.hxx>
#include <math_Vector.hxx>
#include <TColStd_SequenceOfInteger.hxx>

// Forward declarations
class FE_Function;

// Handles
DEFINE_STANDARD_HANDLE(FE_Function, FE_Object)


// ============================================================================
/*!
 *  \brief FE_Function
*/
// ============================================================================
class FE_Function : public FE_Object
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT FE_Function();
    // destructors
    Standard_EXPORT ~FE_Function();

public:

    virtual Standard_EXPORT const TColStd_SequenceOfInteger& Values() const = 0;
    virtual Standard_EXPORT const TColStd_SequenceOfInteger& Variables() const = 0;

public:

    DEFINE_STANDARD_RTTIEXT(FE_Function, FE_Object)

};


#endif // __FE_Function_hxx__

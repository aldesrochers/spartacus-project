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


#ifndef __UCM_Model_hxx__
#define __UCM_Model_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <math_Matrix.hxx>
#include <math_Vector.hxx>

// Forward declarations
class UCM_Model;

// Handles
DEFINE_STANDARD_HANDLE(UCM_Model, Standard_Transient);


// ============================================================================
/*!
 *  \brief UCM_Model
*/
// ============================================================================
class UCM_Model : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT UCM_Model();
    // destructors
    Standard_EXPORT ~UCM_Model();

public:

    virtual Standard_EXPORT math_Matrix     CurrentDerivatives() const = 0;
    virtual Standard_EXPORT math_Vector     CurrentValues() const = 0;
    virtual Standard_EXPORT math_Vector     CurrentVariables() const = 0;

public:

    DEFINE_STANDARD_RTTIEXT(UCM_Model, Standard_Transient);

};


#endif // __UCM_Model_hxx__

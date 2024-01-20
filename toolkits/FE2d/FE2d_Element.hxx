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


#ifndef __FE2d_Element_hxx__
#define __FE2d_Element_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <math_Matrix.hxx>
#include <math_Vector.hxx>


// Forward declarations
class FE2d_Element;

// Handles
DEFINE_STANDARD_HANDLE(FE2d_Element, Standard_Transient);


// ============================================================================
/*!
 *  \brief FE2d_Element
*/
// ============================================================================
class FE2d_Element : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT FE2d_Element();
    // destructors
    Standard_EXPORT ~FE2d_Element();

public:

    //virtual Standard_EXPORT math_Vector     CurrentDisplacements() const = 0;
    //virtual Standard_EXPORT math_Vector     CurrentForces() const = 0;
    //virtual Standard_EXPORT math_Matrix     CurrentStiffness() const = 0;
    //virtual Standard_EXPORT math_Vector     InitialDisplacements() const = 0;
    //virtual Standard_EXPORT math_Vector     InitialForces() const = 0;
    virtual Standard_EXPORT math_Matrix     InitialStiffness() const = 0;
    //virtual Standard_EXPORT math_Vector     PreviousDisplacements() const = 0;
    //virtual Standard_EXPORT math_Vector     PreviousForces() const = 0;
    //virtual Standard_EXPORT math_Matrix     PreviousStiffness() const = 0;
    //virtual Standard_EXPORT void            SetCurrentDisplacements(const math_Vector& theDisplacements) = 0;
    //virtual Standard_EXPORT void            SetCurrentTemperature(const Standard_Real theTemperature) = 0;

public:

    DEFINE_STANDARD_RTTIEXT(FE2d_Element, Standard_Transient);

};


#endif // __FE2d_Element_hxx__

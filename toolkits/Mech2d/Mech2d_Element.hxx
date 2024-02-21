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


#ifndef __Mech2d_Element_hxx__
#define __Mech2d_Element_hxx__

// Spartacus
#include <Mech2d_Object.hxx>

// OpenCascade
#include <math_Matrix.hxx>
#include <math_Vector.hxx>

// Forward declarations
class Mech2d_Element;

// Handles
DEFINE_STANDARD_HANDLE(Mech2d_Element, Mech2d_Object)


// ============================================================================
/*!
 *  \brief Mech2d_Element
*/
// ============================================================================
class Mech2d_Element : public Mech2d_Object
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mech2d_Element();
    // destructors
    Standard_EXPORT ~Mech2d_Element();

public:

    //virtual Standard_EXPORT math_Vector     CurrentDisplacements() const = 0;
    //virtual Standard_EXPORT math_Vector     CurrentForces() const = 0;
    //virtual Standard_EXPORT math_Matrix     CurrentStiffness() const = 0;
    virtual Standard_EXPORT math_Matrix     InitialStiffness() const = 0;
    //virtual Standard_EXPORT math_Matrix     PreviousStiffness() const = 0;
    //virtual Standard_EXPORT void            SetCurrentDisplacements(const math_Vector& theDisplacements) = 0;

public:

    DEFINE_STANDARD_RTTIEXT(Mech2d_Element, Mech2d_Object);

};


#endif // __Mech2d_Element_hxx__

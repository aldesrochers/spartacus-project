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


#ifndef __Model_MechanicalElement_hxx__
#define __Model_MechanicalElement_hxx__

// Spartacus
#include <Model_Element.hxx>

// OpenCascade
#include <math_Matrix.hxx>
#include <math_Vector.hxx>

// Forward declarations
class Model_MechanicalElement;

// Handles
DEFINE_STANDARD_HANDLE(Model_MechanicalElement, Model_Element)


// ============================================================================
/*!
 *  \brief Model_MechanicalElement
*/
// ============================================================================
class Model_MechanicalElement : public Model_Element
{

public:
    // constructors
    Standard_EXPORT Model_MechanicalElement();
    // destructors
    Standard_EXPORT ~Model_MechanicalElement();

public:

    //virtual Standard_EXPORT math_Matrix     ElasticStiffness() const = 0;
    //virtual Standard_EXPORT math_Matrix     TrialGeometricStiffness() const = 0;
    //virtual Standard_EXPORT math_Matrix     TrialTangentStiffness() const = 0;

public:

    DEFINE_STANDARD_RTTIEXT(Model_MechanicalElement, Model_Element)

};


#endif // __Model_MechanicalElement_hxx__

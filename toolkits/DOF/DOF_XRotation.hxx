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


#ifndef __DOF_XRotation_hxx__
#define __DOF_XRotation_hxx__

// Spartacus
#include <DOF_Rotation.hxx>

// Forward declarations
class DOF_XRotation;

// Handles
DEFINE_STANDARD_HANDLE(DOF_XRotation, DOF_Rotation)


// ============================================================================
/*!
 *  \brief DOF_XRotation
*/
// ============================================================================
class DOF_XRotation : public DOF_Rotation
{

public:
    // constructors
    Standard_EXPORT DOF_XRotation();
    Standard_EXPORT DOF_XRotation(const DOF_RotationState& theInitialState);
    // destructors
    Standard_EXPORT ~DOF_XRotation();

public:

    Standard_EXPORT DOFAbs_TypeOfDOF        DOFType() const Standard_OVERRIDE;

public:

    DEFINE_STANDARD_RTTIEXT(DOF_XRotation, DOF_Rotation)

};


#endif // __DOF_XRotation_hxx__

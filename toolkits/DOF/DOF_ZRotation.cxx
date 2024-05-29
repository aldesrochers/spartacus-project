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


// Spartacus
#include <DOF_ZRotation.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOF_ZRotation::DOF_ZRotation()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOF_ZRotation::DOF_ZRotation(const DOF_RotationState& theInitialState)
    : DOF_Rotation(theInitialState)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DOF_ZRotation::~DOF_ZRotation()
{

}

// ============================================================================
/*!
 *  \brief DOFType()
*/
// ============================================================================
DOFAbs_TypeOfDOF DOF_ZRotation::DOFType() const
{
    return DOFAbs_DOF_DRZ;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(DOF_ZRotation, DOF_Rotation)
IMPLEMENT_STANDARD_RTTIEXT(DOF_ZRotation, DOF_Rotation)

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
#include <DOF_RotationX.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOF_RotationX::DOF_RotationX()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DOF_RotationX::~DOF_RotationX()
{

}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
DOFAbs_TypeOfDOF DOF_RotationX::Type() const
{
    return DOFAbs_RotationX;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(DOF_RotationX, DOF_Rotation);
IMPLEMENT_STANDARD_RTTIEXT(DOF_RotationX, DOF_Rotation);

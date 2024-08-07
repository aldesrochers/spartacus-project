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
#include <DOF_Motion.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOF_Motion::DOF_Motion()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOF_Motion::DOF_Motion(const DOFAbs_TypeOfAxis theAxis)
    : myAxis(theAxis)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DOF_Motion::~DOF_Motion()
{

}

// ============================================================================
/*!
 *  \brief Axis()
*/
// ============================================================================
DOFAbs_TypeOfAxis DOF_Motion::Axis() const
{
    return myAxis;
}

// ============================================================================
/*!
 *  \brief SetAxis()
*/
// ============================================================================
void DOF_Motion::SetAxis(const DOFAbs_TypeOfAxis theAxis)
{
    myAxis = theAxis;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(DOF_Motion, DOF_DegreeOfFreedom)
IMPLEMENT_STANDARD_RTTIEXT(DOF_Motion, DOF_DegreeOfFreedom)

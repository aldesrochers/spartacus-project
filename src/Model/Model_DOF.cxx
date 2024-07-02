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
#include <Model_DOF.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_DOF::Model_DOF()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_DOF::~Model_DOF()
{

}

// ============================================================================
/*!
 *  \brief IsRotation()
*/
// ============================================================================
Standard_Boolean Model_DOF::IsRotation() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsTranslation()
*/
// ============================================================================
Standard_Boolean Model_DOF::IsTranslation() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Rotation()
*/
// ============================================================================
const Handle(DOF_Rotation)& Model_DOF::Rotation() const
{
    throw Standard_DomainError("Model_DOF::Rotation()");
}

// ============================================================================
/*!
 *  \brief Translation()
*/
// ============================================================================
const Handle(DOF_Translation)& Model_DOF::Translation() const
{
    throw Standard_DomainError("Model_DOF::Translation()");
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_DOF, Model_Object)
IMPLEMENT_STANDARD_RTTIEXT(Model_DOF, Model_Object)

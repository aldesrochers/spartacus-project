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
#include <ModelRep_DOF.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelRep_DOF::ModelRep_DOF()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelRep_DOF::~ModelRep_DOF()
{

}

// ============================================================================
/*!
 *  \brief IsRotation()
*/
// ============================================================================
Standard_Boolean ModelRep_DOF::IsRotation() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsTranslation()
*/
// ============================================================================
Standard_Boolean ModelRep_DOF::IsTranslation() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Translation()
*/
// ============================================================================
const Handle(DOF_Translation)& ModelRep_DOF::Translation() const
{
    throw Standard_DomainError("ModelRep_DOF::Translation()");
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelRep_DOF, ModelRep_DOF)
IMPLEMENT_STANDARD_RTTIEXT(ModelRep_DOF, ModelRep_DOF)

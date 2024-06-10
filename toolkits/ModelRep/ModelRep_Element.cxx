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
#include <ModelRep_Element.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelRep_Element::ModelRep_Element()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelRep_Element::~ModelRep_Element()
{

}

// ============================================================================
/*!
 *  \brief IsMech1d()
*/
// ============================================================================
Standard_Boolean ModelRep_Element::IsMech1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsMech2d()
*/
// ============================================================================
Standard_Boolean ModelRep_Element::IsMech2d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsMech3d()
*/
// ============================================================================
Standard_Boolean ModelRep_Element::IsMech3d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Mech1d()
*/
// ============================================================================
const Handle(Mech1d_Element)& ModelRep_Element::Mech1d() const
{
    throw Standard_DomainError("ModelRep_Element::Mech1d()");
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelRep_Element, Standard_Transient)
IMPLEMENT_STANDARD_RTTIEXT(ModelRep_Element, Standard_Transient)

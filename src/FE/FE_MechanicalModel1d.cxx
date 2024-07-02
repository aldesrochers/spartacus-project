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
#include <FE_MechanicalModel1d.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE_MechanicalModel1d::FE_MechanicalModel1d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE_MechanicalModel1d::FE_MechanicalModel1d(const Handle(Mech1d_Model)& theModel)
    : myModel(theModel)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE_MechanicalModel1d::~FE_MechanicalModel1d()
{

}

// ============================================================================
/*!
 *  \brief IsMechanicalModel1d()
*/
// ============================================================================
Standard_Boolean FE_MechanicalModel1d::IsMechanicalModel1d() const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief MechanicalModel1d()
*/
// ============================================================================
const Handle(Mech1d_Model)& FE_MechanicalModel1d::MechanicalModel1d() const
{
    return myModel;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE_MechanicalModel1d, FE_ElementModel)
IMPLEMENT_STANDARD_RTTIEXT(FE_MechanicalModel1d, FE_ElementModel)

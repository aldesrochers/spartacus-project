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
#include <FE_DegreeOfFreedom.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE_DegreeOfFreedom::FE_DegreeOfFreedom()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE_DegreeOfFreedom::~FE_DegreeOfFreedom()
{

}

// ============================================================================
/*!
 *  \brief IsValid()
*/
// ============================================================================
Standard_Boolean FE_DegreeOfFreedom::IsValid() const
{
    if(myType != FE_DOF_NONE)
        return Standard_True;
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void FE_DegreeOfFreedom::SetType(const FE_TypeOfDegreeOfFreedom theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
FE_TypeOfDegreeOfFreedom FE_DegreeOfFreedom::Type() const
{
    return myType;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE_DegreeOfFreedom, FE_Component)
IMPLEMENT_STANDARD_RTTIEXT(FE_DegreeOfFreedom, FE_Component)


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
#include <FE_Mechanical1d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE_Mechanical1d::FE_Mechanical1d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE_Mechanical1d::FE_Mechanical1d(const Handle(Mech1d_Model)& theModel)
    : myModel(theModel)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE_Mechanical1d::~FE_Mechanical1d()
{

}

// ============================================================================
/*!
 *  \brief ElasticStiffness()
*/
// ============================================================================
math_Matrix FE_Mechanical1d::ElasticStiffness() const
{
    return myModel->InitialStiffness();
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE_Mechanical1d, FE_Mechanical)
IMPLEMENT_STANDARD_RTTIEXT(FE_Mechanical1d, FE_Mechanical)

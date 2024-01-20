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
#include <load_Wind.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
load_Wind::load_Wind()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
load_Wind::~load_Wind()
{

}

// ============================================================================
/*!
 *  \brief Direction()
*/
// ============================================================================
const gp_Dir& load_Wind::Direction() const
{
    return myDirection;
}

// ============================================================================
/*!
 *  \brief Magnitude()
*/
// ============================================================================
Standard_Real load_Wind::Magnitude() const
{
    return myMagnitude;
}

// ============================================================================
/*!
 *  \brief SetDirection()
*/
// ============================================================================
void load_Wind::SetDirection(const gp_Dir &theDirection)
{
    myDirection = theDirection;
}

// ============================================================================
/*!
 *  \brief SetMagnitude()
*/
// ============================================================================
void load_Wind::SetMagnitude(const Standard_Real theMagnitude)
{
    myMagnitude = theMagnitude;
}




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
#include <CableLib_Cable.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
CableLib_Cable::CableLib_Cable()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
CableLib_Cable::~CableLib_Cable()
{

}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt& CableLib_Cable::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt& CableLib_Cable::Point2() const
{
    return myPoint2;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(CableLib_Cable, Standard_Transient);
IMPLEMENT_STANDARD_RTTIEXT(CableLib_Cable, Standard_Transient);

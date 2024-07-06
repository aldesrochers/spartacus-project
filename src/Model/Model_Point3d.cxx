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
#include <Model_Point3d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Point3d::Model_Point3d(const gp_Pnt& thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Point3d::~Model_Point3d()
{

}

// ============================================================================
/*!
 *  \brief IsPoint3d()
*/
// ============================================================================
Standard_Boolean Model_Point3d::IsPoint3d() const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Point3d()
*/
// ============================================================================
const gp_Pnt& Model_Point3d::Point3d() const
{
    return myPoint;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Point3d, Model_Point)
IMPLEMENT_STANDARD_RTTIEXT(Model_Point3d, Model_Point)

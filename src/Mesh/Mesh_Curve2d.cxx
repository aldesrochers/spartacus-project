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
#include <Mesh_Curve2d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_Curve2d::Mesh_Curve2d(const Handle(Geom2d_Curve)& theCurve)
    : myCurve(theCurve)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh_Curve2d::~Mesh_Curve2d()
{

}

// ============================================================================
/*!
 *  \brief Curve2d()
*/
// ============================================================================
const Handle(Geom2d_Curve)& Mesh_Curve2d::Curve2d() const
{
    return myCurve;
}

// ============================================================================
/*!
 *  \brief IsCurve2d()
*/
// ============================================================================
Standard_Boolean Mesh_Curve2d::IsCurve2d() const
{
    return Standard_True;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh_Curve2d, Mesh_Curve)
IMPLEMENT_STANDARD_RTTIEXT(Mesh_Curve2d, Mesh_Curve)

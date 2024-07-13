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
#include <Mesh_Curve.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_Curve::Mesh_Curve()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh_Curve::~Mesh_Curve()
{

}

// ============================================================================
/*!
 *  \brief IsCurve1d()
*/
// ============================================================================
Standard_Boolean Mesh_Curve::IsCurve1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsCurve2d()
*/
// ============================================================================
Standard_Boolean Mesh_Curve::IsCurve2d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsCurve3d()
*/
// ============================================================================
Standard_Boolean Mesh_Curve::IsCurve3d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Curve2d()
*/
// ============================================================================
const Handle(Geom2d_Curve)& Mesh_Curve::Curve2d() const
{
    throw Standard_DomainError("Mesh_Curve::Curve2d()");
}

// ============================================================================
/*!
 *  \brief Curve3d()
*/
// ============================================================================
const Handle(Geom_Curve)& Mesh_Curve::Curve3d() const
{
    throw Standard_DomainError("Mesh_Curve::Curve3d()");
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh_Curve, Standard_Transient)
IMPLEMENT_STANDARD_RTTIEXT(Mesh_Curve, Standard_Transient)

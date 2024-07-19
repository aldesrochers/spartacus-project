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


#ifndef __Mesh_Curve_hxx__
#define __Mesh_Curve_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>

// Forward declarations
class Mesh_Curve;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_Curve, Standard_Transient)


// ============================================================================
/*!
 *  \brief Mesh_Curve
*/
// ============================================================================
class Mesh_Curve : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT Mesh_Curve();
    // destructors
    Standard_EXPORT ~Mesh_Curve();

public:

    virtual const Handle(Geom2d_Curve)&         Curve2d() const;
    virtual const Handle(Geom_Curve)&           Curve3d() const;
    virtual Standard_EXPORT Standard_Boolean    IsCurve1d() const;
    virtual Standard_EXPORT Standard_Boolean    IsCurve2d() const;
    virtual Standard_EXPORT Standard_Boolean    IsCurve3d() const;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_Curve, Standard_Transient)

};


#endif // __Mesh_Curve_hxx__

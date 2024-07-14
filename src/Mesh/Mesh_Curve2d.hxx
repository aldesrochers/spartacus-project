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


#ifndef __Mesh_Curve2d_hxx__
#define __Mesh_Curve2d_hxx__

// Spartacus
#include <Mesh_Curve.hxx>

// OpenCascade
#include <Geom2d_Curve.hxx>

// Forward declarations
class Mesh_Curve2d;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_Curve2d, Mesh_Curve)


// ============================================================================
/*!
 *  \brief Mesh_Curve2d
*/
// ============================================================================
class Mesh_Curve2d : public Mesh_Curve
{

public:
    // constructors
    Standard_EXPORT Mesh_Curve2d(const Handle(Geom2d_Curve)& theCurve);
    // destructors
    Standard_EXPORT ~Mesh_Curve2d();

public:

    Standard_EXPORT const Handle(Geom2d_Curve)& Curve2d() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Boolean            IsCurve2d() const Standard_OVERRIDE;

private:

    Handle(Geom2d_Curve)    myCurve;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_Curve2d, Mesh_Curve)

};


#endif // __Mesh_Curve2d_hxx__

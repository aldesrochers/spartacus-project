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


#ifndef __Mesh_Point2d_hxx__
#define __Mesh_Point2d_hxx__

// Spartacus
#include <Mesh_Point.hxx>

// Forward declarations
class Mesh_Point2d;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_Point2d, Mesh_Point)


// ============================================================================
/*!
 *  \brief Mesh_Point2d
*/
// ============================================================================
class Mesh_Point2d : public Mesh_Point
{

public:
    // constructors
    Standard_EXPORT Mesh_Point2d(const gp_Pnt2d& thePoint);
    // destructors
    Standard_EXPORT ~Mesh_Point2d();

public:

    Standard_EXPORT Standard_Boolean    IsPoint2d() const Standard_OVERRIDE;
    Standard_EXPORT const gp_Pnt2d&     Point2d() const Standard_OVERRIDE;

private:

    gp_Pnt2d    myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_Point2d, Mesh_Point)

};


#endif // __Mesh_Point2d_hxx__

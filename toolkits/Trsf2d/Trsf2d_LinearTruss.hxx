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


#ifndef __Trsf2d_LinearTruss_hxx__
#define __Trsf2d_LinearTruss_hxx__

// Spartacus
#include <Trsf2d_Truss.hxx>

// Forward declarations
class Trsf2d_LinearTruss;

// Handles
DEFINE_STANDARD_HANDLE(Trsf2d_LinearTruss, Trsf2d_Truss)


// ============================================================================
/*!
 *  \brief Trsf2d_LinearTruss
*/
// ============================================================================
class Trsf2d_LinearTruss : public Trsf2d_Truss
{

public:
    // constructors
    Standard_EXPORT Trsf2d_LinearTruss();
    Standard_EXPORT Trsf2d_LinearTruss(const gp_Pnt2d& thePoint1,
                                       const gp_Pnt2d& thePoint2);
    // destructors
    Standard_EXPORT ~Trsf2d_LinearTruss();

public:

    Standard_EXPORT Standard_Boolean    Transformation(const math_Vector& U,
                                                       math_Matrix& T) const Standard_OVERRIDE;

public:

    DEFINE_STANDARD_RTTIEXT(Trsf2d_LinearTruss, Trsf2d_Truss)

};


#endif // __Trsf2d_LinearTruss_hxx__

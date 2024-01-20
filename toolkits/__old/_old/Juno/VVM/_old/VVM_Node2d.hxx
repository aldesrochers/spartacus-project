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


#ifndef __VVM_Node2d_hxx__
#define __VVM_Node2d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Pnt2d.hxx>


// ============================================================================
/*!
 *  \brief VVM_Node2d
*/
// ============================================================================
class VVM_Node2d
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT VVM_Node2d();
    Standard_EXPORT VVM_Node2d(const gp_XY& theCoordinates);
    Standard_EXPORT VVM_Node2d(const gp_Pnt2d& theLocation);
    Standard_EXPORT VVM_Node2d(const Standard_Real theX,
                               const Standard_Real theY);
    // destructors
    Standard_EXPORT ~VVM_Node2d();

public:

    Standard_EXPORT const gp_XY&    Coordinates() const;
    Standard_EXPORT Standard_Real   Distance(const VVM_Node2d& theOther) const;
    Standard_EXPORT const gp_Pnt2d& Location() const;
    Standard_EXPORT void            SetCoordinates(const gp_XY& theCoordinates);
    Standard_EXPORT void            SetLocation(const gp_Pnt2d& theLocation);
    Standard_EXPORT void            SetX(const Standard_Real theX);
    Standard_EXPORT void            SetY(const Standard_Real theY);
    Standard_EXPORT Standard_Real   X() const;
    Standard_EXPORT Standard_Real   Y() const;

private:

    gp_Pnt2d      myLocation;

};

#endif // __VVM_Node2d_hxx__

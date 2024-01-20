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


#ifndef __VVM_Node_hxx__
#define __VVM_Node_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Pnt.hxx>


// ============================================================================
/*!
 *  \brief VVM_Node
*/
// ============================================================================
class VVM_Node
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT VVM_Node();
    Standard_EXPORT VVM_Node(const gp_XYZ& theCoordinates);
    Standard_EXPORT VVM_Node(const gp_Pnt& theLocation);
    Standard_EXPORT VVM_Node(const Standard_Real theX,
                             const Standard_Real theY,
                             const Standard_Real theZ);
    // destructors
    Standard_EXPORT ~VVM_Node();

public:

    Standard_EXPORT const gp_XYZ&   Coordinates() const;
    Standard_EXPORT Standard_Real   Distance(const VVM_Node& theOther) const;
    Standard_EXPORT const gp_Pnt&   Location() const;
    Standard_EXPORT void            SetCoordinates(const gp_XYZ& theCoordinates);
    Standard_EXPORT void            SetLocation(const gp_Pnt& theLocation);
    Standard_EXPORT void            SetX(const Standard_Real theX);
    Standard_EXPORT void            SetY(const Standard_Real theY);
    Standard_EXPORT void            SetZ(const Standard_Real theZ);
    Standard_EXPORT Standard_Real   X() const;
    Standard_EXPORT Standard_Real   Y() const;
    Standard_EXPORT Standard_Real   Z() const;

private:

    gp_Pnt      myLocation;

};

#endif // __VVM_Node_hxx__

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


#ifndef __mp_Node1d_hxx__
#define __mp_Node1d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <gp_Pnt1d.hxx>

// ============================================================================
/*!
 *  \brief mp_Node1d
*/
// ============================================================================
class mp_Node1d
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT mp_Node1d();
    Standard_EXPORT mp_Node1d(const gp_Pnt1d& thePoint);
    Standard_EXPORT mp_Node1d(const Standard_Real theX);
    // destructors
    Standard_EXPORT ~mp_Node1d();

public:

    Standard_EXPORT const gp_Pnt1d&     Point() const;
    Standard_EXPORT void                SetPoint(const gp_Pnt1d& thePoint);
    Standard_EXPORT void                SetX(const Standard_Real theX);
    Standard_EXPORT Standard_Real       X() const;

private:

    gp_Pnt1d        myPoint;

};


#endif // __mp_Node1d_hxx__

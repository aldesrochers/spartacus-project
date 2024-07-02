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


#ifndef __load_Force2d_hxx__
#define __load_Force2d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Dir2d.hxx>



// ============================================================================
/*!
 *  \brief load_Force2d
*/
// ============================================================================
class load_Force2d
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT load_Force2d();
    // destructors
    Standard_EXPORT ~load_Force2d();

public:

    Standard_EXPORT const gp_Dir2d& Direction() const;
    Standard_EXPORT Standard_Real   Magnitude() const;
    Standard_EXPORT void            SetDirection(const gp_Dir2d& theDirection);
    Standard_EXPORT void            SetMagnitude(const Standard_Real theMagnitude);

private:

    gp_Dir2d        myDirection;
    Standard_Real   myMagnitude;


};


#endif // __load_Force2d_hxx__

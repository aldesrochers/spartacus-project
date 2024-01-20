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


#ifndef __load_Wind_hxx__
#define __load_Wind_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Dir.hxx>



// ============================================================================
/*!
 *  \brief load_Wind
*/
// ============================================================================
class load_Wind
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT load_Wind();
    // destructors
    Standard_EXPORT ~load_Wind();

public:

    Standard_EXPORT const gp_Dir&   Direction() const;
    Standard_EXPORT Standard_Real   Magnitude() const;
    Standard_EXPORT void            SetDirection(const gp_Dir& theDirection);
    Standard_EXPORT void            SetMagnitude(const Standard_Real theMagnitude);

private:

    gp_Dir          myDirection;
    Standard_Real   myMagnitude;


};


#endif // __load_Wind_hxx__

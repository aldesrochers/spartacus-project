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


#ifndef __CableLib_Cable_hxx__
#define __CableLib_Cable_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <gp_Pnt.hxx>

// Forward declarations
class CableLib_Cable;

// Handles
DEFINE_STANDARD_HANDLE(CableLib_Cable, Standard_Transient);


// ============================================================================
/*!
 *  \brief CableLib_Cable
*/
// ============================================================================
class CableLib_Cable : public Standard_Transient
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT CableLib_Cable();
    // destructors
    Standard_EXPORT ~CableLib_Cable();

public:

    Standard_EXPORT const gp_Pnt&   Point1() const;
    Standard_EXPORT const gp_Pnt&   Point2() const;

private:

    gp_Pnt      myPoint1;
    gp_Pnt      myPoint2;

public:

    DEFINE_STANDARD_RTTIEXT(CableLib_Cable, Standard_Transient);

};


#endif // __CableLib_Cable_hxx__

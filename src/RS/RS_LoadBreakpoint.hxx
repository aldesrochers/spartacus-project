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


#ifndef __RS_LoadBreakpoint_hxx__
#define __RS_LoadBreakpoint_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Dir.hxx>


// ============================================================================
/*!
 *  \brief RS_LoadBreakpoint
*/
// ============================================================================
class RS_LoadBreakpoint
{
public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT RS_LoadBreakpoint();
    // destructors
    Standard_EXPORT ~RS_LoadBreakpoint();

public:

    Standard_EXPORT const gp_Dir&   LoadDirection() const;
    Standard_EXPORT Standard_Real   LoadMagnitude() const;
    Standard_EXPORT Standard_Real   Temperature() const;
    Standard_EXPORT Standard_Real   Time() const;

private:

    gp_Dir                      myLoadDirection;
    Standard_Real               myLoadMagnitude;
    Standard_Real               myTemperature;
    Standard_Real               myTime;

};

#endif // __RS_LoadBreakpoint_hxx__

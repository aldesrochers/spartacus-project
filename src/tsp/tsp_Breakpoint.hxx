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


#ifndef __tsp_Breakpoint_hxx__
#define __tsp_Breakpoint_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>



// ============================================================================
/*!
 *  \brief tsp_Breakpoint
 *  Class implementation of a time series function breakpoint.
 *  Defines a (Time, Factor) point in a time series.
*/
// ============================================================================
class tsp_Breakpoint
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT tsp_Breakpoint();
    Standard_EXPORT tsp_Breakpoint(const Standard_Real theTime,
                                   const Standard_Real theFactor);
    // destructors
    Standard_EXPORT ~tsp_Breakpoint();

public:

    Standard_EXPORT Standard_Real       Factor() const;
    Standard_EXPORT Standard_Real       Time() const;
    Standard_EXPORT void                SetFactor(const Standard_Real theFactor);
    Standard_EXPORT void                SetTime(const Standard_Real theTime);

private:

    Standard_Real       myFactor;
    Standard_Real       myTime;

};

#endif // __tsp_Breakpoint_hxx__

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

#include <iostream>
using namespace std;

// Spartacus
#include <ts_PiecewiseLinear.hxx>

// OpenCascade
#include <Standard_ConstructionError.hxx>
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ts_PiecewiseLinear::ts_PiecewiseLinear(const ts_Array1OfBreakpoint& theBreakpoints)
    : myBreakpoints(theBreakpoints)
{
    // Check that the time series is defined by a minimum of 2 breakpoints
    Standard_ConstructionError_Raise_if(myBreakpoints.Size() < 2,
                                        "ts_PiecewiseLinear -> Minimum number of breakpoints is 2.");

    // Check that breakpoints ordinates (time) are increasing
    for(Standard_Integer anIndex=myBreakpoints.Lower(); anIndex < myBreakpoints.Upper(); anIndex ++) {
        Standard_Real T1 = myBreakpoints.Value(anIndex).Time();
        Standard_Real T2 = myBreakpoints.Value(anIndex+1).Time();
        Standard_ConstructionError_Raise_if(T2 < T1,
                                            "ts_PiecewiseLinear -> Breakpoints times are not in increasing order.");
    }

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ts_PiecewiseLinear::~ts_PiecewiseLinear()
{

}

// ============================================================================
/*!
 *  \brief Breakpoints()
*/
// ============================================================================
const ts_Array1OfBreakpoint& ts_PiecewiseLinear::Breakpoints() const
{
    return myBreakpoints;
}

// ============================================================================
/*!
 *  \brief NbBreakpoints()
*/
// ============================================================================
Standard_Integer ts_PiecewiseLinear::NbBreakpoints() const
{
    return myBreakpoints.Size();
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
Standard_Boolean ts_PiecewiseLinear::Value(const Standard_Real theTime,
                                           Standard_Real &theFactor)
{
    // check if time is lower than first defined breakpoint
    if(theTime < myBreakpoints.First().Time()) {
        theFactor = myBreakpoints.First().Factor();
        return Standard_False;
    }

    // check if time is higher than last defined breakpoint
    if(theTime > myBreakpoints.Last().Time()) {
        theFactor = myBreakpoints.Last().Factor();
        return Standard_False;
    }

    // compute value by linear interpolation
    for(Standard_Integer anIndex=myBreakpoints.Lower(); anIndex < myBreakpoints.Upper(); anIndex ++) {
        Standard_Real T1 = myBreakpoints.Value(anIndex).Time();
        Standard_Real T2 = myBreakpoints.Value(anIndex+1).Time();
        Standard_Real F1 = myBreakpoints.Value(anIndex).Factor();
        Standard_Real F2 = myBreakpoints.Value(anIndex+1).Factor();

        if(theTime >=T1 && theTime <= T2) {
            theFactor = (F2 - F1)/(T2 - T1) * (theTime - T1) + F1;
            return Standard_True;
        }
    }

    return Standard_False;
}

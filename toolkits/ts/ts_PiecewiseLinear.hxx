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


#ifndef __ts_PiecewiseLinear_hxx__
#define __ts_PiecewiseLinear_hxx__

// Spartacus
#include <ts_Array1OfBreakpoint.hxx>
#include <ts_Function.hxx>


// ============================================================================
/*!
 *  \brief ts_PiecewiseLinear
*/
// ============================================================================
class ts_PiecewiseLinear : public ts_Function
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ts_PiecewiseLinear(const ts_Array1OfBreakpoint& theBreakpoints);
    // destructors
    Standard_EXPORT ~ts_PiecewiseLinear();

public:

    Standard_EXPORT Standard_Boolean    Value(const Standard_Real theTime,
                                              Standard_Real &theFactor) Standard_OVERRIDE;

public:

    Standard_EXPORT const ts_Array1OfBreakpoint&    Breakpoints() const;
    Standard_EXPORT Standard_Integer                NbBreakpoints() const;

private:

    ts_Array1OfBreakpoint       myBreakpoints;

};

#endif // __ts_PiecewiseLinear_hxx__

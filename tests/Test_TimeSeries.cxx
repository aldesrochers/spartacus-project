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


// ============================================================================
/*!
 *  \brief Test_TimeSeries
*/
// ============================================================================
int main(int argc, char** argv)
{

    ts_Array1OfBreakpoint anArray(1, 4);
    anArray.SetValue(1, ts_Breakpoint(0., 0.));
    anArray.SetValue(2, ts_Breakpoint(1., 0.34));
    anArray.SetValue(3, ts_Breakpoint(5., 1.4));
    anArray.SetValue(4, ts_Breakpoint(10., 0.1));

    Standard_Real F;
    ts_PiecewiseLinear aTimeSeries(anArray);
    cout << aTimeSeries.Value(8.5, F) << endl;
    cout << F << endl;
    cout << aTimeSeries.NbBreakpoints() << endl;

    return 0;
}

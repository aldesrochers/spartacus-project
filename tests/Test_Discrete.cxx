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

// OpenCascade
#include <GC_MakeLine.hxx>
#include <GC_MakeSegment.hxx>
#include <GC_MakeArcOfParabola.hxx>

// Spartacus
#include <Discrete_FunctionCurveNbSegments.hxx>
#include <math_FunctionSetRoot.hxx>
#include <GeomAdaptor_Curve.hxx>

// ============================================================================
/*!
 *  \brief Test_Kernel
*/
// ============================================================================
int main(int argc, char** argv)
{

    Handle(Geom_Line) aLine = GC_MakeLine(gp_Pnt(0,0,0), gp_Pnt(10,0,0)).Value();
    //Handle(Geom_TrimmedCurve) aSegment = GC_MakeSegment(gp_Pnt(0,0,0), gp_Pnt(10,0,0)).Value();

    gp_Parab aParab(gp_Ax2(), 10.);
    Handle(Geom_TrimmedCurve) aSegment = GC_MakeArcOfParabola(aParab, -10, 10, Standard_True);



    GeomAdaptor_Curve anAdaptor(aSegment);
    Discrete_FunctionCurveNbSegments aFunction(anAdaptor, 5);
    math_Vector aTol(1,4,1E-8);

    Standard_Real U1 = anAdaptor.FirstParameter();
    Standard_Real U2 = anAdaptor.LastParameter();

    math_Vector aGuess(1, 4, 0.);
    aGuess(1) = (U2-U1) * 0.2 + U1;
    aGuess(2) = (U2-U1) * 0.4 + U1;
    aGuess(3) = (U2-U1) * 0.6 + U1;
    aGuess(4) = (U2-U1) * 0.8 + U1;

    math_FunctionSetRoot aRoot(aFunction, aTol, 100);
    aRoot.Perform(aFunction, aGuess);
    math_Vector aSol = aRoot.Root();

    cout << aRoot.NbIterations() << endl;
    cout << aRoot.IsDone() << endl;
    cout << aRoot.IsSolutionReached(aFunction) << endl;
    cout << aSol.Value(1) << endl;
    cout << aSol.Value(2) << endl;
    cout << aSol.Value(3) << endl;
    cout << aSol.Value(4) << endl;

    gp_Pnt P1 = anAdaptor.Value(U1);
    gp_Pnt P2 = anAdaptor.Value(aSol.Value(1));
    gp_Pnt P3 = anAdaptor.Value(aSol.Value(2));
    gp_Pnt P4 = anAdaptor.Value(aSol.Value(3));
    gp_Pnt P5 = anAdaptor.Value(aSol.Value(4));
    gp_Pnt P6 = anAdaptor.Value(U2);

    Standard_Real D1 = P1.Distance(P2);
    Standard_Real D2 = P2.Distance(P3);
    Standard_Real D3 = P3.Distance(P4);
    Standard_Real D4 = P4.Distance(P5);
    Standard_Real D5 = P5.Distance(P6);

    cout << D1 << " " << D2 << " " << D3 << " " << D4 << " " << D5 << endl;
}

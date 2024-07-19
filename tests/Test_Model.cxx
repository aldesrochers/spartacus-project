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
#include <MeshFunc_CurveNbSegments.hxx>
#include <Triangle_FaceMesher.hxx>

// OpenCascade
#include <GeomAdaptor_Curve.hxx>
#include <Geom_Line.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <math_FunctionSetRoot.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>


// ============================================================================
/*!
 *  \brief Test_Model
*/
// ============================================================================
int main(int argc, char** argv)
{

    Handle(Geom_Line) aLine = new Geom_Line(gp_Pnt(0,0,0), gp_Vec(1,0,0));
    Handle(Geom_TrimmedCurve) aCurve = new Geom_TrimmedCurve(aLine, 0., 1.);
    GeomAdaptor_Curve anAdaptor(aCurve);
    MeshFunc_CurveNbSegments aFunction(anAdaptor, 10);

    math_Vector aTolerance(1,9,1E-10);
    math_Vector aGuess(1,9,0.);
    aGuess(1) = 0.05;
    aGuess(2) = 0.2;
    aGuess(3) = 0.29;
    aGuess(4) = 0.35;
    aGuess(5) = 0.49;
    aGuess(6) = 0.61;
    aGuess(7) = 0.69;
    aGuess(8) = 0.75;
    aGuess(9) = 0.95;
    math_FunctionSetRoot aSolver(aFunction, aTolerance);
    aSolver.Perform(aFunction, aGuess);
    cout << aSolver.NbIterations() << endl;
    cout << aSolver.IsDone() << endl;

    math_Vector aSol = aSolver.Root();
    cout << aSol << endl;


    cout << endl;
    cout << "Starting TRIANGLE" << endl;

    BRepBuilderAPI_MakePolygon aPolyBuilder;
    aPolyBuilder.Add(gp_Pnt(0,0,0));
    aPolyBuilder.Add(gp_Pnt(1,0,0));
    aPolyBuilder.Add(gp_Pnt(1,1,0));
    aPolyBuilder.Add(gp_Pnt(0,1,0));
    aPolyBuilder.Close();
    TopoDS_Wire aWire = aPolyBuilder.Wire();
    TopoDS_Face aFace = BRepBuilderAPI_MakeFace(aWire, Standard_True);

    Triangle_FaceMesher aMesher;
    aMesher.SetFace(aFace);
    aMesher.Perform();



    cout << "Test_MakeModel" << endl;
}

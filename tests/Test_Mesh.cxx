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
#include <BRep_Tool.hxx>
#include <DEBRepCascade_Provider.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Shape.hxx>
#include <TopExp.hxx>
#include <TopExp_Explorer.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepMesh_IncrementalMesh.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>
#include <gp_Parab.hxx>
#include <Geom_Parabola.hxx>
#include <BRepAdaptor_Curve.hxx>

// Spartacus
#include <Triangle_MakeMesh.hxx>
#include <Triangle_MakeModel.hxx>
#include <Triangle_Model.hxx>
#include <Triangle_Node.hxx>
#include <cp_LinearLine.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <GCPnts_UniformDeflection.hxx>
#include <GCPnts_UniformAbscissa.hxx>
#include <Geom_TrimmedCurve.hxx>

// ============================================================================
/*!
 *  \brief Test_Mesh
*/
// ============================================================================
int main(int argc, char** argv)
{

    TopoDS_Shape aShape;
    DEBRepCascade_Provider aProvider;
    cout << aProvider.Read(TCollection_AsciiString("/home/alexis/Sources/opencascade-7.7.0/data/occ/bottle.brep"), aShape) << endl;

    gp_Ax2 aLocation;
    aLocation.SetXDirection(gp_Dir(0,1,0));
    gp_Parab aParab(aLocation, 400.);
    Handle(Geom_Parabola) aParabola = new Geom_Parabola(aParab);
    Handle(Geom_TrimmedCurve) aCurve = new Geom_TrimmedCurve(aParabola, -200, 200);

    GeomAdaptor_Curve anAdaptor(aCurve);
    GCPnts_UniformAbscissa anAlgo(anAdaptor, 300);
    cout << anAlgo.IsDone() << endl;
    cout << anAlgo.NbPoints() << endl;

    for(Standard_Integer i=1; i<=anAlgo.NbPoints(); i++) {
        Standard_Real P = anAlgo.Parameter(i);
        gp_Pnt aPoint = aCurve->Value(P);
        cout << aPoint.X() << " " << aPoint.Y() << " " << aPoint.Z() << endl;
    }

    for(Standard_Integer i=1; i<anAlgo.NbPoints(); i++) {
        Standard_Real P1 = anAlgo.Parameter(i);
        Standard_Real P2 = anAlgo.Parameter(i+1);
        gp_Pnt aPoint1 = aCurve->Value(P1);
        gp_Pnt aPoint2 = aCurve->Value(P2);
        cout << aPoint1.Distance(aPoint2) << endl;
    }


    cout << "Test_Mesh" << endl;
    return 0;
}

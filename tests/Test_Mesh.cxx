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
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakePolygon.hxx>
#include <BRep_Tool.hxx>
#include <GCPnts_UniformAbscissa.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS.hxx>
#include <TopExp.hxx>
#include <TColgp_SequenceOfPnt.hxx>
#include <BRepAlgoAPI_Fuse.hxx>


// ============================================================================
/*!
 *  \brief Test_Mesh
*/
// ============================================================================
int main(int argc, char** argv)
{

    TopoDS_Wire aWire1 = BRepLib_MakePolygon(gp_Pnt(0,0,0), gp_Pnt(1,0,0), gp_Pnt(1,1,0), gp_Pnt(0,1,0), Standard_True).Wire();
    TopoDS_Wire aWire2 = BRepLib_MakePolygon(gp_Pnt(1,0,0), gp_Pnt(2,0,0), gp_Pnt(2,1,0), gp_Pnt(1,1,0), Standard_True).Wire();
    TopoDS_Face aFace1 = BRepLib_MakeFace(aWire1, Standard_True).Face();
    TopoDS_Face aFace2 = BRepLib_MakeFace(aWire2, Standard_True).Face();
    TopoDS_Shape aShape = BRepAlgoAPI_Fuse(aFace1, aFace2).Shape();

    TopTools_IndexedMapOfShape myWires;
    TopTools_IndexedMapOfShape myEdges;
    TopExp::MapShapes(aShape, TopAbs_WIRE, myWires);
    TopExp::MapShapes(aShape, TopAbs_EDGE, myEdges);







    cout << "Test_Mesh" << endl;
    return 0;
}

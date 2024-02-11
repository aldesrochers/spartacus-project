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
#include <BRepLib_MakeVertex.hxx>

// Spartacus
#include <BRepCell_MakeBiQuadraticTriangle.hxx>
#include <BRepCell_MakeQuadraticTriangle.hxx>
#include <TopExp.hxx>
#include <TopoDS.hxx>
#include <BRep_Tool.hxx>

// ============================================================================
/*!
 *  \brief Test_BRepCell
*/
// ============================================================================
int main(int argc, char** argv)
{

    TopoDS_Vertex aVertex1 = BRepLib_MakeVertex(gp_Pnt(0,0,0)).Vertex();
    TopoDS_Vertex aVertex2 = BRepLib_MakeVertex(gp_Pnt(1,0,0)).Vertex();
    TopoDS_Vertex aVertex3 = BRepLib_MakeVertex(gp_Pnt(0,1,0)).Vertex();
    TopoDS_Vertex aVertex4 = BRepLib_MakeVertex(gp_Pnt(0.5,0,0)).Vertex();
    TopoDS_Vertex aVertex5 = BRepLib_MakeVertex(gp_Pnt(0.5,0.5,0)).Vertex();
    TopoDS_Vertex aVertex6 = BRepLib_MakeVertex(gp_Pnt(0,0.5,0)).Vertex();
    TopoDS_Vertex aVertex7 = BRepLib_MakeVertex(gp_Pnt(0.25,0.8, 0.)).Vertex();

    BRepCell_MakeQuadraticTriangle aTriangle(aVertex1, aVertex2, aVertex3,
                                             aVertex4, aVertex5, aVertex6);
    TopoDS_Shape aShape = aTriangle.Shape();



    BRepCell_MakeBiQuadraticTriangle aBTriangle(aVertex1, aVertex2, aVertex3, aVertex4, aVertex5, aVertex6, aVertex7);
    cout << aBTriangle.IsDone() << endl;
    TopoDS_Face aFace = aBTriangle.Face();


    TopTools_IndexedMapOfShape aMap;
    TopExp::MapShapes(aFace, TopAbs_VERTEX, aMap);
    cout << aMap.Size() << endl;

    for(Standard_Integer i=1; i<=aMap.Size(); i++) {
        TopoDS_Vertex aVertex = TopoDS::Vertex(aMap.FindKey(i));
        gp_Pnt aPnt = BRep_Tool::Pnt(aVertex);
        cout << aPnt.X() << " " << aPnt.Y() << " " << aPnt.Z() << endl;
    }





}

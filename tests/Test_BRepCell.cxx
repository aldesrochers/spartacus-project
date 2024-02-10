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
#include <BRepCell_MakeQuadraticLine.hxx>
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
    TopoDS_Vertex aVertex2 = BRepLib_MakeVertex(gp_Pnt(2,0,0)).Vertex();
    TopoDS_Vertex aVertex3 = BRepLib_MakeVertex(gp_Pnt(1,0,0)).Vertex();

    BRepCell_MakeQuadraticLine aLine(aVertex1, aVertex2, aVertex3);
    cout << aLine.IsDone() << endl;
    TopoDS_Edge anEdge = aLine.Edge();


    TopTools_IndexedMapOfShape aMap;
    TopExp::MapShapes(anEdge, TopAbs_VERTEX, aMap);
    cout << aMap.Size() << endl;
    TopoDS_Vertex V1 = TopoDS::Vertex(aMap.FindKey(1));
    TopoDS_Vertex V2 = TopoDS::Vertex(aMap.FindKey(2));
    TopoDS_Vertex V3 = TopoDS::Vertex(aMap.FindKey(3));
    gp_Pnt P1 = BRep_Tool::Pnt(V1);
    gp_Pnt P2 = BRep_Tool::Pnt(V2);
    gp_Pnt P3 = BRep_Tool::Pnt(V3);

    cout << P1.X() << " " << P1.Y() << " " << P1.Z() << endl;
    cout << P2.X() << " " << P2.Y() << " " << P2.Z() << endl;
    cout << P3.X() << " " << P3.Y() << " " << P3.Z() << endl;


}

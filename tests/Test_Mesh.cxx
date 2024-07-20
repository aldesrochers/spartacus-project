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

// Spartacus
#include <Triangle_MakeModel.hxx>
#include <Triangle_Model.hxx>
#include <Triangle_Node.hxx>
#include <cp_LinearLine.hxx>

// ============================================================================
/*!
 *  \brief Test_Mesh
*/
// ============================================================================
int main(int argc, char** argv)
{

    //TopoDS_Shape aShape;
    //DEBRepCascade_Provider aProvider;
    //cout << aProvider.Read(TCollection_AsciiString("/home/alexis/Sources/opencascade-7.7.0/data/occ/bottle.brep"), aShape) << endl;


    TopoDS_Vertex aVertex1 = BRepBuilderAPI_MakeVertex(gp_Pnt(0,0,0)).Vertex();
    TopoDS_Vertex aVertex2 = BRepBuilderAPI_MakeVertex(gp_Pnt(1,0,0)).Vertex();
    TopoDS_Vertex aVertex3 = BRepBuilderAPI_MakeVertex(gp_Pnt(1,1,0)).Vertex();
    TopoDS_Vertex aVertex4 = BRepBuilderAPI_MakeVertex(gp_Pnt(0,1,0)).Vertex();
    TopoDS_Wire aWire = BRepBuilderAPI_MakePolygon(aVertex1, aVertex2, aVertex3, aVertex4, Standard_True).Wire();
    TopoDS_Face aFace = BRepBuilderAPI_MakeFace(aWire, Standard_True).Face();

    Handle(Triangle_Model) aModel = Triangle_MakeModel(aFace).Model();

    cout << aModel->NbNodes() << endl;
    cout << aModel->NbSegments() << endl;

    Handle(Triangle_Segment) aSegment = aModel->Segment(3);
    cout << aSegment->Node1() << " " << aSegment->Node2() << endl;



    cout << "Test_Mesh" << endl;
    return 0;
}

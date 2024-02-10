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
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepGProp_Vinert.hxx>
#include <BRepGProp.hxx>


// ============================================================================
/*!
 *  \brief Test_BRepPolyAPI
*/
// ============================================================================
int main(int argc, char** argv)
{
    /*
    TopoDS_Vertex aVertex1 = BRepBuilderAPI_MakeVertex(gp_Pnt(0,0,0)).Vertex();
    TopoDS_Vertex aVertex2 = BRepBuilderAPI_MakeVertex(gp_Pnt(0,1,0)).Vertex();
    TopoDS_Vertex aVertex3 = BRepBuilderAPI_MakeVertex(gp_Pnt(-1,1,0)).Vertex();
    TopoDS_Vertex aVertex4 = BRepBuilderAPI_MakeVertex(gp_Pnt(-1,0,0)).Vertex();
    TopoDS_Vertex aVertex5 = BRepBuilderAPI_MakeVertex(gp_Pnt(0,0,1)).Vertex();
    TopoDS_Vertex aVertex6 = BRepBuilderAPI_MakeVertex(gp_Pnt(0,1,1)).Vertex();
    TopoDS_Vertex aVertex7 = BRepBuilderAPI_MakeVertex(gp_Pnt(-1,1,1)).Vertex();
    TopoDS_Vertex aVertex8 = BRepBuilderAPI_MakeVertex(gp_Pnt(-1,0,1)).Vertex();

    BRepPolyAPI_MakeHexahedron aBuilder(aVertex1, aVertex2, aVertex3, aVertex4,
                                        aVertex5, aVertex6, aVertex7, aVertex8);
    TopoDS_Shape aShape = aBuilder.Shape();

    BRepGProp_Vinert myProperties;
    BRepGProp::VolumeProperties(aShape, myProperties);

    cout << myProperties.Mass() << endl;
    cout << myProperties.CentreOfMass().X() << endl;
    cout << myProperties.CentreOfMass().Y() << endl;
    cout << myProperties.CentreOfMass().Z() << endl;
*/







    return 0;
}

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
#include <MeshBuilder_MakeGroup.hxx>
#include <MeshBuilder_MakeLine.hxx>
#include <MeshBuilder_MakeMesh.hxx>
#include <MeshBuilder_MakeVertex.hxx>
#include <MeshDS_Tool.hxx>
#include <MeshExp.hxx>



// ============================================================================
/*!
 *  \brief Test_Mesh
*/
// ============================================================================
int main(int argc, char** argv)
{

    MeshDS_Vertex aVertex1 = MeshBuilder_MakeVertex(1).Vertex();
    MeshDS_Vertex aVertex2 = MeshBuilder_MakeVertex(2).Vertex();
    MeshDS_Vertex aVertex3 = MeshBuilder_MakeVertex(3).Vertex();
    MeshDS_Cell aCell1 = MeshBuilder_MakeLine(aVertex1, aVertex2).Cell();
    MeshDS_Cell aCell2 = MeshBuilder_MakeLine(aVertex2, aVertex3).Cell();


    MeshBuilder_MakeMesh aBuilder;
    aBuilder.AddCell(aCell1);
    aBuilder.AddCell(aCell2);
    MeshDS_Mesh aMesh = aBuilder.Mesh();


    cout << aBuilder.NbCells() << endl;
    cout << aBuilder.NbGroups() << endl;
    cout << aBuilder.NbVertices() << endl;

    cout << MeshDS_Tool::IsPoint1d(aVertex1) << endl;




    return 0;
}

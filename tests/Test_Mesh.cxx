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
#include <MeshBuilder_MakeLinearLine.hxx>
#include <MeshBuilder_MakeVertex.hxx>


// ============================================================================
/*!
 *  \brief Test_Mesh
*/
// ============================================================================
int main(int argc, char** argv)
{

    MeshDS_Vertex aVertex1 = MeshBuilder_MakeVertex(gp_Pnt1d(0.)).Vertex();
    MeshDS_Vertex aVertex2 = MeshBuilder_MakeVertex(gp_Pnt1d(1.)).Vertex();
    MeshDS_Cell aCell = MeshBuilder_MakeLinearLine(aVertex1, aVertex2).Cell();





    //cout << "Test_Mesh" << endl;
    return 0;
}

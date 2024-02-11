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
#include <MeshBuilder_MakeMesh1d.hxx>


// ============================================================================
/*!
 *  \brief Test_MeshBuilder
*/
// ============================================================================
int main(int argc, char** argv)
{

    MeshBuilder_MakeMesh1d aBuilder;
    Standard_Integer N1 = aBuilder.AddNode(gp_Pnt1d(0.));
    Standard_Integer N2 = aBuilder.AddNode(gp_Pnt1d(1.));
    Standard_Integer N3 = aBuilder.AddNode(gp_Pnt1d(2.));
    Standard_Integer C1 = aBuilder.AddLinearLine(N1, N2);
    Standard_Integer C2 = aBuilder.AddLinearLine(N2, N3);


    cout << N1 << " " << N2 << " " << N3 << endl;
    cout << C1 << " " << C2 << endl;

    MeshDS_Mesh aMesh = aBuilder.Mesh();


    return 0;
}

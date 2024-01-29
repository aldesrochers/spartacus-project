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
#include <MeshDS_Builder.hxx>




// ============================================================================
/*!
 *  \brief Test_MeshDS
*/
// ============================================================================
int main(int argc, char** argv)
{
    MeshDS_Builder aBuilder;

    MeshDS_Mesh aMesh;
    aBuilder.MakeMesh(aMesh);
    //aBuilder.ResizeCells(aMesh, 1);
    aBuilder.ResizeNodes(aMesh, 2);

    MeshDS_Node aNode1, aNode2;
    aBuilder.MakeNode(aNode1, gp_Pnt1d(0.));
    aBuilder.MakeNode(aNode2, gp_Pnt1d(1.));
    aBuilder.SetNode(aMesh, 1, aNode1);
    aBuilder.SetNode(aMesh, 2, aNode2);

    MeshDS_Cell aCell;
    aBuilder.MakeCell(aCell, new Mesh1d_LinearLine2N(mp_LinearLine2N(1, 2)));




    cout << "DONE" << endl;
    return 0;
}

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

    MeshDS_Node N1, N2, N3;
    aBuilder.MakeNode1d(N1, 0.);
    aBuilder.MakeNode1d(N2, 1.);
    aBuilder.MakeNode1d(N3, 2.);

    MeshDS_Cell C1, C2;
    aBuilder.MakeLinearLine2N(C1, N1, N2);
    aBuilder.MakeLinearLine2N(C2, N2, N3);

    MeshDS_Grid G;
    aBuilder.MakeUnstructuredGrid(G);


    return 0;
}

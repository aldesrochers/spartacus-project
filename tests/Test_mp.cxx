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
#include <mp_TriangularFace3N.hxx>
#include <mp_Edge3N1d.hxx>


// ============================================================================
/*!
 *  \brief Test_Kernel
*/
// ============================================================================
int main(int argc, char** argv)
{

    mp_Node aNode1(0., 0., 0.);
    mp_Node aNode2(1., 0., 0.);
    mp_Node aNode3(1., 1., 0.);
    mp_TriangularFace3N aFace(aNode1, aNode2, aNode3);

    cout << aFace.Normal().X() << " " << aFace.Normal().Y() << " " << aFace.Normal().Z() << endl;

    mp_Node1d N1(0.);
    mp_Node1d N2(10.);
    mp_Edge3N1d E(N1, N2);
    cout << E.Node3().X() << endl;



}

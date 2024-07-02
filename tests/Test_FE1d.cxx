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
#include <FEC1d_MakeDOF.hxx>
#include <FEC1d_MakeNode.hxx>


// ============================================================================
/*!
 *  \brief Test_FE1d
*/
// ============================================================================
int main(int argc, char** argv)
{

    Handle(FE1d_DOF) aDX1 = FEC1d_MakeDOF(FEAbs_DOF1d_DX).DOF();
    FEC1d_MakeNode aBuilder(gp_Pnt1d(1.));
    aBuilder.AddDOF(aDX1);

    Handle(FE1d_Node) aNode = aBuilder.Node();

    cout << aNode->X() << endl;



}

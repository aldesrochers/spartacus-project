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
#include <MeshBuilder_MakeNode.hxx>
#include <MeshBuilder_MakeLinearLine.hxx>


// ============================================================================
/*!
 *  \brief Test_MeshBuilder
*/
// ============================================================================
int main(int argc, char** argv)
{

    MeshDS_Node aNode1 = MeshBuilder_MakeNode(gp_Pnt1d(0.)).Node();
    MeshDS_Node aNode2 = MeshBuilder_MakeNode(gp_Pnt1d(1.)).Node();
    MeshDS_Node aNode3 = MeshBuilder_MakeNode(gp_Pnt1d(2.)).Node();
    MeshDS_Cell aCell1 = MeshBuilder_MakeLinearLine(aNode1, aNode2).Cell();
    MeshDS_Cell aCell2 = MeshBuilder_MakeLinearLine(aNode2, aNode3).Cell();




    return 0;
}

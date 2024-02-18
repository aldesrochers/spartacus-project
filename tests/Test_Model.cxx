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
#include <Model_Domain.hxx>
#include <Model_Mesh.hxx>


// ============================================================================
/*!
 *  \brief Test_Kernel
*/
// ============================================================================
int main(int argc, char** argv)
{

    Handle(Model_Mesh) aMesh = new Model_Mesh(3, 2);

    Handle(Model_Node) aNode1 = new Model_Node(0.);
    Handle(Model_Node) aNode2 = new Model_Node(1.);
    Handle(Model_Node) aNode3 = new Model_Node(2.);
    aMesh->SetNode(1, aNode1);
    aMesh->SetNode(2, aNode2);
    aMesh->SetNode(3, aNode3);

    Handle(Model_Cell) aCell1 = new Model_Cell(ModelAbs_CELL_LinearLine, 2);
    aCell1->SetNode(1, 1);
    aCell1->SetNode(2, 2);

    Handle(Model_Cell) aCell2 = new Model_Cell(ModelAbs_CELL_LinearLine, 2);
    aCell2->SetNode(1, 2);
    aCell2->SetNode(2, 3);

    aMesh->SetCell(1, aCell1);
    aMesh->SetCell(2, aCell2);


    cout << aMesh->NbCells() << endl;
    cout << aMesh->NbNodes() << endl;

}

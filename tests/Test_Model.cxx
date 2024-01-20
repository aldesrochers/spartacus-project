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
#include <Mesh1d_Grid.hxx>
#include <Mesh1d_LinearLine2N.hxx>

// ============================================================================
/*!
 *  \brief Test_Kernel
*/
// ============================================================================
int main(int argc, char** argv)
{

    Handle(Mesh1d_Grid) aGrid = new Mesh1d_Grid();
    aGrid->ResizeNodes(2);
    aGrid->ResizeCells(1);

    aGrid->SetNode(1, new Mesh1d_Node(0.));
    aGrid->SetNode(2, new Mesh1d_Node(1.));
    aGrid->SetCell(1, new Mesh1d_LinearLine2N(1, 2));


    Handle(Mesh1d_Cell) aCell = aGrid->Cell(1);
    cout << aCell->Type() << endl;


}

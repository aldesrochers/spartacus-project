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
#include <Triangle.hxx>
#include <Triangle_Parameters.hxx>


// ============================================================================
/*!
 *  \brief Test_Mesh
*/
// ============================================================================
int main(int argc, char** argv)
{

    Handle(Triangle_Model) anInput = new Triangle_Model();
    anInput->ResizeNodes(4);
    anInput->ResizeSegments(4);
    anInput->SetNode(1, new Triangle_Node(gp_Pnt2d(0.,0.)));
    anInput->SetNode(2, new Triangle_Node(gp_Pnt2d(10.,0.)));
    anInput->SetNode(3, new Triangle_Node(gp_Pnt2d(10.,5.)));
    anInput->SetNode(4, new Triangle_Node(gp_Pnt2d(2.,3.)));
    anInput->SetSegment(1, new Triangle_Segment(1, 2));
    anInput->SetSegment(2, new Triangle_Segment(2, 3));
    anInput->SetSegment(3, new Triangle_Segment(3, 4));
    anInput->SetSegment(4, new Triangle_Segment(4, 1));




    Triangle_Parameters aParameters;
    cout << Triangle::Switches(aParameters).ToCString() << endl;

    TCollection_AsciiString aString("fslfas");
    cout << aString << endl;


    cout << "Test_Mesh" << endl;
    return 0;
}

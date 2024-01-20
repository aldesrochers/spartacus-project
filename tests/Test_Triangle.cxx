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

// OpenCascade
#include <TColgp_Array1OfPnt2d.hxx>

// Spartacus
#include <Triangle_MakeTriangulation.hxx>


// ============================================================================
/*!
 *  \brief Test_Triangle
*/
// ============================================================================
int main(int argc, char** argv)
{

    TColgp_Array1OfPnt2d anArray(1,3);
    anArray.SetValue(1, gp_Pnt2d(0,0));
    anArray.SetValue(2, gp_Pnt2d(10,1));
    anArray.SetValue(3, gp_Pnt2d(7,8));

    Triangle_MakeTriangulation aBuilder(anArray, 0.5);
    Handle(Poly_Triangulation) aTriangulation = aBuilder.Triangulation();

    cout << aTriangulation->NbNodes() << endl;
    cout << aTriangulation->NbTriangles() << endl;

    return 0;
}

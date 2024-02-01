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
#include <BRepCell_MakeLinearLine.hxx>

// OpenCascade
#include <BRep_Tool.hxx>


// ============================================================================
/*!
 *  \brief Test_BRepCell
*/
// ============================================================================
int main(int argc, char** argv)
{

    BRepCell_MakeLinearLine aBuilder(gp_Pnt(0,0,0), gp_Pnt(3,0,0));

    TopoDS_Edge anEdge = aBuilder.Edge(1);

    cout << anEdge.NbChildren() << endl;

    Standard_Real U1, U2;
    Handle(Geom_Curve) aCurve = BRep_Tool::Curve(anEdge, U1, U2);

    cout << U1 << " " << U2 << endl;


}

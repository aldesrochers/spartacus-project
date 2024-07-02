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
#include <DOF_Translation.hxx>
#include <ModelBuilder_MakeDOF.hxx>
#include <ModelBuilder_MakeNode1d.hxx>
#include <ModelBuilder_MakeTruss1d.hxx>

// ============================================================================
/*!
 *  \brief Test_Model
*/
// ============================================================================
int main(int argc, char** argv)
{

    Handle(DOF_Translation) DX1 = new DOF_Translation(DOFAbs_AXIS_X);
    Handle(DOF_Translation) DX2 = new DOF_Translation(DOFAbs_AXIS_X);

    ModelDS_DOF aDX1 = ModelBuilder_MakeDOF(DX1).DOF();
    ModelDS_DOF aDX2 = ModelBuilder_MakeDOF(DX2).DOF();

    ModelDS_Node aNode1 = ModelBuilder_MakeNode1d(gp_Pnt1d(0.), aDX1).Node();
    ModelDS_Node aNode2 = ModelBuilder_MakeNode1d(gp_Pnt1d(1.), aDX2).Node();

    material_Elastic aMaterial(2E11, 1E-4);
    ModelDS_Element anElement = ModelBuilder_MakeTruss1d(aNode1, aNode2, aMaterial, 1E-3);

    //cout << anElement.ObjectType() << endl;


    cout << "Test_MakeModel" << endl;
}

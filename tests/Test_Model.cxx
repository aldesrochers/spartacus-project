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
#include <ModelBuilder_MakeDegreeOfFreedom.hxx>
#include <ModelBuilder_MakeNode.hxx>
#include <ModelDS_Tool.hxx>
#include <DOF_Translation.hxx>


// ============================================================================
/*!
 *  \brief Test_Model
*/
// ============================================================================
int main(int argc, char** argv)
{

    ModelDS_Node aNode1 = ModelBuilder_MakeNode(gp_Pnt(0,0,0)).Node();
    ModelDS_Node aNode2 = ModelBuilder_MakeNode(gp_Pnt(1,0,0)).Node();


    gp_Pnt aPoint = ModelDS_Tool::Point(aNode2);
    cout << aPoint.X() << endl;




}

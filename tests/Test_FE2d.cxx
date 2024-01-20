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
#include <FE2d_ElasticTruss.hxx>


// ============================================================================
/*!
 *  \brief Test_Kernel
*/
// ============================================================================
int main(int argc, char** argv)
{

    cmp_Elastic aMaterial;
    aMaterial.SetE(2E11);

    Handle(FE2d_ElasticTruss) aTruss = new FE2d_ElasticTruss(gp_Pnt2d(0,0), gp_Pnt2d(1,1), aMaterial, 1E-4);


    cout << aTruss->InitialStiffness() << endl;


}

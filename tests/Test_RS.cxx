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
#include <Cable_FindEmptyLength.hxx>
#include <UXSM_Elastic.hxx>


// ============================================================================
/*!
 *  \brief Test_UCM
*/
// ============================================================================
int main(int argc, char** argv)
{

    Cable_SequenceOfLoading aLoading;
    aLoading.Append(Cable_Loading(0., 0., 23.23, 0., 0.));
    aLoading.Append(Cable_Loading(1., 0., 23.23, 0., 0.));

    Cable_ListOfSaggingCondition aList;
    aList.Append(Cable_SaggingCondition(Cable_SC_HorizontalTension, 40000.));

    Handle(UXSM_Elastic) aSection = new UXSM_Elastic(cmp_Elastic(1.8E10, 1.2E-5), 0.001);


    Cable_FindEmptyLength aSolver(400., 0.);
    aSolver.SetLoading(aLoading);
    aSolver.SetSaggingConditions(aList);
    aSolver.SetSection(aSection);
    cout << aSolver.Perform() << endl;


    return 0;
}

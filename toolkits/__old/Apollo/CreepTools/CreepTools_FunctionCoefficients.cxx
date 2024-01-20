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
#include <CreepTools_FunctionCoefficients.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
CreepTools_FunctionCoefficients::CreepTools_FunctionCoefficients(const CreepTools_Solution& theSolution1,
                                                                 const CreepTools_Solution& theSolution2,
                                                                 const CreepTools_Solution& theSolution3,
                                                                 const CreepTools_Solution& theSolution4)
    : mySolution1(theSolution1),
      mySolution2(theSolution2),
      mySolution3(theSolution3),
      mySolution4(theSolution4)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
CreepTools_FunctionCoefficients::~CreepTools_FunctionCoefficients()
{

}

// ============================================================================
/*!
 *  \brief Derivatives()
*/
// ============================================================================
Standard_Boolean CreepTools_FunctionCoefficients::Derivatives(const math_Vector& X,
                                                              math_Matrix& D)
{
    Standard_Real C1 = X.Value(1);
    Standard_Real C2 = X.Value(2);
    Standard_Real C3 = X.Value(3);
    Standard_Real C4 = X.Value(4);

    D(1,1) = -1. * Pow(mySolution1.Stress(), C2) * Pow(mySolution1.Time(), C3 / Pow(mySolution1.Stress(), C4));
    D(1,2) = -1. * Pow(mySolution1.Stress(), C2) * Log(mySolution1.Stress()) * C1 * Pow(mySolution1.Time(), C3 / Pow(mySolution1.Stress(), C4));
    D(1,3) = -1. * Pow(mySolution1.Stress(), C2 - C4) * C1 * Pow(mySolution1.Time(), C3 / Pow(mySolution1.Stress(), C4)) * Log(mySolution1.Time());
    D(1,4) = 1. * Pow(mySolution1.Stress(), C2 - C4) * C1 * Pow(mySolution1.Time(), C3 / Pow(mySolution1.Stress(), C4)) * Log(mySolution1.Time());

    D(2,1) = -1. * Pow(mySolution2.Stress(), C2) * Pow(mySolution2.Time(), C3 / Pow(mySolution2.Stress(), C4));
    D(2,2) = -1. * Pow(mySolution2.Stress(), C2) * Log(mySolution2.Stress()) * C1 * Pow(mySolution2.Time(), C3 / Pow(mySolution2.Stress(), C4));
    D(2,3) = -1. * Pow(mySolution2.Stress(), C2 - C4) * C1 * Pow(mySolution2.Time(), C3 / Pow(mySolution2.Stress(), C4)) * Log(mySolution2.Time());
    D(2,4) = 1. * Pow(mySolution2.Stress(), C2 - C4) * C1 * Pow(mySolution2.Time(), C3 / Pow(mySolution2.Stress(), C4)) * Log(mySolution2.Time());

    D(3,1) = -1. * Pow(mySolution3.Stress(), C2) * Pow(mySolution3.Time(), C3 / Pow(mySolution3.Stress(), C4));
    D(3,2) = -1. * Pow(mySolution3.Stress(), C2) * Log(mySolution3.Stress()) * C1 * Pow(mySolution3.Time(), C3 / Pow(mySolution3.Stress(), C4));
    D(3,3) = -1. * Pow(mySolution3.Stress(), C2 - C4) * C1 * Pow(mySolution3.Time(), C3 / Pow(mySolution3.Stress(), C4)) * Log(mySolution3.Time());
    D(3,4) = 1. * Pow(mySolution3.Stress(), C2 - C4) * C1 * Pow(mySolution3.Time(), C3 / Pow(mySolution3.Stress(), C4)) * Log(mySolution3.Time());

    D(4,1) = -1. * Pow(mySolution4.Stress(), C2) * Pow(mySolution4.Time(), C3 / Pow(mySolution4.Stress(), C4));
    D(4,2) = -1. * Pow(mySolution4.Stress(), C2) * Log(mySolution4.Stress()) * C1 * Pow(mySolution4.Time(), C3 / Pow(mySolution4.Stress(), C4));
    D(4,3) = -1. * Pow(mySolution4.Stress(), C2 - C4) * C1 * Pow(mySolution4.Time(), C3 / Pow(mySolution4.Stress(), C4)) * Log(mySolution4.Time());
    D(4,4) = 1. * Pow(mySolution4.Stress(), C2 - C4) * C1 * Pow(mySolution4.Time(), C3 / Pow(mySolution4.Stress(), C4)) * Log(mySolution4.Time());

    return Standard_True;
}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
Standard_Integer CreepTools_FunctionCoefficients::NbEquations() const
{
    return 4;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer CreepTools_FunctionCoefficients::NbVariables() const
{
    return 4;
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
Standard_Boolean CreepTools_FunctionCoefficients::Value(const math_Vector& X,
                                                        math_Vector& F)
{
    Standard_Real C1 = X.Value(1);
    Standard_Real C2 = X.Value(2);
    Standard_Real C3 = X.Value(3);
    Standard_Real C4 = X.Value(4);

    F(1) = mySolution1.Strain() - C1 * Pow(mySolution1.Stress(), C2) * Pow(mySolution1.Time(), C3/Pow(mySolution1.Stress(), C4));
    F(2) = mySolution2.Strain() - C1 * Pow(mySolution2.Stress(), C2) * Pow(mySolution2.Time(), C3/Pow(mySolution2.Stress(), C4));
    F(3) = mySolution3.Strain() - C1 * Pow(mySolution3.Stress(), C2) * Pow(mySolution3.Time(), C3/Pow(mySolution3.Stress(), C4));
    F(4) = mySolution4.Strain() - C1 * Pow(mySolution4.Stress(), C2) * Pow(mySolution4.Time(), C3/Pow(mySolution4.Stress(), C4));

    cout << F(1) << " " << F(2) << " " << F(3) << " " << F(4) << endl;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Values()
*/
// ============================================================================
Standard_Boolean CreepTools_FunctionCoefficients::Values(const math_Vector& X,
                                                         math_Vector& F,
                                                         math_Matrix& D)
{
    if(!Derivatives(X,D))
        return Standard_False;
    if(!Value(X,F))
        return Standard_False;
    return Standard_True;
}

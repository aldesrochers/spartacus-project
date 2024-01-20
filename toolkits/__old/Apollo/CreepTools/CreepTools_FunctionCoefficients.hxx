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


#ifndef __CreepTools_FunctionCoefficients_hxx__
#define __CreepTools_FunctionCoefficients_hxx__

// OpenCascade
#include <Standard.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_Matrix.hxx>
#include <math_Vector.hxx>

// Spartacus
#include <CreepTools_Solution.hxx>


// ============================================================================
/*!
 *  \brief CreepTools_FunctionCoefficients
 *  Class implementation of a system of creep 4 equations.
 *  Eps1 - c1*(sig1^c2)*(t1^(c3/(sig1^c4))) = 0
 *  Eps2 - c1*(sig2^c2)*(t2^(c3/(sig2^c4))) = 0
 *  Eps3 - c1*(sig3^c2)*(t3^(c3/(sig3^c4))) = 0
 *  Eps4 - c1*(sig4^c2)*(t4^(c3/(sig4^c4))) = 0
 *
 *  In this system (Eps, Sig, t) are values of a solution. We solve the system
 *  of equations for coefficients (variables) c1, c2, c3 and c4.
*/
// ============================================================================
class CreepTools_FunctionCoefficients : public math_FunctionSetWithDerivatives
{

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT CreepTools_FunctionCoefficients(const CreepTools_Solution& theSolution1,
                                                    const CreepTools_Solution& theSolution2,
                                                    const CreepTools_Solution& theSolution3,
                                                    const CreepTools_Solution& theSolution4);
    // constructors
    Standard_EXPORT ~CreepTools_FunctionCoefficients();

public:

    Standard_EXPORT Standard_Boolean        Derivatives(const math_Vector& X,
                                                        math_Matrix& D);
    Standard_EXPORT Standard_Integer        NbEquations() const;
    Standard_EXPORT Standard_Integer        NbVariables() const;
    Standard_EXPORT Standard_Boolean        Value(const math_Vector& X,
                                                  math_Vector& F);
    Standard_EXPORT Standard_Boolean        Values(const math_Vector& X,
                                                   math_Vector& F,
                                                   math_Matrix& D);


private:

    CreepTools_Solution     mySolution1;
    CreepTools_Solution     mySolution2;
    CreepTools_Solution     mySolution3;
    CreepTools_Solution     mySolution4;

};

#endif // __CreepTools_FunctionCoefficients_hxx__

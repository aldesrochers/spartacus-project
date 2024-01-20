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


// Spartacus
#include <Discrete_FunctionCurveNbSegments.hxx>

// OpenCascade
#include <Adaptor3d_Curve.hxx>
#include <math_Matrix.hxx>
#include <math_Vector.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Discrete_FunctionCurveNbSegments::Discrete_FunctionCurveNbSegments(const Adaptor3d_Curve &theCurve,
                                                                   const Standard_Integer theNbSegments)
    : myNbSegments(theNbSegments)
{
    myCurve = &theCurve;
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Discrete_FunctionCurveNbSegments::~Discrete_FunctionCurveNbSegments()
{

}

// ============================================================================
/*!
 *  \brief Derivatives()
*/
// ============================================================================
Standard_Boolean Discrete_FunctionCurveNbSegments::Derivatives(const math_Vector &X,
                                                        math_Matrix &D)
{
    for(Standard_Integer i=1; i<=NbVariables(); i++) {

        // retrieve curve parameters
        Standard_Real U1, U2, U3;
        if(i == 1)
            U1 = myCurve->FirstParameter();
        else
            U1 = X.Value(i-1);
        U2 = X.Value(i);
        if(i == NbVariables())
            U3 = myCurve->LastParameter();
        else
            U3 = X.Value(i+1);

        // get points on curve
        gp_Pnt P1, P2, P3;
        gp_Vec D1, D2, D3;
        myCurve->D1(U1, P1, D1);
        myCurve->D1(U2, P2, D2);
        myCurve->D1(U3, P3, D3);

        // compute linear distance between points
        Standard_Real L1 = P1.Distance(P2);
        Standard_Real L2 = P2.Distance(P3);

        // compute derivatives for each unknowns
        Standard_Real V = 0.;
        V += (P2.X() - P1.X())/L1 * D2.X() + (P3.X() - P2.X())/L2 * D2.X();
        V += (P2.Y() - P1.Y())/L1 * D2.Y() + (P3.Y() - P2.Y())/L2 * D2.Y();
        V += (P2.Z() - P1.Z())/L1 * D2.Z() + (P3.Z() - P2.Z())/L2 * D2.Z();
        D(i,i) = V;
        if(i != 1) {
            V = 0.;
            V += -(P2.X() - P1.X())/L1 * D1.X();
            V += -(P2.Y() - P1.Y())/L1 * D1.Y();
            V += -(P2.Z() - P1.Z())/L1 * D1.Z();
            D(i, i-1) = V;
        }
        if(i != NbVariables()) {
            V = 0.;
            V += (P3.X() - P2.X())/L2 * D3.X();
            V += (P3.Y() - P2.Y())/L2 * D3.Y();
            V += (P3.Z() - P2.Z())/L2 * D3.Z();
            D(i, i+1) = V;
        }
    }

    return Standard_True;
}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
Standard_Integer Discrete_FunctionCurveNbSegments::NbEquations() const
{
    return myNbSegments - 1;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer Discrete_FunctionCurveNbSegments::NbVariables() const
{
    return myNbSegments - 1;
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
Standard_Boolean Discrete_FunctionCurveNbSegments::Value(const math_Vector &X,
                                                  math_Vector &F)
{
    for(Standard_Integer i=1; i<=NbVariables(); i++) {

        // retrieve curve parameters
        Standard_Real U1, U2, U3;
        if(i == 1)
            U1 = myCurve->FirstParameter();
        else
            U1 = X.Value(i-1);
        U2 = X.Value(i);
        if(i == NbVariables())
            U3 = myCurve->LastParameter();
        else
            U3 = X.Value(i+1);

        // get points on curve
        gp_Pnt P1 = myCurve->Value(U1);
        gp_Pnt P2 = myCurve->Value(U2);
        gp_Pnt P3 = myCurve->Value(U3);

        // compute linear distance between points
        Standard_Real L1 = P1.Distance(P2);
        Standard_Real L2 = P2.Distance(P3);

        // compute equation value
        Standard_Real V = L1 - L2;

        F(i) = V;
    }

    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Values()
*/
// ============================================================================
Standard_Boolean Discrete_FunctionCurveNbSegments::Values(const math_Vector &X,
                                                   math_Vector &F,
                                                   math_Matrix &D)
{
    if(!Derivatives(X, D))
        return Standard_False;
    if(!Value(X,F))
        return Standard_False;
    return Standard_True;
}

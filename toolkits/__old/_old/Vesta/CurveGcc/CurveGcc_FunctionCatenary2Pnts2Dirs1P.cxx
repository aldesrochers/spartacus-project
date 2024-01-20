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
#include <CurveGcc_FunctionCatenary2Pnts2Dirs1P.hxx>
#include <CurveLib_Catenary.hxx>

// OpenCascade
#include <gp_Ax2.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
CurveGcc_FunctionCatenary2Pnts2Dirs1P::CurveGcc_FunctionCatenary2Pnts2Dirs1P(const gp_Pnt& P1,
                                                                             const gp_Pnt& P2,
                                                                             const gp_Dir& Vx,
                                                                             const gp_Dir& N,
                                                                             const Standard_Real P)
    : myN(N),
      myP(P),
      myP1(P1),
      myP2(P2),
      myVx(Vx)
{


}

// ============================================================================
/*!
 *  \brief Derivatives()
*/
// ============================================================================
Standard_Boolean CurveGcc_FunctionCatenary2Pnts2Dirs1P::Derivatives(const math_Vector &X,
                                                                    math_Matrix &D)
{
    Standard_Real U1 = X.Value(1);
    Standard_Real U2 = X.Value(2);
    Standard_Real X0 = X.Value(3);
    Standard_Real Y0 = X.Value(4);
    Standard_Real Z0 = X.Value(5);
    D.Init(0.);

    // compute position
    gp_Pnt aLocation(X0,Y0,Z0);
    gp_Ax2 aPosition(aLocation, myN, myVx);

    // point 1 derivative with respect to U1
    gp_Vec dP1dU = CurveLib_Catenary::PointDU(U1, aPosition, myP);
    D(1,1) = dP1dU.X();
    D(2,1) = dP1dU.Y();
    D(3,1) = dP1dU.Z();

    // point 2 derivative with respect to U2
    gp_Vec dP2dU = CurveLib_Catenary::PointDU(U2, aPosition, myP);
    D(4,2) = dP2dU.X();
    D(5,2) = dP2dU.Y();
    D(6,2) = dP2dU.Z();

    // derivatives with respect to X0
    gp_Vec dP1dX0 = CurveLib_Catenary::PointDX0(U1, aPosition, myP);
    gp_Vec dP2dX0 = CurveLib_Catenary::PointDX0(U2, aPosition, myP);
    D(1,3) = dP1dX0.X();
    D(2,3) = dP1dX0.Y();
    D(3,3) = dP1dX0.Z();
    D(4,3) = dP2dX0.X();
    D(5,3) = dP2dX0.Y();
    D(6,3) = dP2dX0.Z();

    // derivatives with respect to Y0
    gp_Vec dP1dY0 = CurveLib_Catenary::PointDY0(U1, aPosition, myP);
    gp_Vec dP2dY0 = CurveLib_Catenary::PointDY0(U2, aPosition, myP);
    D(1,4) = dP1dY0.X();
    D(2,4) = dP1dY0.Y();
    D(3,4) = dP1dY0.Z();
    D(4,4) = dP2dY0.X();
    D(5,4) = dP2dY0.Y();
    D(6,4) = dP2dY0.Z();

    // derivatives with respect to Z0
    gp_Vec dP1dZ0 = CurveLib_Catenary::PointDZ0(U1, aPosition, myP);
    gp_Vec dP2dZ0 = CurveLib_Catenary::PointDZ0(U2, aPosition, myP);
    D(1,5) = dP1dZ0.X();
    D(2,5) = dP1dZ0.Y();
    D(3,5) = dP1dZ0.Z();
    D(4,5) = dP2dZ0.X();
    D(5,5) = dP2dZ0.Y();
    D(6,5) = dP2dZ0.Z();

    return Standard_True;
}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
Standard_Integer CurveGcc_FunctionCatenary2Pnts2Dirs1P::NbEquations() const
{
    return 6;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer CurveGcc_FunctionCatenary2Pnts2Dirs1P::NbVariables() const
{
    return 5;
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
Standard_Boolean CurveGcc_FunctionCatenary2Pnts2Dirs1P::Value(const math_Vector &X,
                                                              math_Vector &F)
{
    Standard_Real U1 = X.Value(1);
    Standard_Real U2 = X.Value(2);
    Standard_Real X0 = X.Value(3);
    Standard_Real Y0 = X.Value(4);
    Standard_Real Z0 = X.Value(5);

    // compute position
    gp_Pnt aLocation(X0,Y0,Z0);
    gp_Ax2 aPosition(aLocation, myN, myVx);

    // compute point locations
    gp_Pnt aP1 = CurveLib_Catenary::Point(U1, aPosition, myP);
    gp_Pnt aP2 = CurveLib_Catenary::Point(U2, aPosition, myP);

    // setup functions
    F(1) = aP1.X() - myP1.X();
    F(2) = aP1.Y() - myP1.Y();
    F(3) = aP1.Z() - myP1.Z();
    F(4) = aP2.X() - myP2.X();
    F(5) = aP2.Y() - myP2.Y();
    F(6) = aP2.Z() - myP2.Z();

    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Values()
*/
// ============================================================================
Standard_Boolean CurveGcc_FunctionCatenary2Pnts2Dirs1P::Values(const math_Vector &X,
                                                               math_Vector &F,
                                                               math_Matrix &D)
{
    if(!Derivatives(X,D))
        return Standard_False;
    if(!Value(X,F))
        return Standard_False;
    return Standard_True;
}

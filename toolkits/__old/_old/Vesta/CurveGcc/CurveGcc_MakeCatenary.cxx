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
#include <CurveGcc_MakeCatenary.hxx>

// OpenCascade
#include <math_FunctionSetRoot.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
CurveGcc_MakeCatenary::CurveGcc_MakeCatenary(const gp_Pnt& thePoint1,
                                             const gp_Pnt& thePoint2,
                                             const Standard_Real theParameter,
                                             const gp_Dir& theMirrorDir,
                                             const Standard_Integer theNbIterations,
                                             const Standard_Real theTolerance)
{
    gp_Dir aDirection(gp_Vec(thePoint1, thePoint2));
    gp_Dir VDir(theMirrorDir);
    gp_Dir NDir = aDirection.Crossed(VDir);
    gp_Dir UDir = NDir.Crossed(VDir);

    // initialize a solver
    math_Vector aTolerance(1,5,theTolerance);
    CurveGcc_FunctionCatenary2Pnts2Dirs1P aFunction(thePoint1, thePoint2, VDir, NDir, theParameter);
    math_FunctionSetRoot aSolver(aFunction, aTolerance, theNbIterations);

    // define initial guess (U1, U2, X0, Y0, Z0)
    math_Vector aGuess(1,5,0.);
    aGuess(1) = gp_Vec(thePoint1.XYZ()).Dot(UDir);
    aGuess(2) = gp_Vec(thePoint2.XYZ()).Dot(UDir);

    // try to resolve
    aSolver.Perform(aFunction, aGuess);

    if(aSolver.IsDone() && !aSolver.IsDivergent()) {
        math_Vector aSolution = aSolver.Root();
        Standard_Real X0 = aSolution.Value(3);
        Standard_Real Y0 = aSolution.Value(4);
        Standard_Real Z0 = aSolution.Value(5);
        gp_Pnt aLocation(X0,Y0,Z0);
        gp_Ax2 aPosition(aLocation, NDir, VDir);
        myCatenary = gp_Catenary(aPosition, theParameter);
        SetDone();
    }
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
CurveGcc_MakeCatenary::~CurveGcc_MakeCatenary()
{

}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
const gp_Catenary& CurveGcc_MakeCatenary::Value() const
{
    return myCatenary;
}


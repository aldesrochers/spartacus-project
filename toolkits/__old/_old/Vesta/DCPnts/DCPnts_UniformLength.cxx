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
#include <DCPnts_FunctionUniformLength.hxx>
#include <DCPnts_UniformLength.hxx>

// OpenCascade
#include <math_FunctionSetRoot.hxx>
#include <gp_Pnt.hxx>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DCPnts_UniformLength::DCPnts_UniformLength()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DCPnts_UniformLength::DCPnts_UniformLength(const Adaptor3d_Curve& theAdaptor,
                                           const Standard_Integer theNbSegments,
                                           const Standard_Integer theNbIterations,
                                           const Standard_Real theTolerance)
{
    Standard_Real UFirst = theAdaptor.FirstParameter();
    Standard_Real ULast = theAdaptor.LastParameter();
    DCPnts_FunctionUniformLength aFunction(theAdaptor, UFirst, ULast, theNbSegments);
    Standard_Integer N = theNbSegments - 1;
    if(N <= 0)
        return;

    // initialize a tolerance vector
    math_Vector aTolerance(1,N,theTolerance);

    // initialize a guess vector
    math_Vector aGuess(1,N,0.);
    for(Standard_Integer i=1; i<=N; i++) {
        aGuess(i) = UFirst + (ULast-UFirst)/theNbSegments * i;
    }

    // try to resolve function
    math_FunctionSetRoot aSolver(aFunction, aTolerance, theNbIterations);
    aSolver.Perform(aFunction, aGuess);
    if(!aSolver.IsDone())
        return;
    if(!aSolver.IsSolutionReached(aFunction))
        return;
    math_Vector aSolution = aSolver.Root();

    // insert first point
    gp_Pnt FirstPoint = theAdaptor.Value(UFirst);
    myPoints.Append(FirstPoint);

    // loop over solution points
    for(Standard_Integer i=1; i<=N; i++) {
        gp_Pnt aPoint = theAdaptor.Value(aSolution.Value(i));
        myPoints.Append(aPoint);
    }

    // insert last point
    gp_Pnt LastPoint = theAdaptor.Value(ULast);
    myPoints.Append(LastPoint);

    SetDone();
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DCPnts_UniformLength::~DCPnts_UniformLength()
{

}

// ============================================================================
/*!
 *  \brief NbPoints()
*/
// ============================================================================
Standard_Integer DCPnts_UniformLength::NbPoints() const
{
    return myPoints.Size();
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
gp_Pnt DCPnts_UniformLength::Point(const Standard_Integer theIndex) const
{
    return myPoints.Value(theIndex);
}

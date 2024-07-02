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
#include <GCE2d_MakeArcOfCatenary.hxx>
#include <Geom2d_Catenary.hxx>
#include <gp_Catenary2d.hxx>
#include <ElCLib_Catenary.hxx>

// OpenCascade
#include <Geom2d_TrimmedCurve.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>


// ============================================================================
/*!
 *  \brief Constructor
 *  Construct a trimmed catenary bounded by two parameters.
*/
// ============================================================================
GCE2d_MakeArcOfCatenary::GCE2d_MakeArcOfCatenary(const gp_Catenary2d& theCatenary,
                                                 const Standard_Real theAlpha1,
                                                 const Standard_Real theAlpha2,
                                                 const Standard_Boolean theSense)
{
    Handle(Geom2d_Catenary) aCurve = new Geom2d_Catenary(theCatenary);
    myArcOfCurve = new Geom2d_TrimmedCurve(aCurve, theAlpha1, theAlpha2, theSense);
    myError = gce_EXTRA_Done;
}

// ============================================================================
/*!
 *  \brief Constructor
 *  Construct a trimmed catenary bounded by a parameter and a point.
*/
// ============================================================================
GCE2d_MakeArcOfCatenary::GCE2d_MakeArcOfCatenary(const gp_Catenary2d& theCatenary,
                                                 const gp_Pnt2d& thePoint,
                                                 const Standard_Real theAlpha,
                                                 const Standard_Boolean theSense)
{
    Standard_Real anAlpha1 = ElCLib_Catenary::Parameter(theCatenary, thePoint);
    Handle(Geom2d_Catenary) aCurve = new Geom2d_Catenary(theCatenary);
    myArcOfCurve = new Geom2d_TrimmedCurve(aCurve, anAlpha1, theAlpha, theSense);
    myError = gce_EXTRA_Done;
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
GCE2d_MakeArcOfCatenary::GCE2d_MakeArcOfCatenary(const gp_Catenary2d& theCatenary,
                                                 const gp_Pnt2d& thePoint1,
                                                 const gp_Pnt2d& thePoint2,
                                                 const Standard_Boolean theSense)
{
    Standard_Real anAlpha1 = ElCLib_Catenary::Parameter(theCatenary, thePoint1);
    Standard_Real anAlpha2 = ElCLib_Catenary::Parameter(theCatenary, thePoint2);
    Handle(Geom2d_Catenary) aCurve = new Geom2d_Catenary(theCatenary);
    myArcOfCurve = new Geom2d_TrimmedCurve(aCurve, anAlpha1, anAlpha2, theSense);
    myError = gce_EXTRA_Done;
}

// ============================================================================
/*!
 *  \brief operator()
*/
// ============================================================================
GCE2d_MakeArcOfCatenary::operator const Handle(Geom2d_TrimmedCurve) &() const
{
    return Value();
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
const Handle(Geom2d_TrimmedCurve)& GCE2d_MakeArcOfCatenary::Value() const
{
    StdFail_NotDone_Raise_if(myError != gce_EXTRA_Done,
                             "GCE2d_MakeArcOfCatenary::Value() -> Not done.");
    return myArcOfCurve;
}



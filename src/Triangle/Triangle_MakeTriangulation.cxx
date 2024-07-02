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
#include <string>

// Spartacus
#include <Triangle_MakeTriangulation.hxx>

// Triangle
#include <triangle.h>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_MakeTriangulation::Triangle_MakeTriangulation(const TColgp_Array1OfPnt2d& thePoints,
                                                       const Standard_Real theMaxArea)
{
    Initialize(thePoints, theMaxArea);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_MakeTriangulation::~Triangle_MakeTriangulation()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void Triangle_MakeTriangulation::Initialize(const TColgp_Array1OfPnt2d &thePoints,
                                            const Standard_Real theMaxArea)
{
    struct triangulateio in, out, vorout;

    // Define inputs points
    in.numberofpoints = thePoints.Size();
    in.numberofpointattributes = 0;
    in.pointlist = (REAL *) malloc(in.numberofpoints * 2 * sizeof(REAL));
    in.pointmarkerlist = (int *) malloc(in.numberofpoints * sizeof(int));
    in.pointattributelist = (REAL *) malloc(in.numberofpoints *
                                            in.numberofpointattributes *
                                            sizeof(REAL));

    TColgp_Array1OfPnt2d::Iterator anIterator(thePoints);
    Standard_Integer anIndex = 0;
    for(; anIterator.More(); anIterator.Next()) {
        gp_Pnt2d aPnt = anIterator.Value();
        in.pointlist[anIndex] = aPnt.X();
        anIndex += 1;
        in.pointlist[anIndex] = aPnt.Y();
        anIndex += 1;
    }
    anIndex = 0;
    for(; anIterator.More(); anIterator.Next()) {
        in.pointmarkerlist[anIndex] = 0;
    }

    // Define segments, holes, regions
    in.numberofsegments = 0;
    in.numberofholes = 0;
    in.numberofregions = 0;

    // Initialize results structures
    out.pointlist = (REAL *) NULL;            /* Not needed if -N switch used. */
    /* Not needed if -N switch used or number of point attributes is zero: */
    out.pointattributelist = (REAL *) NULL;
    out.pointmarkerlist = (int *) NULL; /* Not needed if -N or -B switch used. */
    out.trianglelist = (int *) NULL;          /* Not needed if -E switch used. */
    /* Not needed if -E switch used or number of triangle attributes is zero: */
    out.triangleattributelist = (REAL *) NULL;
    out.neighborlist = (int *) NULL;         /* Needed only if -n switch used. */
    /* Needed only if segments are output (-p or -c) and -P not used: */
    out.segmentlist = (int *) NULL;
    /* Needed only if segments are output (-p or -c) and -P and -B not used: */
    out.segmentmarkerlist = (int *) NULL;
    out.edgelist = (int *) NULL;             /* Needed only if -e switch used. */
    out.edgemarkerlist = (int *) NULL;   /* Needed if -e used and -B not used. */

    vorout.pointlist = (REAL *) NULL;        /* Needed only if -v switch used. */
    /* Needed only if -v switch used and number of attributes is not zero: */
    vorout.pointattributelist = (REAL *) NULL;
    vorout.edgelist = (int *) NULL;          /* Needed only if -v switch used. */
    vorout.normlist = (REAL *) NULL;         /* Needed only if -v switch used. */

    // Perform the operation using the 'triangle' library
    string args = "QpczAevna";
    args += std::to_string(theMaxArea);
    triangulate(args.c_str(), &in, &out, &vorout);

    // Populate the triangulation data structure
    TColgp_Array1OfPnt anArrayOfPnts(0, out.numberofpoints-1);
    Poly_Array1OfTriangle anArrayOfTriangles(0, out.numberoftriangles-1);
    for(Standard_Integer i=0; i<out.numberofpoints; i++) {
        Standard_Real X = out.pointlist[2*i+0];
        Standard_Real Y = out.pointlist[2*i+1];
        gp_Pnt aPnt(X, Y, 0.);
        anArrayOfPnts.SetValue(i, aPnt);
    }
    for(Standard_Integer i=0; i<out.numberoftriangles; i++) {
        Standard_Integer P1 = out.trianglelist[3*i+0];
        Standard_Integer P2 = out.trianglelist[3*i+1];
        Standard_Integer P3 = out.trianglelist[3*i+2];
        Poly_Triangle aTriangle(P1, P2, P3);
        anArrayOfTriangles.SetValue(i, aTriangle);
    }
    myTriangulation = new Poly_Triangulation(anArrayOfPnts, anArrayOfTriangles);

    SetDone();
}

// ============================================================================
/*!
 *  \brief Triangulation()
*/
// ============================================================================
const Handle(Poly_Triangulation)& Triangle_MakeTriangulation::Triangulation() const
{
    return myTriangulation;
}


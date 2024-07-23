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
#include <Triangle_Mesher.hxx>

// OpenCascade
#include <StdFail_NotDone.hxx>

// Triangle
#include <triangle.h>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Mesher::Triangle_Mesher(const TColgp_SequenceOfPnt2d& thePoints)
{
    Initialize(thePoints);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_Mesher::~Triangle_Mesher()
{

}

// ============================================================================
/*!
 *  \brief Check()
*/
// ============================================================================
void Triangle_Mesher::Check()const
{
    if (!myIsDone)
        throw StdFail_NotDone("Triangle_Mesher::Check() -> Mesher not done");
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void Triangle_Mesher::Initialize(const TColgp_SequenceOfPnt2d &thePoints)
{
    triangulateio in, out, vorout;
    TCollection_AsciiString mySwitches("c");

    // initialize input data structure
    in.numberofpoints = thePoints.Size();
    in.pointlist = (REAL *) malloc(in.numberofpoints * 2 * sizeof(REAL));
    in.pointattributelist = NULL;
    in.pointmarkerlist = NULL;

    // populate input data structure
    for(Standard_Integer i=thePoints.Lower(); i<=thePoints.Upper(); i++) {
        in.pointlist[(i-1)*2+0] = thePoints.Value(i).X();
        in.pointlist[(i-1)*2+1] = thePoints.Value(i).Y();
    }

    // initialize ouput data structure
    //out.neighborlist = (int *) NULL;

    // triangulate
    triangulate((char*) mySwitches.ToCString(), &in, &out, &vorout);

    // initialize model
    myModel = new Triangle_Model();
    myModel->ResizeNodes(out.numberofpoints);
    for(Standard_Integer i=0; i<=out.numberofpoints; i++) {
        Standard_Real X = out.pointlist[(i-1)*2+0];
        Standard_Real Y = out.pointlist[(i-1)*2+1];
        cout << X << " " << Y << endl;
        //myModel->SetNode(1, gp_Pnt2d(X, Y));
    }

    cout << out.numberofcorners << endl;

    cout << out.numberofedges << endl;
    cout << out.numberofholes << endl;
    cout << out.numberofpointattributes << endl;
    cout << out.numberofpoints << endl;
    cout << out.numberofregions << endl;
    cout << out.numberofsegments << endl;
    cout << out.numberoftriangleattributes << endl;
    cout << out.numberoftriangles << endl;


}

// ============================================================================
/*!
 *  \brief IsDone()
*/
// ============================================================================
Standard_Boolean Triangle_Mesher::IsDone() const
{
    return myIsDone;
}

// ============================================================================
/*!
 *  \brief SetDone()
*/
// ============================================================================
void Triangle_Mesher::SetDone()
{
    myIsDone = Standard_True;
}

// ============================================================================
/*!
 *  \brief SetNotDone()
*/
// ============================================================================
void Triangle_Mesher::SetNotDone()
{
    myIsDone = Standard_False;
}




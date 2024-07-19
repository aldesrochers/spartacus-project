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
#include <Triangle_FaceMesher.hxx>

// OpenCascade
#include <ProjLib.hxx>
#include <BRep_Tool.hxx>
#include <BOPTools_AlgoTools3D.hxx>
#include <TopoDS.hxx>
#include <TopExp.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <Geom_Plane.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>
#include <TCollection_ExtendedString.hxx>
#include <Standard_ExtString.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_CString.hxx>

// Triangle
#include <triangle.h>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_FaceMesher::Triangle_FaceMesher()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_FaceMesher::~Triangle_FaceMesher()
{

}

// ============================================================================
/*!
 *  \brief Perform()
*/
// ============================================================================
void Triangle_FaceMesher::Perform()
{
    if(myFace.IsNull())
        return;

    TCollection_AsciiString mySwitches;
    mySwitches += "N"; // Do not generate a node file
    mySwitches += "B"; // Do not generate boundary markers
    mySwitches += "E"; // Do not generate an element file
    mySwitches += "a0.005";
    mySwitches += "o2";

    // initialize input data
    triangulateio inputData;

    // process vertices
    TopTools_IndexedMapOfShape myVertices;
    TopExp::MapShapes(myFace, TopAbs_VERTEX, myVertices);
    inputData.numberofpoints = myVertices.Size();
    inputData.numberofpointattributes = 0;
    inputData.pointmarkerlist = NULL;
    inputData.pointattributelist = NULL;
    inputData.pointlist = (REAL *) malloc(inputData.numberofpoints * 2 * sizeof(REAL));
    for(Standard_Integer i=1; i<=myVertices.Size(); i++) {
        const TopoDS_Vertex& aVertex = TopoDS::Vertex(myVertices.FindKey(i));
        const gp_Pnt2d& aPoint2d = BRep_Tool::Parameters(aVertex, myFace);
        inputData.pointlist[(i-1)*2+0] = aPoint2d.X();
        inputData.pointlist[(i-1)*2+1] = aPoint2d.Y();
    }

    inputData.numberofedges = 3;
    inputData.edgelist = (int *) malloc(inputData.numberofedges * 2 * sizeof(int));
    inputData.edgelist[0] = 0;
    inputData.edgelist[1] = 1;
    inputData.edgelist[2] = 1;
    inputData.edgelist[3] = 2;
    inputData.edgelist[4] = 2;
    inputData.edgelist[5] = 0;


    // process edges
    triangulateio outputData;
    triangulateio outputVeronoi;


    char* aText = (char*) mySwitches.ToCString();
    triangulate(aText, &inputData, &outputData, &outputVeronoi);

    cout << inputData.numberofedges << " " << outputData.numberofedges << endl;
    cout << outputData.numberofregions << endl;


}

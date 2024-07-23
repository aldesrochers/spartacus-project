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
#include <Triangle_MakeMesh.hxx>

// OpenCascade
#include <Standard_CString.hxx>

// Triangle
#ifndef __triangle_h__
#include <triangle.h>
#define __triangle_h__
#endif


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_MakeMesh::Triangle_MakeMesh()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_MakeMesh::~Triangle_MakeMesh()
{

}

// ============================================================================
/*!
 *  \brief IsConformingDelaunay()
*/
// ============================================================================
Standard_Boolean Triangle_MakeMesh::IsConformingDelaunay() const
{
    return myIsConformingDelaunay;
}

// ============================================================================
/*!
 *  \brief IsQualityMesh()
*/
// ============================================================================
Standard_Boolean Triangle_MakeMesh::IsQualityMesh() const
{
    return myIsQualityMesh;
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const Handle(Triangle_Mesh)& Triangle_MakeMesh::Mesh() const
{
    return myMesh;
}

// ============================================================================
/*!
 *  \brief Model()
*/
// ============================================================================
const Handle(Triangle_Model)& Triangle_MakeMesh::Model() const
{
    return myModel;
}

// ============================================================================
/*!
 *  \brief Perform()
*/
// ============================================================================
void Triangle_MakeMesh::Perform()
{

    triangulateio in, out, vorout;

    // process nodes
    in.numberofpoints = myModel->NbNodes();
    in.pointlist = (REAL *) malloc(in.numberofpoints * 2 * sizeof(REAL));
    for(Standard_Integer i=1; i<=myModel->NbNodes(); i++) {
        Handle(Triangle_Node) aNode = myModel->Node(i);
        in.pointlist[(i-1)*2+0] = aNode->Point().X();
        in.pointlist[(i-1)*2+1] = aNode->Point().Y();
    }

    // process segments
    in.numberofsegments = myModel->NbSegments();
    in.segmentlist = (int *) malloc(in.numberofsegments * 2 * sizeof(int));
    for(Standard_Integer i=1; i<=myModel->NbSegments(); i++) {
        Handle(Triangle_Segment) aSegment = myModel->Segment(i);
        in.segmentlist[(i-1)*2+0] = aSegment->Node1();
        in.segmentlist[(i-1)*2+1] = aSegment->Node2();
    }

    in.numberofpointattributes = 0;
    in.pointattributelist = NULL;
    in.pointmarkerlist = NULL;
    in.numberofregions = 0;
    in.regionlist = NULL;
    in.numberofholes = 0;
    in.holelist = NULL;

    vorout.pointlist = (REAL *) NULL;
    vorout.pointattributelist = (REAL *) NULL;
    vorout.edgelist = (int *) NULL;
    vorout.normlist = (REAL *) NULL;

    //triangulate((char*) Switches().ToCString(), &in, &out, &vorout);
    triangulate("pBOqa0.1vV", &in, &out, &vorout);

    //cout << vorout.pointlist[2] << endl;


    free(in.pointlist);
    free(in.pointattributelist);
    free(in.pointmarkerlist);
    free(in.regionlist);
    free(in.holelist);
    free(in.segmentlist);
    free(out.pointlist);
    free(out.pointattributelist);
    free(out.pointmarkerlist);
    free(out.regionlist);
    free(out.holelist);
    free(out.segmentlist);
    //free(vorout.pointlist);
    //free(vorout.pointattributelist);
    //free(vorout.pointmarkerlist);
    //free(vorout.regionlist);
    //free(vorout.holelist);
    //free(vorout.segmentlist);

    cout << vorout.numberofcorners << endl;
    cout << vorout.numberofedges << endl;
    cout << vorout.numberofholes << endl;
    cout << vorout.numberofpointattributes << endl;
    cout << vorout.numberofpoints << endl;
    cout << vorout.numberofregions << endl;
    cout << vorout.numberofsegments << endl;
    cout << vorout.numberoftriangleattributes << endl;
    cout << vorout.numberoftriangles << endl;

    //free(mid.pointlist);
    //free(mid.pointattributelist);
    //free(mid.pointmarkerlist);
    //free(mid.trianglelist);
    //free(mid.triangleattributelist);
    //free(mid.trianglearealist);
    //free(mid.neighborlist);
    //free(mid.segmentlist);
    //free(mid.segmentmarkerlist);
    //free(mid.edgelist);
    //free(mid.edgemarkerlist);
    //free(vorout.pointlist);
    //free(vorout.pointattributelist);
    //free(vorout.regionlist);
    //free(vorout.edgelist);
    //free(vorout.normlist);
    //free(out.pointlist);
    //free(out.pointattributelist);
    //free(out.trianglelist);
    //free(out.triangleattributelist);

}


// ============================================================================
/*!
 *  \brief SetConformingDelaunay()
*/
// ============================================================================
void Triangle_MakeMesh::SetConformingDelaunay(const Standard_Boolean isConformingDelaunay)
{
    myIsConformingDelaunay = isConformingDelaunay;
}

// ============================================================================
/*!
 *  \brief SetQualityMesh()
*/
// ============================================================================
void Triangle_MakeMesh::SetQualityMesh(const Standard_Boolean isQualityMesh)
{
    myIsQualityMesh = isQualityMesh;
}

// ============================================================================
/*!
 *  \brief SetModel()
*/
// ============================================================================
void Triangle_MakeMesh::SetModel(const Handle(Triangle_Model) &theModel)
{
    myModel = theModel;
}

// ============================================================================
/*!
 *  \brief Switches()
*/
// ============================================================================
TCollection_AsciiString Triangle_MakeMesh::Switches() const
{
    TCollection_AsciiString aString("-");
    aString += "B"; // Do not generate boundary markers
    aString += "P";
    aString += "X";
    //aString += "v"; // Always generate a Veronoi Diagram
    //aString += "N";
    //aString += "E";
    if(myIsQualityMesh)
        aString += "q";
    if(myIsConformingDelaunay)
        aString += "D";
    return aString;
}

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
using namespace  std;

// Spartacus
#include <Triangle.hxx>


// ============================================================================
/*!
 *  \brief MeshIO()
*/
// ============================================================================
Handle(Triangle_MeshIO) Triangle::MeshIO(const triangulateio& aTriangleIO)
{
    Handle(Triangle_MeshIO) aMeshIO = new Triangle_MeshIO();

    // process points, points attributes and points markers
    Standard_Integer nbPoints = aTriangleIO.numberofpoints;
    Standard_Integer nbPointsAttributes = aTriangleIO.numberofpointattributes;
    Standard_Boolean hasPointsMarker = (aTriangleIO.pointmarkerlist != NULL);
    if(nbPoints >= 1)
        aMeshIO->Points().Resize(1, nbPoints, Standard_False);
    if(nbPointsAttributes >= 1)
        aMeshIO->PointsAttributes().Resize(1, nbPoints, 1, nbPointsAttributes, Standard_False);
    if(hasPointsMarker)
        aMeshIO->PointsMarker().Resize(1, nbPoints, Standard_False);

    for(Standard_Integer i=0; i<nbPoints; i++) {
        Standard_Real X = aTriangleIO.pointlist[i*2+0];
        Standard_Real Y = aTriangleIO.pointlist[i*2+1];
        aMeshIO->Points().SetValue(i+1, gp_Pnt2d(X,Y));
        for(Standard_Integer j=0; j<nbPointsAttributes; j++) {
            aMeshIO->PointsAttributes().SetValue(i+1,j+1, aTriangleIO.pointattributelist[i*nbPointsAttributes+j]);
        }
        if(hasPointsMarker) {
            aMeshIO->PointsMarker().SetValue(i+1, aTriangleIO.pointmarkerlist[i]);
        }
    }

    // process segments and segments marker
    Standard_Integer nbSegments = aTriangleIO.numberofsegments;
    Standard_Boolean hasSegmentsMarker = (aTriangleIO.segmentmarkerlist != NULL);
    if(nbSegments >= 1)
        aMeshIO->Segments().Resize(1, nbSegments, 1, 2, Standard_False);
    if(hasSegmentsMarker)
        aMeshIO->SegmentsMarker().Resize(1, nbSegments, Standard_False);

    for(Standard_Integer i=0; i<nbSegments; i++) {
        aMeshIO->Segments().SetValue(i+1,1,aTriangleIO.segmentlist[i*2+0]);
        aMeshIO->Segments().SetValue(i+1,2,aTriangleIO.segmentlist[i*2+1]);
        if(hasSegmentsMarker) {
            aMeshIO->SegmentsMarker().SetValue(i+1, aTriangleIO.segmentmarkerlist[i]);
        }
    }

    // process holes
    Standard_Integer nbHoles = aTriangleIO.numberofholes;
    if(nbHoles >= 1)
        aMeshIO->Holes().Resize(1, nbHoles, Standard_False);

    for(Standard_Integer i=0; i<nbHoles; i++) {
        Standard_Real X = aTriangleIO.holelist[i*2+0];
        Standard_Real Y = aTriangleIO.holelist[i*2+1];
        aMeshIO->Holes().SetValue(i+1, gp_Pnt2d(X,Y));
    }

    // process regions and regions attributes
    Standard_Integer nbRegions = aTriangleIO.numberofregions;



    return aMeshIO;
}

// ============================================================================
/*!
 *  \brief TriangleIO()
*/
// ============================================================================
triangulateio Triangle::TriangleIO(const Handle(Triangle_MeshIO) &theMeshIO)
{
    triangulateio aTriangleIO;

    // process points, points attributes and points markers
    Standard_Integer nbPoints = theMeshIO->Points().Size();
    Standard_Integer nbPointsAttributes = theMeshIO->PointsAttributes().NbColumns();
    Standard_Boolean hasPointsMarker = (theMeshIO->PointsMarker().Size() > 0);
    aTriangleIO.numberofpoints = nbPoints;
    aTriangleIO.numberofpointattributes = nbPointsAttributes;
    aTriangleIO.pointlist = (REAL *) malloc(nbPoints * 2 * sizeof(REAL));
    aTriangleIO.pointattributelist = (REAL *) malloc(nbPoints * nbPointsAttributes * sizeof(REAL));
    aTriangleIO.pointmarkerlist = NULL;
    if(hasPointsMarker) {
        aTriangleIO.pointmarkerlist = (int *) malloc(nbPoints * sizeof(int));
    }

    for(Standard_Integer i=1; i<=nbPoints; i++) {
        aTriangleIO.pointlist[(i-1)*2+0] = theMeshIO->Points().Value(i).X();
        aTriangleIO.pointlist[(i-1)*2+1] = theMeshIO->Points().Value(i).Y();
        for(Standard_Integer j=1; j<=nbPointsAttributes; j++) {
            aTriangleIO.pointattributelist[(i-1)*nbPointsAttributes+(j-1)] = theMeshIO->PointsAttributes().Value(i, j);
        }
        if(hasPointsMarker) {
            aTriangleIO.pointmarkerlist[(i-1)] = theMeshIO->PointsMarker().Value(i);
        }
    }

    // process segments and segments marker
    Standard_Integer nbSegments = theMeshIO->Segments().NbRows();
    Standard_Integer hasSegmentMarker = (theMeshIO->SegmentsMarker().Size() > 0);
    aTriangleIO.numberofsegments = nbSegments;
    aTriangleIO.segmentlist = (int *) malloc(nbSegments * 2 * sizeof(int));
    aTriangleIO.segmentmarkerlist = NULL;
    if(hasSegmentMarker) {
        aTriangleIO.segmentmarkerlist = (int *) malloc(nbSegments * sizeof(int));
    }

    for(Standard_Integer i=1; i<=nbSegments; i++) {
        aTriangleIO.segmentlist[(i-1)*2+0] = theMeshIO->Segments().Value(i, 1);
        aTriangleIO.segmentlist[(i-1)*2+1] = theMeshIO->Segments().Value(i, 2);
        if(hasSegmentMarker) {
            aTriangleIO.segmentmarkerlist[(i-1)] = theMeshIO->SegmentsMarker().Value(i);
        }
    }

    // process holes
    Standard_Integer nbHoles = theMeshIO->Holes().Size();
    aTriangleIO.numberofholes = nbHoles;
    aTriangleIO.holelist = (REAL *) malloc(nbHoles * 2 * sizeof(REAL));

    for(Standard_Integer i=1; i<=nbHoles; i++) {
        aTriangleIO.holelist[(i-1)*2+0] = theMeshIO->Holes().Value(i).X();
        aTriangleIO.holelist[(i-1)*2+1] = theMeshIO->Holes().Value(i).Y();
    }

    // process regions and regions attributes
    Standard_Integer nbRegions = theMeshIO->Regions().Size();
    Standard_Boolean hasRegionsAttribute = (theMeshIO->RegionsAttribute().Size() > 0);
    Standard_Boolean hasRegionsMaxArea = (theMeshIO->RegionsMaxArea().Size() > 0);
    Standard_Integer nbRegionsCols = 2 + hasRegionsAttribute + hasRegionsMaxArea;
    aTriangleIO.numberofregions = nbRegions;
    aTriangleIO.regionlist = (REAL *) malloc(nbRegions * nbRegionsCols * sizeof(REAL));
    for(Standard_Integer i=1; i<=nbRegions; i++) {
        aTriangleIO.regionlist[(i-1)*nbRegionsCols+0] = theMeshIO->Regions().Value(i).X();
        aTriangleIO.regionlist[(i-1)*nbRegionsCols+1] = theMeshIO->Regions().Value(i).Y();
        if(hasRegionsAttribute) {
            aTriangleIO.regionlist[(i-1)*nbRegionsCols+2] = theMeshIO->RegionsAttribute().Value(i);
        }
        if(hasRegionsMaxArea) {
            aTriangleIO.regionlist[(i-1)*nbRegionsCols+3] = theMeshIO->RegionsMaxArea().Value(i);
        }
    }

    // process edges and edges marker
    Standard_Integer nbEdges = theMeshIO->Edges().NbRows();
    Standard_Integer hasEdgeMarker = (theMeshIO->EdgesMarker().Size() > 0);
    aTriangleIO.numberofedges = nbEdges;
    aTriangleIO.edgelist = (int *) malloc(nbEdges * 2 * sizeof(int));
    aTriangleIO.edgemarkerlist = NULL;
    if(hasEdgeMarker) {
        aTriangleIO.edgemarkerlist = (int *) malloc(nbEdges * sizeof(int));
    }

    for(Standard_Integer i=1; i<=nbEdges; i++) {
        aTriangleIO.edgelist[(i-1)*2+0] = theMeshIO->Edges().Value(i, 1);
        aTriangleIO.edgelist[(i-1)*2+1] = theMeshIO->Edges().Value(i, 2);
        if(hasEdgeMarker) {
            aTriangleIO.edgemarkerlist[(i-1)] = theMeshIO->EdgesMarker().Value(i);
        }
    }

    // process elements, elements attributes, elements neighbors elements max area
    Standard_Integer nbElements = theMeshIO->Elements().NbRows();
    Standard_Integer nbElementAttributes = theMeshIO->ElementsAttributes().NbColumns();
    Standard_Integer nbElementNeighbors = theMeshIO->ElementsNeighbors().NbColumns();
    Standard_Integer nbElementNodes = theMeshIO->Elements().NbColumns();
    Standard_Boolean hasElementsMaxArea = (theMeshIO->ElementsMaxArea().Size() > 0);
    aTriangleIO.numberoftriangles = nbElements;
    aTriangleIO.numberoftriangleattributes = nbElementAttributes;
    aTriangleIO.trianglelist = (int *) malloc(nbElements * nbElementNodes * sizeof(int));
    aTriangleIO.triangleattributelist = (REAL *) malloc(nbElements * nbElementAttributes * sizeof(REAL));
    aTriangleIO.neighborlist = (int *) malloc(nbElements * nbElementNeighbors * sizeof(int));
    aTriangleIO.trianglearealist = NULL;
    if(hasElementsMaxArea)
        aTriangleIO.trianglearealist = (REAL *) malloc(nbElements * sizeof(REAL));

    for(Standard_Integer i=1; i<=nbElements; i++) {
        for(Standard_Integer j=1; j<=nbElementNodes; j++) {
            aTriangleIO.trianglelist[(i-1)*nbElementNodes+(j-1)] = theMeshIO->Elements().Value(i,j);
        }
        for(Standard_Integer j=1; j<nbElementAttributes; j++) {
            aTriangleIO.triangleattributelist[(i-1)*nbElementAttributes+(j-1)] = theMeshIO->ElementsAttributes().Value(i,j);
        }
        for(Standard_Integer j=1; j<nbElementNeighbors; j++) {
            aTriangleIO.neighborlist[(i-1)*nbElementNeighbors+(j-1)] = theMeshIO->ElementsNeighbors().Value(i,j);
        }
        if(hasElementsMaxArea) {
            aTriangleIO.trianglearealist[(i-1)] = theMeshIO->ElementsMaxArea().Value(i);
        }
    }

    return aTriangleIO;
}

/*
Standard_Boolean Triangle::MakeTriangleIO(const Handle(Triangle_Model) &theModel,
                                          triangulateio &theTriangleIO)
{
    //edge
    //edgemarker
    //hole
    //neighbors
    //norm
    //pointattribute
    //point
    //pointmarker
    //region
    //segment
    //segmentmarker
    //trianglearea
    //trianglemarker
    //triangle

    // edge
    theTriangleIO.numberofedges = theModel->NbEdges();
    theTriangleIO.edgelist = (int *) malloc(theModel->NbEdges()* 2 * sizeof(int));
    theTriangleIO.edgemarkerlist = (int *) malloc(theModel->NbEdges() * sizeof(int));


}
*/

/*
const TCollection_AsciiString& Triangle::Switches(const Triangle_Parameters &theParameters)
{
    TCollection_AsciiString aString;
    if(theParameters.ComputeFromPSLG())
        aString += "p";
    if(theParameters.ComputeRefinedMesh())
        aString += "r";
    if(theParameters.ComputeQualityMesh()) {
        aString += "q";
        aString += theParameters.MinimumElementAngle();
    }
    if(theParameters.FixMaximumElementArea()) {
        aString += "a";
        aString += theParameters.MaximumElementArea();
    }
    if(theParameters.AssignRegionalAttributes())
        aString += "A";
    if(theParameters.EncloseConvexHull())
        aString += "c";
    if(theParameters.ComputeConformingDelaunay())
        aString += "D";
    if(theParameters.RemoveJettisonsVertices())
        aString += "j";
    if(theParameters.ComputeElementEdges())
        aString += "e";
    if(theParameters.ComputeVeronoiDiagram())
        aString += "v";
    if(theParameters.ComputeElementNeighbors())
        aString += "n";
    if(theParameters.RemoveBoundaryMarkersInOutput())
        aString += "B";
    if(theParameters.RemovePSLGInOutput())
        aString += "P";
    if(theParameters.RemoveNodesInOutput())
        aString += "N";
    if(theParameters.RemoveElementsInOutput())
        aString += "E";
    if(theParameters.RemoveHolesInPSLG())
        aString += "O";
    if(!theParameters.UseExactArithmetic())
        aString += "X";
    if(theParameters.ComputeSecondOrderElements())
        aString += "o2";
    if(!theParameters.ComputeSteinerPoints()) {
        aString += "YY";
    } else {
        aString += "S";
        aString += theParameters.MaximumNumberOfSteinerPoints();
    }
    if(theParameters.UseIncrementalAlgorithm())
        aString += "i";
    if(theParameters.UseSweeplineAlgorithm())
        aString += "F";
    if(theParameters.UseOnlyVerticalCuts())
        aString += "l";
    if(theParameters.CheckConsistencyOfMesh())
        aString += "C";
    if(theParameters.IsQuiet())
        aString += "Q";
    if(theParameters.IsVerbose())
        aString += "V";

    return aString;
}
*/

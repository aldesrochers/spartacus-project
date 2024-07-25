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
#include <Triangle_Triangulate.hxx>

// Triangle
#include <triangle.h>


// ****************************************************************************
/*!
 *  \brief [static] ModelToIO()
*/
// ****************************************************************************
static Standard_Boolean ModelToIO(const Handle(Triangle_DataModel)& theModel,
                                  triangulateio& theIO)
{
    /*
    // check if valid model
    if(theModel.IsNull() && theModel->NbNodes() >= 3)
        return Standard_False;

    // process nodes
    Standard_Integer nbNodes = theModel->NbNodes();
    Standard_Integer nbNodeAttributes = theModel->Node(1)->NbAttributes();
    theIO.numberofpoints = nbNodes;
    theIO.numberofpointattributes = nbNodeAttributes;
    theIO.pointattributelist = (REAL *) malloc(nbNodes * nbNodeAttributes * sizeof(REAL));
    theIO.pointlist = (REAL *) malloc(nbNodes * 2 * sizeof(REAL));
    theIO.pointmarkerlist = (int *) malloc(nbNodes * sizeof(int));
    for(Standard_Integer i=1; i<=nbNodes; i++) {
        Handle(Triangle_Node) aNode = theModel->Node(i);
        theIO.pointlist[(i-1)*2+0] = aNode->Point().X();
        theIO.pointlist[(i-1)*2+1] = aNode->Point().Y();
        for(Standard_Integer j=1; j<=nbNodeAttributes; j++) {
            Standard_Real aValue = aNode->Attribute(j);
            theIO.pointattributelist[(i-1)*nbNodeAttributes + (j-1)] = aValue;
        }
        theIO.pointmarkerlist[(i-1)] = aNode->BoundaryMarker();
    }

    // process segments
    Standard_Integer nbSegments = theModel->NbSegments();
    theIO.numberofsegments = theModel->NbSegments();
    theIO.segmentlist = (int *) malloc(nbSegments * 2 * sizeof(int));
    theIO.segmentmarkerlist = (int *) malloc(nbSegments * sizeof(int));
    for(Standard_Integer i=1; i<=nbSegments; i++) {
        Handle(Triangle_Segment) aSegment = theModel->Segment(i);
        theIO.segmentlist[(i-1)*2+0] = aSegment->Node1();
        theIO.segmentlist[(i-1)*2+1] = aSegment->Node2();
        theIO.segmentmarkerlist[(i-1)] = aSegment->BoundaryMarker();
    }

    // process holes
    Standard_Integer nbHoles = theModel->NbHoles();
    theIO.numberofholes = nbHoles;
    theIO.holelist = (REAL *) malloc(nbHoles * 2 * sizeof(REAL));
    for(Standard_Integer i=1; i<=nbHoles; i++) {
        Handle(Triangle_Hole) aHole = theModel->Hole(i);
        theIO.holelist[(i-1)*2+0] = aHole->Point().X();
        theIO.holelist[(i-1)*2+1] = aHole->Point().Y();
    }

    // process regions
    Standard_Integer nbRegions = theModel->NbRegions();
    theIO.numberofregions = nbRegions;
    theIO.regionlist = (REAL *) malloc(nbRegions * 4 * sizeof(REAL));
    for(Standard_Integer i=1; i<=nbRegions; i++) {
        Handle(Triangle_Region) aRegion = theModel->Region(i);
        theIO.regionlist[(i-1)*4+0] = aRegion->Point().X();
        theIO.regionlist[(i-1)*4+1] = aRegion->Point().Y();
        theIO.regionlist[(i-1)*4+2] = aRegion->Attribute();
        theIO.regionlist[(i-1)*4+3] = aRegion->MaximumArea();
    }

    // process edges
    Standard_Integer nbEdges = theModel->NbEdges();
    if(nbEdges >= 1) {
        theIO.numberofedges = nbEdges;
        theIO.edgelist = (int *) malloc(nbEdges * 3 * sizeof(int));
        for(Standard_Integer i=1; i<=nbEdges; i++) {
            Handle(Triangle_Edge) anEdge = theModel->Edge(i);
            theIO.edgelist[(i-1)*3+0] = anEdge->Node1();
            theIO.edgelist[(i-1)*3+1] = anEdge->Node2();
            theIO.edgelist[(i-1)*3+2] = anEdge->BoundaryMarker();
        }
    }

    // process elements
    Standard_Integer nbElements = theModel->NbElements();
    if(nbElements >= 1) {
        Standard_Integer nbElementAttributes = theModel->Element(1)->NbAttributes();
        Standard_Integer nbElementNodes = theModel->Element(1)->NbNodes();
        theIO.numberoftriangles = nbElements;
        theIO.numberoftriangleattributes = nbElementAttributes;
        theIO.numberofcorners = nbElementNodes;
        theIO.trianglelist = (int *) malloc(nbElements * nbElementNodes * sizeof(int));
        theIO.triangleattributelist = (REAL *) malloc(nbElements * nbElementAttributes * sizeof(REAL));
        theIO.trianglearealist = (REAL *) malloc(nbElements * sizeof(REAL));
        theIO.neighborlist = (int *) malloc(nbElements * 3 * sizeof(int));
        for(Standard_Integer i=1; i<=nbElements; i++) {
            Handle(Triangle_Element) anElement = theModel->Element(i);
            for(Standard_Integer j=1; j<=nbElementNodes; j++) {
                Standard_Integer aNode = anElement->Node(j);
                theIO.trianglelist[(i-1)*nbElementNodes+(j-1)] = aNode;
            }
            for(Standard_Integer j=1; j<=nbElementAttributes; j++) {
                Standard_Real anAttribute = anElement->Attribute(j);
                theIO.triangleattributelist[(i-1)*nbElementAttributes+(j-1)] = anAttribute;
            }
            theIO.trianglearealist[(i-1)] = anElement->MaximumArea();
            for(Standard_Integer j=1; j<=3; j++) {
                Standard_Integer aNeighbor = anElement->Neighbor(j);
                theIO.neighborlist[(i-1)*3+(j-1)] = aNeighbor;
            }
        }
    }

    */
    return Standard_True;
}


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Triangulate::Triangle_Triangulate()
    : myError(Triangle_TriangulateNoError)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_Triangulate::~Triangle_Triangulate()
{

}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
Triangle_TriangulateError Triangle_Triangulate::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief InputModel()
*/
// ============================================================================
const Handle(Triangle_DataModel)& Triangle_Triangulate::InputModel() const
{
    return myInputModel;
}

// ============================================================================
/*!
 *  \brief OutputModel()
*/
// ============================================================================
const Handle(Triangle_DataModel)& Triangle_Triangulate::OutputModel() const
{
    return myOutputModel;
}

// ============================================================================
/*!
 *  \brief Parameters()
*/
// ============================================================================
const Triangle_Parameters& Triangle_Triangulate::Parameters() const
{
    return myParameters;
}

// ============================================================================
/*!
 *  \brief Perform()
*/
// ============================================================================
void Triangle_Triangulate::Perform()
{
    triangulateio anInput, anOutput, aVeronoi;

    // load model as input
    if(!ModelToIO(myInputModel, anInput)) {
        myError = Triangle_TriangulateInvalidInputModelError;
        return;
    }

    // switches
    TCollection_AsciiString mySwitches;
    if(myParameters.ComputeFromPSLG())
        mySwitches += "p";
    if(myParameters.ComputeRefinedMesh())
        mySwitches += "r";
    if(myParameters.ComputeQualityMesh()) {
        mySwitches += "q";
        mySwitches += myParameters.MinimumElementAngle();
    }
    if(myParameters.FixMaximumElementArea()) {
        mySwitches += "a";
        mySwitches += myParameters.MaximumElementArea();
    }
    if(myParameters.AssignRegionalAttributes())
        mySwitches += "A";
    if(myParameters.EncloseConvexHull())
        mySwitches += "c";
    if(myParameters.ComputeConformingDelaunay())
        mySwitches += "D";
    if(myParameters.RemoveJettisonsVertices())
        mySwitches += "j";
    if(myParameters.ComputeElementEdges())
        mySwitches += "e";
    if(myParameters.ComputeVeronoiDiagram())
        mySwitches += "v";
    if(myParameters.ComputeElementNeighbors())
        mySwitches += "n";
    if(myParameters.RemoveBoundaryMarkersInOutput())
        mySwitches += "B";
    if(myParameters.RemovePSLGInOutput())
        mySwitches += "P";
    if(myParameters.RemoveNodesInOutput())
        mySwitches += "N";
    if(myParameters.RemoveElementsInOutput())
        mySwitches += "E";
    if(myParameters.RemoveHolesInPSLG())
        mySwitches += "O";
    if(!myParameters.UseExactArithmetic())
        mySwitches += "X";
    if(myParameters.ComputeSecondOrderElements())
        mySwitches += "o2";
    if(!myParameters.ComputeSteinerPoints()) {
        mySwitches += "YY";
    } else {
        mySwitches += "S";
        mySwitches += myParameters.MaximumNumberOfSteinerPoints();
    }
    if(myParameters.UseIncrementalAlgorithm())
        mySwitches += "i";
    if(myParameters.UseSweeplineAlgorithm())
        mySwitches += "F";
    if(myParameters.UseOnlyVerticalCuts())
        mySwitches += "l";
    if(myParameters.CheckConsistencyOfMesh())
        mySwitches += "C";
    if(myParameters.IsQuiet())
        mySwitches += "Q";
    if(myParameters.IsVerbose())
        mySwitches += "V";

    // output initialization


    cout << (char*) mySwitches.ToCString() << endl;
    triangulate((char*) mySwitches.ToCString(), &anInput, &anOutput, &aVeronoi);

}

// ============================================================================
/*!
 *  \brief SetInputModel()
*/
// ============================================================================
void Triangle_Triangulate::SetInputModel(const Handle(Triangle_DataModel) &theInputModel)
{
    myInputModel = theInputModel;
}

// ============================================================================
/*!
 *  \brief SetParameters()
*/
// ============================================================================
void Triangle_Triangulate::SetParameters(const Triangle_Parameters &theParameters)
{
    myParameters = theParameters;
}

// ============================================================================
/*!
 *  \brief Switches()
*/
// ============================================================================
const TCollection_AsciiString& Triangle_Triangulate::Switches() const
{
    TCollection_AsciiString aString;
    //aString.Cat("p");
    return aString;
}

// ============================================================================
/*!
 *  \brief VeronoiModel()
*/
// ============================================================================
const Handle(Triangle_DataModel)& Triangle_Triangulate::VeronoiModel() const
{
    return myVeronoiModel;
}




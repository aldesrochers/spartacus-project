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
 *  \brief MakeTriangleIO()
*/
// ============================================================================
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

// ============================================================================
/*!
 *  \brief Switches()
*/
// ============================================================================
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

// ============================================================================
/*!
 *  \brief Triangulate()
*/
// ============================================================================
void Triangle::Triangulate(const Triangle_Parameters &theParameters,
                           const Handle(Triangle_Model) &theInput,
                           Handle(Triangle_Model) &theOutput,
                           Handle(Triangle_Model) &theVeronoi)
{
    TCollection_AsciiString mySwitches;



}

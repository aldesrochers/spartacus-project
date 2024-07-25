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


// Spartacus
#include <Triangle_Parameters.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Parameters::Triangle_Parameters()
    : myAssignRegionalAttributes(Standard_True),
    myCheckConsistencyOfMesh(Standard_False),
    myComputeConformingDelaunay(Standard_False),
    myComputeElementEdges(Standard_True),
    myComputeElementNeighbors(Standard_True),
    myComputeFromPSLG(Standard_False),
    myComputeQualityMesh(Standard_True),
    myComputeRefinedMesh(Standard_False),
    myComputeSecondOrderElements(Standard_False),
    myComputeSteinerPoints(Standard_True),
    myComputeVeronoiDiagram(Standard_True),
    myEncloseConvexHull(Standard_True),
    myFixMaximumElementArea(Standard_False),
    myIsQuiet(Standard_True),
    myIsVerbose(Standard_False),
    myMaximumElementArea(1.),
    myMaximumNumberOfSteinerPoints(5),
    myMinimumElementAngle(20.),
    myRemoveBoundaryMarkersInOutput(Standard_False),
    myRemoveElementsInOutput(Standard_False),
    myRemoveHolesInPSLG(Standard_False),
    myRemoveJettisonsVertices(Standard_False),
    myRemoveNodesInOutput(Standard_False),
    myRemovePSLGInOutput(Standard_False),
    myUseExactArithmetic(Standard_True),
    myUseIncrementalAlgorithm(Standard_False),
    myUseOnlyVerticalCuts(Standard_False),
    myUseSweeplineAlgorithm(Standard_False)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_Parameters::~Triangle_Parameters()
{

}

// ============================================================================
/*!
 *  \brief AssignRegionalAttributes()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::AssignRegionalAttributes() const
{
    return myAssignRegionalAttributes;
}

// ============================================================================
/*!
 *  \brief AssignRegionalAttributes()
*/
// ============================================================================
void Triangle_Parameters::AssignRegionalAttributes(const Standard_Boolean theValue)
{
    myAssignRegionalAttributes = theValue;
}

// ============================================================================
/*!
 *  \brief CheckConsistencyOfMesh()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::CheckConsistencyOfMesh() const
{
    return myCheckConsistencyOfMesh;
}

// ============================================================================
/*!
 *  \brief CheckConsistencyOfMesh()
*/
// ============================================================================
void Triangle_Parameters::CheckConsistencyOfMesh(const Standard_Boolean theValue)
{
    myCheckConsistencyOfMesh = theValue;
}

// ============================================================================
/*!
 *  \brief ComputeConformingDelaunay()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::ComputeConformingDelaunay() const
{
    return myComputeConformingDelaunay;
}

// ============================================================================
/*!
 *  \brief ComputeConformingDelaunay()
*/
// ============================================================================
void Triangle_Parameters::ComputeConformingDelaunay(const Standard_Boolean theValue)
{
    myComputeConformingDelaunay = theValue;
}

// ============================================================================
/*!
 *  \brief ComputeElementEdges()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::ComputeElementEdges() const
{
    return myComputeElementEdges;
}

// ============================================================================
/*!
 *  \brief ComputeElementEdges()
*/
// ============================================================================
void Triangle_Parameters::ComputeElementEdges(const Standard_Boolean theValue)
{
    myComputeElementEdges = theValue;
}

// ============================================================================
/*!
 *  \brief ComputeElementNeighbors()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::ComputeElementNeighbors() const
{
    return myComputeElementNeighbors;
}

// ============================================================================
/*!
 *  \brief ComputeElementNeighbors()
*/
// ============================================================================
void Triangle_Parameters::ComputeElementNeighbors(const Standard_Boolean theValue)
{
    myComputeElementNeighbors = theValue;
}

// ============================================================================
/*!
 *  \brief ComputeFromPSLG()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::ComputeFromPSLG() const
{
    return myComputeFromPSLG;
}

// ============================================================================
/*!
 *  \brief ComputeFromPSLG()
*/
// ============================================================================
void Triangle_Parameters::ComputeFromPSLG(const Standard_Boolean theValue)
{
    myComputeFromPSLG = theValue;
}

// ============================================================================
/*!
 *  \brief ComputeQualityMesh()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::ComputeQualityMesh() const
{
    return myComputeQualityMesh;
}

// ============================================================================
/*!
 *  \brief ComputeQualityMesh()
*/
// ============================================================================
void Triangle_Parameters::ComputeQualityMesh(const Standard_Boolean theValue)
{
    myComputeQualityMesh = theValue;
}

// ============================================================================
/*!
 *  \brief ComputeRefinedMesh()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::ComputeRefinedMesh() const
{
    return myComputeRefinedMesh;
}

// ============================================================================
/*!
 *  \brief ComputeRefinedMesh()
*/
// ============================================================================
void Triangle_Parameters::ComputeRefinedMesh(const Standard_Boolean theValue)
{
    myComputeRefinedMesh = theValue;
}

// ============================================================================
/*!
 *  \brief ComputeSecondOrderElements()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::ComputeSecondOrderElements() const
{
    return myComputeSecondOrderElements;
}

// ============================================================================
/*!
 *  \brief ComputeSecondOrderElements()
*/
// ============================================================================
void Triangle_Parameters::ComputeSecondOrderElements(const Standard_Boolean theValue)
{
    myComputeSecondOrderElements = theValue;
}

// ============================================================================
/*!
 *  \brief ComputeSteinerPoints()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::ComputeSteinerPoints() const
{
    return myComputeSteinerPoints;
}

// ============================================================================
/*!
 *  \brief ComputeSteinerPoints()
*/
// ============================================================================
void Triangle_Parameters::ComputeSteinerPoints(const Standard_Boolean theValue)
{
    myComputeSteinerPoints = theValue;
}

// ============================================================================
/*!
 *  \brief ComputeVeronoiDiagram()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::ComputeVeronoiDiagram() const
{
    return myComputeVeronoiDiagram;
}

// ============================================================================
/*!
 *  \brief ComputeVeronoiDiagram()
*/
// ============================================================================
void Triangle_Parameters::ComputeVeronoiDiagram(const Standard_Boolean theValue)
{
    myComputeVeronoiDiagram = theValue;
}

// ============================================================================
/*!
 *  \brief EncloseConvexHull()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::EncloseConvexHull() const
{
    return myEncloseConvexHull;
}

// ============================================================================
/*!
 *  \brief EncloseConvexHull()
*/
// ============================================================================
void Triangle_Parameters::EncloseConvexHull(const Standard_Boolean theValue)
{
    myEncloseConvexHull = theValue;
}

// ============================================================================
/*!
 *  \brief FixMaximumElementArea()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::FixMaximumElementArea() const
{
    return myFixMaximumElementArea;
}

// ============================================================================
/*!
 *  \brief FixMaximumElementArea()
*/
// ============================================================================
void Triangle_Parameters::FixMaximumElementArea(const Standard_Boolean theValue)
{
    myFixMaximumElementArea = theValue;
}

// ============================================================================
/*!
 *  \brief IsQuiet()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::IsQuiet() const
{
    return myIsQuiet;
}

// ============================================================================
/*!
 *  \brief IsQuiet()
*/
// ============================================================================
void Triangle_Parameters::IsQuiet(const Standard_Boolean theValue)
{
    myIsQuiet = theValue;
}

// ============================================================================
/*!
 *  \brief IsVerbose()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::IsVerbose() const
{
    return myIsVerbose;
}

// ============================================================================
/*!
 *  \brief IsVerbose()
*/
// ============================================================================
void Triangle_Parameters::IsVerbose(const Standard_Boolean theValue)
{
    myIsVerbose = theValue;
}

// ============================================================================
/*!
 *  \brief MinimumElementAngle()
*/
// ============================================================================
Standard_Real Triangle_Parameters::MinimumElementAngle() const
{
    return myMinimumElementAngle;
}

// ============================================================================
/*!
 *  \brief MaximumElementArea()
*/
// ============================================================================
void Triangle_Parameters::MaximumElementArea(const Standard_Real theValue)
{
    myMaximumElementArea = theValue;
}

// ============================================================================
/*!
 *  \brief MaximumNumberOfSteinerPoints()
*/
// ============================================================================
Standard_Integer Triangle_Parameters::MaximumNumberOfSteinerPoints() const
{
    return myMaximumNumberOfSteinerPoints;
}

// ============================================================================
/*!
 *  \brief MaximumNumberOfSteinerPoints()
*/
// ============================================================================
void Triangle_Parameters::MaximumNumberOfSteinerPoints(const Standard_Integer theValue)
{
    myMaximumNumberOfSteinerPoints = theValue;
}

// ============================================================================
/*!
 *  \brief MinimumElementAngle()
*/
// ============================================================================
void Triangle_Parameters::MinimumElementAngle(const Standard_Real theValue)
{
    myMinimumElementAngle = theValue;
}

// ============================================================================
/*!
 *  \brief MaximumElementArea()
*/
// ============================================================================
Standard_Real Triangle_Parameters::MaximumElementArea() const
{
    return myMaximumElementArea;
}

// ============================================================================
/*!
 *  \brief RemoveBoundaryMarkersInOutput()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::RemoveBoundaryMarkersInOutput() const
{
    return myRemoveBoundaryMarkersInOutput;
}

// ============================================================================
/*!
 *  \brief RemoveBoundaryMarkersInOutput()
*/
// ============================================================================
void Triangle_Parameters::RemoveBoundaryMarkersInOutput(const Standard_Boolean theValue)
{
    myRemoveBoundaryMarkersInOutput = theValue;
}

// ============================================================================
/*!
 *  \brief RemoveElementsInOutput()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::RemoveElementsInOutput() const
{
    return myRemoveElementsInOutput;
}

// ============================================================================
/*!
 *  \brief RemoveElementsInOutput()
*/
// ============================================================================
void Triangle_Parameters::RemoveElementsInOutput(const Standard_Boolean theValue)
{
    myRemoveElementsInOutput = theValue;
}

// ============================================================================
/*!
 *  \brief RemoveHolesInPSLG()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::RemoveHolesInPSLG() const
{
    return myRemoveHolesInPSLG;
}

// ============================================================================
/*!
 *  \brief RemoveHolesInPSLG()
*/
// ============================================================================
void Triangle_Parameters::RemoveHolesInPSLG(const Standard_Boolean theValue)
{
    myRemoveHolesInPSLG = theValue;
}

// ============================================================================
/*!
 *  \brief RemoveJettisonsVertices()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::RemoveJettisonsVertices() const
{
    return myRemoveJettisonsVertices;
}

// ============================================================================
/*!
 *  \brief RemoveJettisonsVertices()
*/
// ============================================================================
void Triangle_Parameters::RemoveJettisonsVertices(const Standard_Boolean theValue)
{
    myRemoveJettisonsVertices = theValue;
}

// ============================================================================
/*!
 *  \brief RemovePSLGInOutput()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::RemovePSLGInOutput() const
{
    return myRemovePSLGInOutput;
}

// ============================================================================
/*!
 *  \brief RemovePSLGInOutput()
*/
// ============================================================================
void Triangle_Parameters::RemovePSLGInOutput(const Standard_Boolean theValue)
{
    myRemovePSLGInOutput = theValue;
}

// ============================================================================
/*!
 *  \brief RemoveNodesInOutput()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::RemoveNodesInOutput() const
{
    return myRemoveNodesInOutput;
}

// ============================================================================
/*!
 *  \brief RemoveNodesInOutput()
*/
// ============================================================================
void Triangle_Parameters::RemoveNodesInOutput(const Standard_Boolean theValue)
{
    myRemoveNodesInOutput = theValue;
}

// ============================================================================
/*!
 *  \brief UseExactArithmetic()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::UseExactArithmetic() const
{
    return myUseExactArithmetic;
}

// ============================================================================
/*!
 *  \brief UseExactArithmetic()
*/
// ============================================================================
void Triangle_Parameters::UseExactArithmetic(const Standard_Boolean theValue)
{
    myUseExactArithmetic = theValue;
}

// ============================================================================
/*!
 *  \brief UseIncrementalAlgorithm()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::UseIncrementalAlgorithm() const
{
    return myUseIncrementalAlgorithm;
}

// ============================================================================
/*!
 *  \brief UseIncrementalAlgorithm()
*/
// ============================================================================
void Triangle_Parameters::UseIncrementalAlgorithm(const Standard_Boolean theValue)
{
    myUseIncrementalAlgorithm = theValue;
    if(myUseIncrementalAlgorithm) {
        myUseOnlyVerticalCuts = Standard_False;
        myUseSweeplineAlgorithm = Standard_False;
    }
}

// ============================================================================
/*!
 *  \brief UseOnlyVerticalCuts()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::UseOnlyVerticalCuts() const
{
    return myUseOnlyVerticalCuts;
}

// ============================================================================
/*!
 *  \brief UseOnlyVerticalCuts()
*/
// ============================================================================
void Triangle_Parameters::UseOnlyVerticalCuts(const Standard_Boolean theValue)
{
    myUseOnlyVerticalCuts = theValue;
    if(myUseOnlyVerticalCuts) {
        myUseIncrementalAlgorithm = Standard_False;
        myUseSweeplineAlgorithm = Standard_False;
    }
}

// ============================================================================
/*!
 *  \brief UseSweeplineAlgorithm()
*/
// ============================================================================
Standard_Boolean Triangle_Parameters::UseSweeplineAlgorithm() const
{
    return myUseSweeplineAlgorithm;
}

// ============================================================================
/*!
 *  \brief UseSweeplineAlgorithm()
*/
// ============================================================================
void Triangle_Parameters::UseSweeplineAlgorithm(const Standard_Boolean theValue)
{
    myUseSweeplineAlgorithm = theValue;
    if(myUseSweeplineAlgorithm) {
        myUseIncrementalAlgorithm = Standard_False;
        myUseOnlyVerticalCuts = Standard_False;
    }
}

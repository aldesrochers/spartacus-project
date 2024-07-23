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


#ifndef __Triangle_Parameters_hxx__
#define __Triangle_Parameters_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TCollection_AsciiString.hxx>


// ============================================================================
/*!
 *  \brief Triangle_Parameters
*/
// ============================================================================
class Triangle_Parameters
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT Triangle_Parameters();
    // destructors
    Standard_EXPORT ~Triangle_Parameters();

public:

    Standard_EXPORT Standard_Boolean    AssignRegionalAttributes() const;
    Standard_EXPORT void                AssignRegionalAttributes(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    CheckConsistencyOfMesh() const;
    Standard_EXPORT void                CheckConsistencyOfMesh(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    ComputeConformingDelaunay() const;
    Standard_EXPORT void                ComputeConformingDelaunay(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    ComputeElementEdges() const;
    Standard_EXPORT void                ComputeElementEdges(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    ComputeElementNeighbors() const;
    Standard_EXPORT void                ComputeElementNeighbors(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    ComputeFromPSLG() const;
    Standard_EXPORT void                ComputeFromPSLG(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    ComputeQualityMesh() const;
    Standard_EXPORT void                ComputeQualityMesh(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    ComputeRefinedMesh() const;
    Standard_EXPORT void                ComputeRefinedMesh(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    ComputeSecondOrderElements() const;
    Standard_EXPORT void                ComputeSecondOrderElements(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    ComputeSteinerPoints() const;
    Standard_EXPORT void                ComputeSteinerPoints(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    ComputeVeronoiDiagram() const;
    Standard_EXPORT void                ComputeVeronoiDiagram(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    EncloseConvexHull() const;
    Standard_EXPORT void                EncloseConvexHull(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    FixMaximumElementArea() const;
    Standard_EXPORT void                FixMaximumElementArea(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    IsQuiet() const;
    Standard_EXPORT void                IsQuiet(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    IsVerbose() const;
    Standard_EXPORT void                IsVerbose(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Real       MaximumElementArea() const;
    Standard_EXPORT void                MaximumElementArea(const Standard_Real theValue);
    Standard_EXPORT Standard_Integer    MaximumNumberOfSteinerPoints() const;
    Standard_EXPORT void                MaximumNumberOfSteinerPoints(const Standard_Integer theValue);
    Standard_EXPORT Standard_Real       MinimumElementAngle() const;
    Standard_EXPORT void                MinimumElementAngle(const Standard_Real theValue);
    Standard_EXPORT Standard_Boolean    RemoveBoundaryMarkersInOutput() const;
    Standard_EXPORT void                RemoveBoundaryMarkersInOutput(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    RemoveElementsInOutput() const;
    Standard_EXPORT void                RemoveElementsInOutput(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    RemoveHolesInPSLG() const;
    Standard_EXPORT void                RemoveHolesInPSLG(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    RemoveJettisonsVertices() const;
    Standard_EXPORT void                RemoveJettisonsVertices(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    RemovePSLGInOutput() const;
    Standard_EXPORT void                RemovePSLGInOutput(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    RemoveNodesInOutput() const;
    Standard_EXPORT void                RemoveNodesInOutput(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    UseExactArithmetic() const;
    Standard_EXPORT void                UseExactArithmetic(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    UseIncrementalAlgorithm() const;
    Standard_EXPORT void                UseIncrementalAlgorithm(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    UseOnlyVerticalCuts() const;
    Standard_EXPORT void                UseOnlyVerticalCuts(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    UseSweeplineAlgorithm() const;
    Standard_EXPORT void                UseSweeplineAlgorithm(const Standard_Boolean theValue);

private:

    Standard_Boolean    myAssignRegionalAttributes;
    Standard_Boolean    myCheckConsistencyOfMesh;
    Standard_Boolean    myComputeConformingDelaunay;
    Standard_Boolean    myComputeElementEdges;
    Standard_Boolean    myComputeElementNeighbors;
    Standard_Boolean    myComputeFromPSLG;
    Standard_Boolean    myComputeQualityMesh;
    Standard_Boolean    myComputeRefinedMesh;
    Standard_Boolean    myComputeSecondOrderElements;
    Standard_Boolean    myComputeSteinerPoints;
    Standard_Boolean    myComputeVeronoiDiagram;
    Standard_Boolean    myEncloseConvexHull;
    Standard_Boolean    myFixMaximumElementArea;
    Standard_Boolean    myIsQuiet;
    Standard_Boolean    myIsVerbose;
    Standard_Real       myMaximumElementArea;
    Standard_Integer    myMaximumNumberOfSteinerPoints;
    Standard_Real       myMinimumElementAngle;
    Standard_Boolean    myRemoveBoundaryMarkersInOutput;
    Standard_Boolean    myRemoveElementsInOutput;
    Standard_Boolean    myRemoveHolesInPSLG;
    Standard_Boolean    myRemoveJettisonsVertices;
    Standard_Boolean    myRemovePSLGInOutput;
    Standard_Boolean    myRemoveNodesInOutput;
    Standard_Boolean    myUseExactArithmetic;
    Standard_Boolean    myUseIncrementalAlgorithm;
    Standard_Boolean    myUseOnlyVerticalCuts;
    Standard_Boolean    myUseSweeplineAlgorithm;

};


#endif // __Triangle_Parameters_hxx__

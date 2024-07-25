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


#ifndef __Triangle_DataModel_hxx__
#define __Triangle_DataModel_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array2OfInteger.hxx>
#include <TColStd_Array2OfReal.hxx>

// Spartacus
#include <Triangle_Array1OfSequenceOfInteger.hxx>
#include <Triangle_Array1OfSequenceOfReal.hxx>

// Forward declarations
class Triangle_DataModel;

// Handles
DEFINE_STANDARD_HANDLE(Triangle_DataModel, Standard_Transient)



// ============================================================================
/*!
 *  \brief Triangle_DataModel
*/
// ============================================================================
class Triangle_DataModel : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT Triangle_DataModel();
    // destructors
    Standard_EXPORT ~Triangle_DataModel();

public:

    Standard_EXPORT Standard_Real                       AreaConstraint(const Standard_Integer theTriangleId) const;
    Standard_EXPORT Standard_Integer                    EdgeBoundaryMarker(const Standard_Integer theEdgeId,
                                                                           const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer                    EdgePoint(const Standard_Integer theEdgeId,
                                                                  const Standard_Integer theIndex) const;
    Standard_EXPORT const gp_Pnt2d&                     Hole(const Standard_Integer theHoleId) const;
    Standard_EXPORT Standard_Integer                    Neighbor(const Standard_Integer theTriangle,
                                                                 const Standard_Integer theNeighbor) const;
    Standard_EXPORT const gp_Pnt2d&                     Point(const Standard_Integer thePointId) const;
    Standard_EXPORT Standard_Real                       PointAttribute(const Standard_Integer thePointId,
                                                                       const Standard_Integer theAttribute) const;
    Standard_EXPORT Standard_Integer                    PointBoundaryMarker(const Standard_Integer thePointId) const;
    Standard_EXPORT const gp_Pnt2d&                     Region(const Standard_Integer theRegionId) const;
    Standard_EXPORT Standard_Real                       RegionAttribute(const Standard_Integer theRegionId) const;
    Standard_EXPORT Standard_Real                       RegionMaximumArea(const Standard_Integer theRegionId) const;
    Standard_EXPORT const TColStd_SequenceOfInteger&    Triangle(const Standard_Integer theTriangleId) const;
    Standard_EXPORT const TColStd_SequenceOfReal&       TriangleAttributes(const Standard_Integer theTriangleId) const;

    Standard_EXPORT Standard_Integer    NbAreaConstraints() const;
    Standard_EXPORT Standard_Integer    NbEdges() const;
    Standard_EXPORT Standard_Integer    NbEdgeBoundaryMarkers() const;
    Standard_EXPORT Standard_Integer    NbEdgePoints() const;
    Standard_EXPORT Standard_Integer    NbHoles() const;
    Standard_EXPORT Standard_Integer    NbNeighbors() const;
    Standard_EXPORT Standard_Integer    NbPoints() const;
    Standard_EXPORT Standard_Integer    NbPointsAttributes() const;
    Standard_EXPORT Standard_Integer    NbPointsBoundaryMarkers() const;
    Standard_EXPORT Standard_Integer    NbRegions() const;
    Standard_EXPORT Standard_Integer    NbRegionsAttributes() const;
    Standard_EXPORT Standard_Integer    NbRegionsMaximumArea() const;
    Standard_EXPORT Standard_Integer    NbTriangles() const;
    Standard_EXPORT Standard_Integer    NbTrianglesAttributes() const;

    Standard_EXPORT void                ResizeAreaConstraints(const Standard_Integer theNbAreaConstraints,
                                                              const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizeEdges(const Standard_Integer theNbEdges,
                                                    const Standard_Boolean theHasBoundaryMarker,
                                                    const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizeEdgesBoundaryMarkers(const Standard_Integer theNbEdges,
                                                                   const Standard_Integer theNbBoundaryMarkers,
                                                                   const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizeHoles(const Standard_Integer theNbHoles,
                                                    const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizeNeighbors(const Standard_Integer theNbTriangles,
                                                        const Standard_Integer theNbNeighbors,
                                                        const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizePoints(const Standard_Integer theNbPoints,
                                                     const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizePointsAttributes(const Standard_Integer theNbPoints,
                                                               const Standard_Integer theNbPointsAttributes,
                                                               const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizePointsBoundaryMarkers(const Standard_Integer theNbPoints,
                                                                    const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizeRegions(const Standard_Integer theNbRegions,
                                                      const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizeRegionsAttributes(const Standard_Integer theNbRegionsAttributes,
                                                                const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizeRegionsMaximumArea(const Standard_Integer theNbRegionsMaximumArea,
                                                                 const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizeTriangles(const Standard_Integer theNbTriangles,
                                                        const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                ResizeTrianglesAttributes(const Standard_Integer theNbTrianglesAttributes,
                                                                  const Standard_Boolean toCopyOld = Standard_True);

    Standard_EXPORT void                SetAreaConstraint(const Standard_Integer theTriangleId,
                                                          const Standard_Real theMaximumArea);
    Standard_EXPORT void                SetEdgeBoundaryMarker(const Standard_Integer theEdgeId,
                                                              const Standard_Integer theIndex,
                                                              const Standard_Integer theValue);
    Standard_EXPORT void                SetEdgePoint(const Standard_Integer theEdgeId,
                                                     const Standard_Integer theIndex,
                                                     const Standard_Integer thePointId);
    Standard_EXPORT void                SetHole(const Standard_Integer theHoleId,
                                                const gp_Pnt2d& thePoint);
    Standard_EXPORT void                SetNeighbor(const Standard_Integer theTriangle,
                                                    const Standard_Integer theNeighbor,
                                                    const Standard_Integer theValue);
    Standard_EXPORT void                SetPoint(const Standard_Integer thePointId,
                                                 const gp_Pnt2d& thePoint);
    Standard_EXPORT void                SetPointAttribute(const Standard_Integer thePointId,
                                                          const Standard_Integer theAttribute,
                                                          const Standard_Real theValue);
    Standard_EXPORT void                SetPointBoundaryMarker(const Standard_Integer thePointId,
                                                               const Standard_Integer theBoundaryMarker);
    Standard_EXPORT void                SetRegion(const Standard_Integer theRegionId,
                                                  const gp_Pnt2d& thePoint);
    Standard_EXPORT void                SetRegionAttribute(const Standard_Integer theRegionId,
                                                           const Standard_Real theAttribute);
    Standard_EXPORT void                SetRegionMaximumArea(const Standard_Integer theRegionId,
                                                             const Standard_Real theMaximumArea);
    Standard_EXPORT void                SetTriangle(const Standard_Integer theTriangleId,
                                                    const TColStd_SequenceOfInteger& thePointIds);
    Standard_EXPORT void                SetTriangleAttributes(const Standard_Integer theTriangleId,
                                                              const TColStd_SequenceOfReal& theAttributes);

private:

    TColStd_Array1OfReal                myAreaConstraints;
    TColStd_Array2OfInteger             myEdges;
    TColStd_Array2OfInteger             myEdgesBoundaryMarkers;
    TColgp_Array1OfPnt2d                myHoles;
    TColStd_Array2OfInteger             myNeighbors;
    TColgp_Array1OfPnt2d                myPoints;
    TColStd_Array2OfReal                myPointsAttributes;
    TColStd_Array1OfInteger             myPointsBoundaryMarkers;
    TColgp_Array1OfPnt2d                myRegions;
    TColStd_Array1OfReal                myRegionsAttributes;
    TColStd_Array1OfReal                myRegionsMaximumArea;
    Triangle_Array1OfSequenceOfInteger  myTriangles;
    Triangle_Array1OfSequenceOfReal     myTrianglesAttributes;

public:

    DEFINE_STANDARD_RTTIEXT(Triangle_DataModel, Standard_Transient)

};


#endif // __Triangle_DataModel_hxx__

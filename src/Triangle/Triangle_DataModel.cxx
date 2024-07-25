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
#include <Triangle_DataModel.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_DataModel::Triangle_DataModel()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_DataModel::~Triangle_DataModel()
{

}

// ============================================================================
/*!
 *  \brief AreaConstraint()
*/
// ============================================================================
Standard_Real Triangle_DataModel::AreaConstraint(const Standard_Integer theTriangleId) const
{
    return myAreaConstraints.Value(theTriangleId);
}

// ============================================================================
/*!
 *  \brief EdgeBoundaryMarker()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::EdgeBoundaryMarker(const Standard_Integer theEdgeId,
                                                        const Standard_Integer theIndex) const
{
    return myEdgesBoundaryMarkers.Value(theEdgeId, theIndex);
}

// ============================================================================
/*!
 *  \brief EdgePoint()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::EdgePoint(const Standard_Integer theEdgeId,
                                               const Standard_Integer theIndex) const
{
    return myEdges.Value(theEdgeId, theIndex);
}

// ============================================================================
/*!
 *  \brief Hole()
*/
// ============================================================================
const gp_Pnt2d& Triangle_DataModel::Hole(const Standard_Integer theHoleId) const
{
    return myHoles.Value(theHoleId);
}

// ============================================================================
/*!
 *  \brief NbAreaConstraints()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbAreaConstraints() const
{
    return myAreaConstraints.Size();
}

// ============================================================================
/*!
 *  \brief NbEdges()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbEdges() const
{
    return myEdges.Size();
}

// ============================================================================
/*!
 *  \brief NbEdgeBoundaryMarkers()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbEdgeBoundaryMarkers() const
{
    return myEdgesBoundaryMarkers.NbColumns();
}

// ============================================================================
/*!
 *  \brief NbHoles()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbHoles() const
{
    return myHoles.Size();
}

// ============================================================================
/*!
 *  \brief NbNeighbors()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbNeighbors() const
{
    return myNeighbors.Size();
}

// ============================================================================
/*!
 *  \brief NbPoints()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbPoints() const
{
    return myPoints.Size();
}

// ============================================================================
/*!
 *  \brief NbPointsAttributes()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbPointsAttributes() const
{
    return myPointsAttributes.NbColumns();
}

// ============================================================================
/*!
 *  \brief NbPointsBoundaryMarkers()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbPointsBoundaryMarkers() const
{
    return myPointsBoundaryMarkers.Size();
}

// ============================================================================
/*!
 *  \brief NbRegions()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbRegions() const
{
    return myRegions.Size();
}

// ============================================================================
/*!
 *  \brief NbRegionsAttributes()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbRegionsAttributes() const
{
    return myRegionsAttributes.Size();
}

// ============================================================================
/*!
 *  \brief NbRegionsMaximumArea()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbRegionsMaximumArea() const
{
    return myRegionsMaximumArea.Size();
}

// ============================================================================
/*!
 *  \brief NbTriangles()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbTriangles() const
{
    return myTriangles.Size();
}

// ============================================================================
/*!
 *  \brief NbTrianglesAttributes()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbTrianglesAttributes() const
{
    return myTrianglesAttributes.Size();
}

// ============================================================================
/*!
 *  \brief Neighbor()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::Neighbor(const Standard_Integer theTriangle,
                                              const Standard_Integer theNeighbor) const
{
    return myNeighbors.Value(theTriangle, theNeighbor);
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt2d& Triangle_DataModel::Point(const Standard_Integer thePointId) const
{
    return myPoints.Value(thePointId);
}

// ============================================================================
/*!
 *  \brief PointAttributes()
*/
// ============================================================================
Standard_Real Triangle_DataModel::PointAttribute(const Standard_Integer thePointId,
                                                 const Standard_Integer theAttribute) const
{
    return myPointsAttributes.Value(thePointId, theAttribute);
}

// ============================================================================
/*!
 *  \brief PointBoundaryMarker()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::PointBoundaryMarker(const Standard_Integer thePointId) const
{
    return myPointsBoundaryMarkers.Value(thePointId);
}

// ============================================================================
/*!
 *  \brief Region()
*/
// ============================================================================
const gp_Pnt2d& Triangle_DataModel::Region(const Standard_Integer theRegionId) const
{
    return myRegions.Value(theRegionId);
}

// ============================================================================
/*!
 *  \brief RegionAttribute()
*/
// ============================================================================
Standard_Real Triangle_DataModel::RegionAttribute(const Standard_Integer theRegionId) const
{
    return myRegionsAttributes.Value(theRegionId);
}

// ============================================================================
/*!
 *  \brief RegionMaximumArea()
*/
// ============================================================================
Standard_Real Triangle_DataModel::RegionMaximumArea(const Standard_Integer theRegionId) const
{
    return myRegionsMaximumArea.Value(theRegionId);
}

// ============================================================================
/*!
 *  \brief ResizeAreaConstraints()
*/
// ============================================================================
void Triangle_DataModel::ResizeAreaConstraints(const Standard_Integer theNbAreaConstraints,
                                               const Standard_Boolean toCopyOld)
{
    myAreaConstraints.Resize(1, theNbAreaConstraints, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeEdges()
*/
// ============================================================================
void Triangle_DataModel::ResizeEdges(const Standard_Integer theNbEdges,
                                     const Standard_Boolean theHasBoundaryMarker,
                                     const Standard_Boolean toCopyOld)
{
    if(theHasBoundaryMarker)
        myEdges.Resize(1, theNbEdges, 1, 3, toCopyOld);
    else
        myEdges.Resize(1, theNbEdges, 1, 2, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeEdgesBoundaryMarkers()
*/
// ============================================================================
void Triangle_DataModel::ResizeEdgesBoundaryMarkers(const Standard_Integer theNbEdges,
                                                    const Standard_Integer theNbBoundaryMarkers,
                                                    const Standard_Boolean toCopyOld)
{
    myEdgesBoundaryMarkers.Resize(1, theNbEdges, 1, theNbBoundaryMarkers, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeHoles()
*/
// ============================================================================
void Triangle_DataModel::ResizeHoles(const Standard_Integer theNbHoles,
                                     const Standard_Boolean toCopyOld)
{
    myHoles.Resize(1, theNbHoles, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeNeighbors()
*/
// ============================================================================
void Triangle_DataModel::ResizeNeighbors(const Standard_Integer theNbTriangles,
                                         const Standard_Integer theNbNeighbors,
                                         const Standard_Boolean toCopyOld)
{
    myNeighbors.Resize(1, theNbTriangles, 1, theNbNeighbors, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizePoints()
*/
// ============================================================================
void Triangle_DataModel::ResizePoints(const Standard_Integer theNbPoints,
                                      const Standard_Boolean toCopyOld)
{
    myPoints.Resize(1, theNbPoints, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizePointsAttributes()
*/
// ============================================================================
void Triangle_DataModel::ResizePointsAttributes(const Standard_Integer theNbPoints,
                                                const Standard_Integer theNbPointsAttributes,
                                                const Standard_Boolean toCopyOld)
{
    myPointsAttributes.Resize(1, theNbPoints, 1, theNbPointsAttributes, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizePointsBoundaryMarkers()
*/
// ============================================================================
void Triangle_DataModel::ResizePointsBoundaryMarkers(const Standard_Integer theNbPointsBoundaryMarkers,
                                                     const Standard_Boolean toCopyOld)
{
    myPointsBoundaryMarkers.Resize(1, theNbPointsBoundaryMarkers, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeRegions()
*/
// ============================================================================
void Triangle_DataModel::ResizeRegions(const Standard_Integer theNbRegions,
                                       const Standard_Boolean toCopyOld)
{
    myRegions.Resize(1, theNbRegions, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeRegionsAttributes()
*/
// ============================================================================
void Triangle_DataModel::ResizeRegionsAttributes(const Standard_Integer theNbRegionsAttributes,
                                                 const Standard_Boolean toCopyOld)
{
    myRegionsAttributes.Resize(1, theNbRegionsAttributes, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeRegionsMaximumArea()
*/
// ============================================================================
void Triangle_DataModel::ResizeRegionsMaximumArea(const Standard_Integer theNbRegionsMaximumArea,
                                                  const Standard_Boolean toCopyOld)
{
    myRegionsMaximumArea.Resize(1, theNbRegionsMaximumArea, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeTriangles()
*/
// ============================================================================
void Triangle_DataModel::ResizeTriangles(const Standard_Integer theNbTriangles,
                                         const Standard_Boolean toCopyOld)
{
    myTriangles.Resize(1, theNbTriangles, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeTrianglesAttributes()
*/
// ============================================================================
void Triangle_DataModel::ResizeTrianglesAttributes(const Standard_Integer theNbTrianglesAttributes,
                                                   const Standard_Boolean toCopyOld)
{
    myTrianglesAttributes.Resize(1, theNbTrianglesAttributes, toCopyOld);
}

// ============================================================================
/*!
 *  \brief SetAreaConstraint()
*/
// ============================================================================
void Triangle_DataModel::SetAreaConstraint(const Standard_Integer theTriangleId,
                                           const Standard_Real theMaximumArea)
{
    myAreaConstraints.SetValue(theTriangleId, theMaximumArea);
}

// ============================================================================
/*!
 *  \brief SetEdgePoint()
*/
// ============================================================================
void Triangle_DataModel::SetEdgePoint(const Standard_Integer theEdgeId,
                                      const Standard_Integer theIndex,
                                      const Standard_Integer thePointId)
{
    myEdges.SetValue(theEdgeId, theIndex, thePointId);
}

// ============================================================================
/*!
 *  \brief SetEdgeBoundaryMarker()
*/
// ============================================================================
void Triangle_DataModel::SetEdgeBoundaryMarker(const Standard_Integer theEdgeId,
                                               const Standard_Integer theIndex,
                                               const Standard_Integer theValue)
{
    myEdgesBoundaryMarkers.SetValue(theEdgeId, theIndex, theValue);
}

// ============================================================================
/*!
 *  \brief SetHole()
*/
// ============================================================================
void Triangle_DataModel::SetHole(const Standard_Integer theHoleId,
                                 const gp_Pnt2d &thePoint)
{
    myHoles.SetValue(theHoleId, thePoint);
}

// ============================================================================
/*!
 *  \brief SetNeighbor()
*/
// ============================================================================
void Triangle_DataModel::SetNeighbor(const Standard_Integer theTriangle,
                                     const Standard_Integer theNeighbor,
                                     const Standard_Integer theValue)
{
    myNeighbors.SetValue(theTriangle, theNeighbor, theValue);
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void Triangle_DataModel::SetPoint(const Standard_Integer thePointId,
                                  const gp_Pnt2d &thePoint)
{
    myPoints.SetValue(thePointId, thePoint);
}

// ============================================================================
/*!
 *  \brief SetPointAttribute()
*/
// ============================================================================
void Triangle_DataModel::SetPointAttribute(const Standard_Integer thePointId,
                                           const Standard_Integer theAttribute,
                                           const Standard_Real theValue)
{
    myPointsAttributes.SetValue(thePointId, theAttribute, theValue);
}

// ============================================================================
/*!
 *  \brief SetPointBoundaryMarker()
*/
// ============================================================================
void Triangle_DataModel::SetPointBoundaryMarker(const Standard_Integer thePointId,
                                                const Standard_Integer theBoundaryMarker)
{
    myPointsBoundaryMarkers.SetValue(thePointId, theBoundaryMarker);
}

// ============================================================================
/*!
 *  \brief SetRegion()
*/
// ============================================================================
void Triangle_DataModel::SetRegion(const Standard_Integer theRegionId,
                                   const gp_Pnt2d &thePoint)
{
    myRegions.SetValue(theRegionId, thePoint);
}

// ============================================================================
/*!
 *  \brief SetRegionAttribute()
*/
// ============================================================================
void Triangle_DataModel::SetRegionAttribute(const Standard_Integer theRegionId,
                                            const Standard_Real theAttribute)
{
    myRegionsAttributes.SetValue(theRegionId, theAttribute);
}

// ============================================================================
/*!
 *  \brief SetRegionMaximumArea()
*/
// ============================================================================
void Triangle_DataModel::SetRegionMaximumArea(const Standard_Integer theRegionId,
                                              const Standard_Real theMaximumArea)
{
    myRegionsMaximumArea.SetValue(theRegionId, theMaximumArea);
}

// ============================================================================
/*!
 *  \brief SetTriangle()
*/
// ============================================================================
void Triangle_DataModel::SetTriangle(const Standard_Integer theTriangleId,
                                     const TColStd_SequenceOfInteger &thePointIds)
{
    myTriangles.SetValue(theTriangleId, thePointIds);
}

// ============================================================================
/*!
 *  \brief SetTriangleAttributes()
*/
// ============================================================================
void Triangle_DataModel::SetTriangleAttributes(const Standard_Integer theTriangleId,
                                               const TColStd_SequenceOfReal &theAttributes)
{
    myTrianglesAttributes.SetValue(theTriangleId, theAttributes);
}

// ============================================================================
/*!
 *  \brief Triangle()
*/
// ============================================================================
const TColStd_SequenceOfInteger& Triangle_DataModel::Triangle(const Standard_Integer theTriangleId) const
{
    return myTriangles.Value(theTriangleId);
}

// ============================================================================
/*!
 *  \brief TriangleAttributes()
*/
// ============================================================================
const TColStd_SequenceOfReal& Triangle_DataModel::TriangleAttributes(const Standard_Integer theTriangleId) const
{
    return myTrianglesAttributes.Value(theTriangleId);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Triangle_DataModel, Standard_Transient)
IMPLEMENT_STANDARD_RTTIEXT(Triangle_DataModel, Standard_Transient)


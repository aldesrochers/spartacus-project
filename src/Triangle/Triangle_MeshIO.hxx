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


#ifndef __Triangle_MeshIO_hxx__
#define __Triangle_MeshIO_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array2OfInteger.hxx>
#include <TColStd_Array2OfReal.hxx>

// Forward declarations
class Triangle_MeshIO;

// Handles
DEFINE_STANDARD_HANDLE(Triangle_MeshIO, Standard_Transient)



// ============================================================================
/*!
 *  \brief Triangle_MeshIO
*/
// ============================================================================
class Triangle_MeshIO : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT Triangle_MeshIO();
    // destructors
    Standard_EXPORT ~Triangle_MeshIO();

public:


    Standard_EXPORT const TColStd_Array2OfInteger&  Edges() const {return myEdges;}
    Standard_EXPORT TColStd_Array2OfInteger&        Edges() {return myEdges;}
    Standard_EXPORT const TColStd_Array1OfInteger&  EdgesMarker() const {return myEdgesMarker;}
    Standard_EXPORT TColStd_Array1OfInteger&        EdgesMarker() {return myEdgesMarker;}
    Standard_EXPORT const TColStd_Array2OfInteger&  Elements() const {return myElements;}
    Standard_EXPORT TColStd_Array2OfInteger&        Elements() {return myElements;}
    Standard_EXPORT const TColStd_Array2OfReal&     ElementsAttributes() const {return myElementsAttributes;}
    Standard_EXPORT TColStd_Array2OfReal&           ElementsAttributes() {return myElementsAttributes;}
    Standard_EXPORT const TColStd_Array1OfReal&     ElementsMaxArea() const {return myElementsMaxArea;}
    Standard_EXPORT TColStd_Array1OfReal&           ElementsMaxArea() {return myElementsMaxArea;}
    Standard_EXPORT const TColStd_Array2OfInteger&  ElementsNeighbors() const {return myElementsNeighbors;}
    Standard_EXPORT TColStd_Array2OfInteger&        ElementsNeighbors() {return myElementsNeighbors;}
    Standard_EXPORT const TColgp_Array1OfPnt2d&     Holes() const {return myHoles;}
    Standard_EXPORT TColgp_Array1OfPnt2d&           Holes() {return myHoles;}
    Standard_EXPORT const TColgp_Array1OfPnt2d&     Points() const {return myPoints;}
    Standard_EXPORT TColgp_Array1OfPnt2d&           Points() {return myPoints;}
    Standard_EXPORT const TColStd_Array2OfReal&     PointsAttributes() const {return myPointsAttributes;}
    Standard_EXPORT TColStd_Array2OfReal&           PointsAttributes() {return myPointsAttributes;}
    Standard_EXPORT const TColStd_Array1OfInteger&  PointsMarker() const {return myPointsMarker;}
    Standard_EXPORT TColStd_Array1OfInteger&        PointsMarker() {return myPointsMarker;}
    Standard_EXPORT const TColgp_Array1OfPnt2d&     Regions() const {return myRegions;}
    Standard_EXPORT TColgp_Array1OfPnt2d&           Regions() {return myRegions;}
    Standard_EXPORT const TColStd_Array1OfReal&     RegionsAttribute() const {return myRegionsAttribute;}
    Standard_EXPORT TColStd_Array1OfReal&           RegionsAttribute() {return myRegionsAttribute;}
    Standard_EXPORT const TColStd_Array1OfReal&     RegionsMaxArea() const {return myRegionsMaxArea;}
    Standard_EXPORT TColStd_Array1OfReal&           RegionsMaxArea() {return myRegionsMaxArea;}
    Standard_EXPORT const TColStd_Array2OfInteger&  Segments() const {return mySegments;}
    Standard_EXPORT TColStd_Array2OfInteger&        Segments() {return mySegments;}
    Standard_EXPORT const TColStd_Array1OfInteger&  SegmentsMarker() const {return mySegmentsMarker;}
    Standard_EXPORT TColStd_Array1OfInteger&        SegmentsMarker() {return mySegmentsMarker;}

private:

    TColStd_Array2OfInteger     myEdges;
    TColStd_Array1OfInteger     myEdgesMarker;
    TColStd_Array2OfInteger     myElements;
    TColStd_Array2OfReal        myElementsAttributes;
    TColStd_Array1OfReal        myElementsMaxArea;
    TColStd_Array2OfInteger     myElementsNeighbors;
    TColgp_Array1OfPnt2d        myHoles;
    TColgp_Array1OfPnt2d        myPoints;
    TColStd_Array2OfReal        myPointsAttributes;
    TColStd_Array1OfInteger     myPointsMarker;
    TColgp_Array1OfPnt2d        myRegions;
    TColStd_Array1OfReal        myRegionsAttribute;
    TColStd_Array1OfReal        myRegionsMaxArea;
    TColStd_Array2OfInteger     mySegments;
    TColStd_Array1OfInteger     mySegmentsMarker;

public:

    DEFINE_STANDARD_RTTIEXT(Triangle_MeshIO, Standard_Transient)

};


#endif // __Triangle_MeshIO_hxx__

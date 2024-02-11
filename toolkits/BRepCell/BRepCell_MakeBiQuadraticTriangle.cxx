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
#include <BRepCell_MakeBiQuadraticTriangle.hxx>
#include <BRepCell_MakeQuadraticTriangle.hxx>

// OpenCascade
#include <BRep_Tool.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Builder.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeBiQuadraticTriangle::BRepCell_MakeBiQuadraticTriangle(const gp_Pnt& thePoint1,
                                                                   const gp_Pnt& thePoint2,
                                                                   const gp_Pnt& thePoint3,
                                                                   const gp_Pnt& thePoint4,
                                                                   const gp_Pnt& thePoint5,
                                                                   const gp_Pnt& thePoint6,
                                                                   const gp_Pnt& thePoint7)
{
    Initialize(thePoint1, thePoint2, thePoint3,
               thePoint4, thePoint5, thePoint6, thePoint7);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeBiQuadraticTriangle::BRepCell_MakeBiQuadraticTriangle(const TopoDS_Vertex &theVertex1,
                                                                   const TopoDS_Vertex &theVertex2,
                                                                   const TopoDS_Vertex &theVertex3,
                                                                   const TopoDS_Vertex &theVertex4,
                                                                   const TopoDS_Vertex &theVertex5,
                                                                   const TopoDS_Vertex &theVertex6,
                                                                   const TopoDS_Vertex &theVertex7)
{
    Initialize(theVertex1, theVertex2, theVertex3,
               theVertex4, theVertex5, theVertex6, theVertex7);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeBiQuadraticTriangle::~BRepCell_MakeBiQuadraticTriangle()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeBiQuadraticTriangle::Initialize(const gp_Pnt &thePoint1,
                                                  const gp_Pnt &thePoint2,
                                                  const gp_Pnt &thePoint3,
                                                  const gp_Pnt &thePoint4,
                                                  const gp_Pnt &thePoint5,
                                                  const gp_Pnt &thePoint6,
                                                  const gp_Pnt &thePoint7)
{
    TopoDS_Vertex aVertex1 = BRepLib_MakeVertex(thePoint1).Vertex();
    TopoDS_Vertex aVertex2 = BRepLib_MakeVertex(thePoint2).Vertex();
    TopoDS_Vertex aVertex3 = BRepLib_MakeVertex(thePoint3).Vertex();
    TopoDS_Vertex aVertex4 = BRepLib_MakeVertex(thePoint4).Vertex();
    TopoDS_Vertex aVertex5 = BRepLib_MakeVertex(thePoint5).Vertex();
    TopoDS_Vertex aVertex6 = BRepLib_MakeVertex(thePoint6).Vertex();
    TopoDS_Vertex aVertex7 = BRepLib_MakeVertex(thePoint7).Vertex();
    Initialize(aVertex1, aVertex2, aVertex3,
               aVertex4, aVertex5, aVertex6, aVertex7);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeBiQuadraticTriangle::Initialize(const TopoDS_Vertex &theVertex1,
                                                  const TopoDS_Vertex &theVertex2,
                                                  const TopoDS_Vertex &theVertex3,
                                                  const TopoDS_Vertex &theVertex4,
                                                  const TopoDS_Vertex &theVertex5,
                                                  const TopoDS_Vertex &theVertex6,
                                                  const TopoDS_Vertex &theVertex7)
{
    // resize internal containers
    ResizeVertices(7);
    ResizeEdges(3);

    // setup vertices
    SetVertex(1, theVertex1);
    SetVertex(2, theVertex2);
    SetVertex(3, theVertex3);
    SetVertex(4, theVertex4);
    SetVertex(5, theVertex5);
    SetVertex(6, theVertex6);
    SetVertex(7, theVertex7);

    // make underlying triangle
    BRepCell_MakeQuadraticTriangle aTriangleBuilder(theVertex1, theVertex2, theVertex3,
                                                    theVertex4, theVertex5, theVertex6);
    if(!aTriangleBuilder.IsDone()) {
        SetError(aTriangleBuilder.Error());
        return;
    }

    // setup edges
    SetEdge(1, aTriangleBuilder.Edge(1));
    SetEdge(2, aTriangleBuilder.Edge(2));
    SetEdge(3, aTriangleBuilder.Edge(3));

    // setup wire
    myWire = aTriangleBuilder.Wire();

    // retrieve triangle face
    TopoDS_Face aFace = aTriangleBuilder.Face();

    // retrive plane geometry from face
    Handle(Geom_Surface) aSurface = BRep_Tool::Surface(aFace);
    gp_Pnt aPoint7 = BRep_Tool::Pnt(theVertex7);

    // check that mid-face point (Vertex7) is on face with precision
    GeomAPI_ProjectPointOnSurf aProjector(aPoint7, aSurface);
    Standard_Real aDistance = aProjector.LowerDistance();
    if(aDistance > Precision::Confusion()) {
        SetError(BRepCell_PointNotOnFaceError);
        return;
    }

    // retrieve nearest vertex from projection
    TopoDS_Vertex aVertex = BRepLib_MakeVertex(aProjector.NearestPoint()).Vertex();

    // add vertex on edge
    TopoDS_Builder aBuilder;
    aBuilder.Add(aFace, aVertex);

    // setup result edge
    SetShape(aFace);
    SetDone();
}

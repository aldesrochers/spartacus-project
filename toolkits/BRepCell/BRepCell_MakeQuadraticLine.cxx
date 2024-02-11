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
#include <BRepCell_MakeQuadraticLine.hxx>

// OpenCascade
#include <BRep_Tool.hxx>
#include <BRepCell_MakeLinearLine.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <GeomAPI_ProjectPointOnCurve.hxx>
#include <TopoDS_Builder.hxx>
#include <TopoDS_Edge.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeQuadraticLine::BRepCell_MakeQuadraticLine(const gp_Pnt &thePoint1,
                                                       const gp_Pnt &thePoint2,
                                                       const gp_Pnt &thePoint3)
{
    Initialize(thePoint1, thePoint2, thePoint3);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeQuadraticLine::BRepCell_MakeQuadraticLine(const TopoDS_Vertex &theVertex1,
                                                       const TopoDS_Vertex &theVertex2,
                                                       const TopoDS_Vertex &theVertex3)
{
    Initialize(theVertex1, theVertex2, theVertex3);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeQuadraticLine::~BRepCell_MakeQuadraticLine()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeQuadraticLine::Initialize(const gp_Pnt &thePoint1,
                                            const gp_Pnt &thePoint2,
                                            const gp_Pnt &thePoint3)
{
    TopoDS_Vertex aVertex1 = BRepLib_MakeVertex(thePoint1).Vertex();
    TopoDS_Vertex aVertex2 = BRepLib_MakeVertex(thePoint2).Vertex();
    TopoDS_Vertex aVertex3 = BRepLib_MakeVertex(thePoint3).Vertex();
    Initialize(aVertex1, aVertex2, aVertex3);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeQuadraticLine::Initialize(const TopoDS_Vertex &theVertex1,
                                            const TopoDS_Vertex &theVertex2,
                                            const TopoDS_Vertex &theVertex3)
{
    // setup vertices
    ResizeVertices(3);
    SetVertex(1, theVertex1);
    SetVertex(2, theVertex2);
    SetVertex(3, theVertex3);

    // build an edge from 2 end nodes
    BRepCell_MakeLinearLine aLineBuilder(theVertex1, theVertex2);
    if(!aLineBuilder.IsDone()) {
        SetError(aLineBuilder.Error());
        return;
    }
    TopoDS_Edge anEdge = aLineBuilder.Edge();

    // retrieve line geometry from edge
    Standard_Real UFirst, ULast;
    BRep_Tool::Range(anEdge, UFirst, ULast);
    Handle(Geom_Curve) aCurve = BRep_Tool::Curve(anEdge, UFirst, ULast);
    gp_Pnt aPoint3 = BRep_Tool::Pnt(theVertex3);

    // check that mid-edge point (Vertex3) is on edge with precision
    GeomAPI_ProjectPointOnCurve aProjector(aPoint3, aCurve);
    Standard_Real aDistance = aProjector.LowerDistance();
    if(aDistance > Precision::Confusion()) {
        SetError(BRepCell_PointNotOnEdgeError);
        return;
    }

    // retrieve nearest vertex from projection
    TopoDS_Vertex aVertex = BRepLib_MakeVertex(aProjector.NearestPoint()).Vertex();

    // add vertex on edge
    TopoDS_Builder aBuilder;
    aBuilder.Add(anEdge, aVertex);

    // setup result edge
    SetShape(anEdge);
    SetDone();
}

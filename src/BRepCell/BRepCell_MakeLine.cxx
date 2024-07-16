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
#include <BRepCell_MakeLine.hxx>

// OpenCascade
#include <BRep_Builder.hxx>
#include <BRep_Tool.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLine::BRepCell_MakeLine(const TopoDS_Vertex &theVertex1,
                                     const TopoDS_Vertex &theVertex2)
{
    Initialize(theVertex1, theVertex2);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLine::BRepCell_MakeLine(const TopoDS_Vertex &theVertex1,
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
BRepCell_MakeLine::~BRepCell_MakeLine()
{

}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
BRepCell_LineError BRepCell_MakeLine::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLine::Initialize(const TopoDS_Vertex &theVertex1,
                                   const TopoDS_Vertex &theVertex2)
{
    // build edge
    BRepBuilderAPI_MakeEdge anEdgeBuilder(theVertex1, theVertex2);
    if(!anEdgeBuilder.IsDone()) {
        myError = BRepCell_LineEdgeError;
        SetNotDone();
        return;
    }
    TopoDS_Edge anEdge = anEdgeBuilder.Edge();

    // populate internal containers
    myEdges.Add(anEdge);
    myVertices.Add(theVertex1);
    myVertices.Add(theVertex2);
    myShape = anEdge;

    myError = BRepCell_LineNoError;
    SetDone();
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLine::Initialize(const TopoDS_Vertex &theVertex1,
                                   const TopoDS_Vertex &theVertex2,
                                   const TopoDS_Vertex &theVertex3)
{
    // initialize 'linear' line
    Initialize(theVertex1, theVertex2);
    if(myIsDone == Standard_False)
        return;

    // retrieve previously built edge
    TopoDS_Edge anEdge = TopoDS::Edge(myEdges.FindKey(1));

    // compute location of mid-edge point
    Standard_Real U1, U2, U3;
    const Handle(Geom_Curve) aCurve = BRep_Tool::Curve(anEdge, U1, U2);
    U3 = (U1 + U2) / 2.;
    gp_Pnt P3;
    aCurve->D0(U3, P3);

    // check if vertex3 is located properly
    const gp_Pnt& aPoint = BRep_Tool::Pnt(theVertex3);
    if(aPoint.Distance(P3) > Precision::Confusion()) {
        myError = BRepCell_LineVertex3NotOnEdgeError;
        SetNotDone();
        return;
    }

    // add vertex on edge
    BRep_Builder aBuilder;
    aBuilder.Add(anEdge, theVertex3);

    SetDone();
}

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
#include <BRepCell_MakeLinearLine.hxx>

// OpenCascade
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearLine::BRepCell_MakeLinearLine(const gp_Pnt1d& thePoint1,
                                                 const gp_Pnt1d& thePoint2)
{
    Initialize(thePoint1, thePoint2);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearLine::BRepCell_MakeLinearLine(const gp_Pnt2d& thePoint1,
                                                 const gp_Pnt2d& thePoint2)
{
    Initialize(thePoint1, thePoint2);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearLine::BRepCell_MakeLinearLine(const gp_Pnt& thePoint1,
                                                 const gp_Pnt& thePoint2)
{
    Initialize(thePoint1, thePoint2);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearLine::BRepCell_MakeLinearLine(const TopoDS_Vertex &theVertex1,
                                                 const TopoDS_Vertex &theVertex2)
{
    Initialize(theVertex1, theVertex2);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeLinearLine::~BRepCell_MakeLinearLine()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearLine::Initialize(const gp_Pnt1d& thePoint1,
                                         const gp_Pnt1d& thePoint2)
{
    const gp_Pnt2d& aPoint1 = gp_Pnt2d(thePoint1.X(), 0.);
    const gp_Pnt2d& aPoint2 = gp_Pnt2d(thePoint2.X(), 0.);
    Initialize(aPoint1, aPoint2);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearLine::Initialize(const gp_Pnt2d& thePoint1,
                                         const gp_Pnt2d& thePoint2)
{
    const gp_Pnt& aPoint1 = gp_Pnt(thePoint1.X(), thePoint1.Y(), 0.);
    const gp_Pnt& aPoint2 = gp_Pnt(thePoint2.X(), thePoint2.Y(), 0.);
    Initialize(aPoint1, aPoint2);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearLine::Initialize(const gp_Pnt& thePoint1,
                                         const gp_Pnt& thePoint2)
{
    TopoDS_Vertex aVertex1 = BRepBuilderAPI_MakeVertex(thePoint1).Vertex();
    TopoDS_Vertex aVertex2 = BRepBuilderAPI_MakeVertex(thePoint2).Vertex();
    Initialize(aVertex1, aVertex2);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearLine::Initialize(const TopoDS_Vertex &theVertex1,
                                         const TopoDS_Vertex &theVertex2)
{
    // build edge
    BRepBuilderAPI_MakeEdge anEdgeBuilder(theVertex1, theVertex2);
    if(!anEdgeBuilder.IsDone()) {
        SetNotDone();
        return;
    }
    TopoDS_Edge anEdge = anEdgeBuilder.Edge();

    // populate internal containers
    myVertices.Add(theVertex1);
    myVertices.Add(theVertex2);
    myEdges.Add(anEdge);
    myShape = anEdge;
    SetDone();
}

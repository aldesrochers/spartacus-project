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
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLine::BRepCell_MakeLine(const gp_Pnt& thePoint1,
                                     const gp_Pnt& thePoint2)
{
    Initialize(thePoint1, thePoint2);
}

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
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeLine::~BRepCell_MakeLine()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLine::Initialize(const gp_Pnt &thePoint1,
                                   const gp_Pnt &thePoint2)
{
    TopoDS_Vertex aVertex1 = BRepLib_MakeVertex(thePoint1).Vertex();
    TopoDS_Vertex aVertex2 = BRepLib_MakeVertex(thePoint2).Vertex();
    Initialize(aVertex1, aVertex2);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLine::Initialize(const TopoDS_Vertex &theVertex1,
                                   const TopoDS_Vertex &theVertex2)
{
    myVertices.Append(theVertex1);
    myVertices.Append(theVertex2);

    // build line with two nodes
    BRepLib_MakeEdge aBuilder(theVertex1, theVertex2);
    if(!aBuilder.IsDone())
        return;
    TopoDS_Edge anEdge = aBuilder.Edge();
    myEdges.Append(anEdge);

    SetShape(anEdge);
    SetDone();
}

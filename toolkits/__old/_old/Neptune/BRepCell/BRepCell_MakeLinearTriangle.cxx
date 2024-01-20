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
#include <BRepCell_MakeLinearTriangle.hxx>

// OpenCascade
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakeWire.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearTriangle::BRepCell_MakeLinearTriangle(const TopoDS_Vertex& theVertex1,
                                                         const TopoDS_Vertex& theVertex2,
                                                         const TopoDS_Vertex& theVertex3)
{
    Initialize(theVertex1, theVertex2, theVertex3);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeLinearTriangle::~BRepCell_MakeLinearTriangle()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearTriangle::Initialize(const TopoDS_Vertex &theVertex1,
                                             const TopoDS_Vertex &theVertex2,
                                             const TopoDS_Vertex &theVertex3)
{
    // edge 1
    BRepLib_MakeEdge anEdgeBuilder1(theVertex1, theVertex2);
    if(!anEdgeBuilder1.IsDone())
        return;
    TopoDS_Edge anEdge1 = anEdgeBuilder1.Edge();

    // edge 2
    BRepLib_MakeEdge anEdgeBuilder2(theVertex2, theVertex3);
    if(!anEdgeBuilder2.IsDone())
        return;
    TopoDS_Edge anEdge2 = anEdgeBuilder2.Edge();

    // edge 3
    BRepLib_MakeEdge anEdgeBuilder3(theVertex3, theVertex1);
    if(!anEdgeBuilder3.IsDone())
        return;
    TopoDS_Edge anEdge3 = anEdgeBuilder3.Edge();

    // wire
    BRepLib_MakeWire aWireBuilder(anEdge1, anEdge2, anEdge3);
    if(!aWireBuilder.IsDone())
        return;
    TopoDS_Wire aWire = aWireBuilder.Wire();

    // face
    BRepLib_MakeFace aFaceBuilder(aWire, Standard_True);
    if(!aFaceBuilder.IsDone())
        return;
    TopoDS_Face aFace = aFaceBuilder.Face();

    myShape = aFace;
    SetDone();
}


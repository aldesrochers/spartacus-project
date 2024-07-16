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
#include <BRepCell_MakeTriangle.hxx>

// OpenCascade
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeTriangle::BRepCell_MakeTriangle(const TopoDS_Vertex &theVertex1,
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
BRepCell_MakeTriangle::~BRepCell_MakeTriangle()
{

}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
BRepCell_TriangleError BRepCell_MakeTriangle::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeTriangle::Initialize(const TopoDS_Vertex &theVertex1,
                                       const TopoDS_Vertex &theVertex2,
                                       const TopoDS_Vertex &theVertex3)
{
    // build edge 1
    BRepBuilderAPI_MakeEdge anEdgeBuilder1(theVertex1, theVertex2);
    if(!anEdgeBuilder1.IsDone()) {
        myError = BRepCell_TriangleEdge1Error;
        return;
    }
    TopoDS_Edge anEdge1 = anEdgeBuilder1.Edge();

    // build edge 2
    BRepBuilderAPI_MakeEdge anEdgeBuilder2(theVertex2, theVertex3);
    if(!anEdgeBuilder2.IsDone()) {
        myError = BRepCell_TriangleEdge2Error;
        return;
    }
    TopoDS_Edge anEdge2 = anEdgeBuilder2.Edge();

    // build edge 3
    BRepBuilderAPI_MakeEdge anEdgeBuilder3(theVertex3, theVertex1);
    if(!anEdgeBuilder3.IsDone()) {
        myError = BRepCell_TriangleEdge3Error;
        return;
    }
    TopoDS_Edge anEdge3 = anEdgeBuilder3.Edge();

    // build wire
    BRepBuilderAPI_MakeWire aWireBuilder(anEdge1, anEdge2, anEdge3);
    if(!aWireBuilder.IsDone()) {
        myError = BRepCell_TriangleWireError;
        return;
    }
    TopoDS_Wire aWire = aWireBuilder.Wire();

    // build face
    BRepBuilderAPI_MakeFace aFaceBuilder(aWire, Standard_True);
    if(!aFaceBuilder.IsDone()) {
        myError = BRepCell_TriangleFaceError;
        return;
    }
    TopoDS_Face aFace = aFaceBuilder.Face();

    // populate internal containers
    myEdges.Add(anEdge1);
    myEdges.Add(anEdge2);
    myEdges.Add(anEdge3);
    myFaces.Add(aFace);
    myVertices.Add(theVertex1);
    myVertices.Add(theVertex2);
    myVertices.Add(theVertex3);
    myWires.Add(aWire);
    myShape = aFace;

    myError = BRepCell_TriangleNoError;
    SetDone();
}

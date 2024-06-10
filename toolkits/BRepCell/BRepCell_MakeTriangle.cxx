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
#include <BRepCell_MakeTriangle.hxx>

// OpenCascade
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeTriangle::BRepCell_MakeTriangle(const gp_Pnt& thePoint1,
                                             const gp_Pnt& thePoint2,
                                             const gp_Pnt& thePoint3)
{
    Initialize(thePoint1, thePoint2, thePoint3);
}

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
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeTriangle::Initialize(const gp_Pnt &thePoint1,
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
void BRepCell_MakeTriangle::Initialize(const TopoDS_Vertex &theVertex1,
                                       const TopoDS_Vertex &theVertex2,
                                       const TopoDS_Vertex &theVertex3)
{
    myVertices.Append(theVertex1);
    myVertices.Append(theVertex2);
    myVertices.Append(theVertex3);

    // make 1st edge
    BRepCell_MakeLine aBuilder1(theVertex1, theVertex2);
    if(!aBuilder1.IsDone())
        return;
    TopoDS_Edge anEdge1 = TopoDS::Edge(aBuilder1.Shape());
    myEdges.Append(anEdge1);

    // make 2nd edge
    BRepCell_MakeLine aBuilder2(theVertex2, theVertex3);
    if(!aBuilder2.IsDone())
        return;
    TopoDS_Edge anEdge2 = TopoDS::Edge(aBuilder2.Shape());
    myEdges.Append(anEdge2);

    // make 3rd edge
    BRepCell_MakeLine aBuilder3(theVertex3, theVertex1);
    if(!aBuilder3.IsDone())
        return;
    TopoDS_Edge anEdge3 = TopoDS::Edge(aBuilder3.Shape());
    myEdges.Append(anEdge3);

    // build wire
    BRepLib_MakeWire aWireBuilder(anEdge1, anEdge2, anEdge3);
    if(!aWireBuilder.IsDone())
        return;
    TopoDS_Wire aWire = aWireBuilder.Wire();
    myWires.Append(aWire);

    // build planar face
    BRepLib_MakeFace aFaceBuilder(aWire, Standard_True);
    if(!aFaceBuilder.IsDone())
        return;
    TopoDS_Face aFace = aFaceBuilder.Face();
    myFaces.Append(aFace);

    SetShape(aFace);
    SetDone();
}

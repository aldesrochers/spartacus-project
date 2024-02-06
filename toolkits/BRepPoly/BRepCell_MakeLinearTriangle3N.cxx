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
#include <BRepCell_MakeLinearTriangle3N.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeWire.hxx>

// OpenCascade
#include <TopoDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearTriangle3N::BRepCell_MakeLinearTriangle3N(const gp_Pnt& thePoint1,
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
BRepCell_MakeLinearTriangle3N::BRepCell_MakeLinearTriangle3N(const TopoDS_Vertex &theVertex1,
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
BRepCell_MakeLinearTriangle3N::~BRepCell_MakeLinearTriangle3N()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearTriangle3N::Initialize(const gp_Pnt &thePoint1,
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
void BRepCell_MakeLinearTriangle3N::Initialize(const TopoDS_Vertex &theVertex1,
                                               const TopoDS_Vertex &theVertex2,
                                               const TopoDS_Vertex &theVertex3)
{
    // resize internal containers
    myVertices.Resize(1, 3, Standard_False);
    myEdges.Resize(1, 3, Standard_False);
    myWires.Resize(1, 1, Standard_False);
    myFaces.Resize(1, 1, Standard_False);

    // define vertices
    myVertices.SetValue(1, theVertex1);
    myVertices.SetValue(2, theVertex2);
    myVertices.SetValue(3, theVertex3);

    // make edge 1
    BRepLib_MakeEdge anEdgeBuilder1(theVertex1, theVertex2);
    if(!anEdgeBuilder1.IsDone()) {
        if(anEdgeBuilder1.Error() == BRepLib_LineThroughIdenticPoints) {
            SetError(BRepCell_LineThroughIdenticPointsError);
        } else {
            SetError(BRepCell_UnknownError);
        }
        return;
    }
    TopoDS_Edge anEdge1 = anEdgeBuilder1.Edge();
    myEdges.SetValue(1, anEdge1);

    // make edge 2
    BRepLib_MakeEdge anEdgeBuilder2(theVertex2, theVertex3);
    if(!anEdgeBuilder2.IsDone()) {
        if(anEdgeBuilder2.Error() == BRepLib_LineThroughIdenticPoints) {
            SetError(BRepCell_LineThroughIdenticPointsError);
        } else {
            SetError(BRepCell_UnknownError);
        }
        return;
    }
    TopoDS_Edge anEdge2 = anEdgeBuilder2.Edge();
    myEdges.SetValue(2, anEdge2);

    // make edge 3
    BRepLib_MakeEdge anEdgeBuilder3(theVertex3, theVertex1);
    if(!anEdgeBuilder3.IsDone()) {
        if(anEdgeBuilder3.Error() == BRepLib_LineThroughIdenticPoints) {
            SetError(BRepCell_LineThroughIdenticPointsError);
        } else {
            SetError(BRepCell_UnknownError);
        }
        return;
    }
    TopoDS_Edge anEdge3 = anEdgeBuilder3.Edge();
    myEdges.SetValue(3, anEdge3);

    // wire
    BRepLib_MakeWire aWireBuilder(anEdge1, anEdge2, anEdge3);
    if(!aWireBuilder.IsDone()) {
        SetError(BRepCell_UnknownError);
        return;
    }
    TopoDS_Wire aWire = aWireBuilder.Wire();
    myWires.SetValue(1, aWire);

    // face
    BRepLib_MakeFace aFaceBuilder(aWire, Standard_True);
    if(!aFaceBuilder.IsDone()) {
        if(aFaceBuilder.Error() == BRepLib_NotPlanar) {
            SetError(BRepCell_FaceNotPlanarError);
        } else {
            SetError(BRepCell_UnknownError);
        }
        return;
    }
    TopoDS_Face aFace = aFaceBuilder.Face();
    myFaces.SetValue(1, aFace);

    SetShape(aFace);
    SetDone();
}

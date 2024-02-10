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
#include <BRepPoly_MakeQuadrangle.hxx>

// OpenCascade
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakeWire.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepPoly_MakeQuadrangle::BRepPoly_MakeQuadrangle(const TopoDS_Vertex& theVertex1,
                                                 const TopoDS_Vertex& theVertex2,
                                                 const TopoDS_Vertex& theVertex3,
                                                 const TopoDS_Vertex& theVertex4)
{
    Initialize(theVertex1, theVertex2, theVertex3, theVertex4);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepPoly_MakeQuadrangle::~BRepPoly_MakeQuadrangle()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepPoly_MakeQuadrangle::Initialize(const TopoDS_Vertex &theVertex1,
                                         const TopoDS_Vertex &theVertex2,
                                         const TopoDS_Vertex &theVertex3,
                                         const TopoDS_Vertex &theVertex4)
{
    myVertices.Resize(1, 4, Standard_False);
    myEdges.Resize(1, 4, Standard_False);
    myWires.Resize(1, 1, Standard_False);
    myFaces.Resize(1, 1, Standard_False);

    // setup vertices
    myVertices.SetValue(1, theVertex1);
    myVertices.SetValue(2, theVertex2);
    myVertices.SetValue(3, theVertex3);
    myVertices.SetValue(4, theVertex4);

    // build edge 1
    BRepLib_MakeEdge anEdgeBuilder1(theVertex1, theVertex2);
    if(!anEdgeBuilder1.IsDone()) {
        if(anEdgeBuilder1.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Edge anEdge1 = anEdgeBuilder1.Edge();
    myEdges.SetValue(1, anEdge1);

    // build edge 2
    BRepLib_MakeEdge anEdgeBuilder2(theVertex2, theVertex3);
    if(!anEdgeBuilder2.IsDone()) {
        if(anEdgeBuilder2.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Edge anEdge2 = anEdgeBuilder2.Edge();
    myEdges.SetValue(2, anEdge2);

    // build edge 3
    BRepLib_MakeEdge anEdgeBuilder3(theVertex3, theVertex4);
    if(!anEdgeBuilder3.IsDone()) {
        if(anEdgeBuilder3.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Edge anEdge3 = anEdgeBuilder3.Edge();
    myEdges.SetValue(3, anEdge3);

    // build edge 4
    BRepLib_MakeEdge anEdgeBuilder4(theVertex4, theVertex1);
    if(!anEdgeBuilder4.IsDone()) {
        if(anEdgeBuilder4.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Edge anEdge4 = anEdgeBuilder4.Edge();
    myEdges.SetValue(4, anEdge4);

    // build wire
    BRepLib_MakeWire aWireBuilder(anEdge1, anEdge2, anEdge3, anEdge4);
    if(!aWireBuilder.IsDone()) {
        myError = BRepPoly_WireError;
        return;
    }
    TopoDS_Wire aWire = aWireBuilder.Wire();
    myWires.SetValue(1, aWire);

    // build face
    BRepLib_MakeFace aFaceBuilder(aWire, Standard_True);
    if(!aFaceBuilder.IsDone()) {
        if(aFaceBuilder.Error() == BRepLib_NotPlanar) {
            myError = BRepPoly_FaceNotPlanarError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Face aFace = aFaceBuilder.Face();
    myFaces.SetValue(1, aFace);

    // set shape, internal state
    myShape = aFace;
    myIsDone = Standard_True;
}


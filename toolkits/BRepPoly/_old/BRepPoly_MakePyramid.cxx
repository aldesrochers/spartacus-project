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
#include <BRepPoly_MakePyramid.hxx>

// OpenCascade
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakeShell.hxx>
#include <BRepLib_MakeSolid.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepPrim_Builder.hxx>
#include <TopoDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepPoly_MakePyramid::BRepPoly_MakePyramid(const TopoDS_Vertex& theVertex1,
                                           const TopoDS_Vertex& theVertex2,
                                           const TopoDS_Vertex& theVertex3,
                                           const TopoDS_Vertex& theVertex4,
                                           const TopoDS_Vertex& theVertex5)
{
    Initialize(theVertex1, theVertex2, theVertex3, theVertex4, theVertex5);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepPoly_MakePyramid::~BRepPoly_MakePyramid()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepPoly_MakePyramid::Initialize(const TopoDS_Vertex &theVertex1,
                                      const TopoDS_Vertex &theVertex2,
                                      const TopoDS_Vertex &theVertex3,
                                      const TopoDS_Vertex &theVertex4,
                                      const TopoDS_Vertex &theVertex5)
{
    myVertices.Resize(1, 5, Standard_False);
    myEdges.Resize(1, 8, Standard_False);
    myWires.Resize(1, 5, Standard_False);
    myFaces.Resize(1, 5, Standard_False);
    myShells.Resize(1, 1, Standard_False);
    mySolids.Resize(1, 1, Standard_False);

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

    // build edge 5
    BRepLib_MakeEdge anEdgeBuilder5(theVertex1, theVertex5);
    if(!anEdgeBuilder5.IsDone()) {
        if(anEdgeBuilder5.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Edge anEdge5 = anEdgeBuilder5.Edge();
    myEdges.SetValue(5, anEdge5);

    // build edge 6
    BRepLib_MakeEdge anEdgeBuilder6(theVertex2, theVertex5);
    if(!anEdgeBuilder6.IsDone()) {
        if(anEdgeBuilder6.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Edge anEdge6 = anEdgeBuilder6.Edge();
    myEdges.SetValue(6, anEdge6);

    // build edge 7
    BRepLib_MakeEdge anEdgeBuilder7(theVertex3, theVertex5);
    if(!anEdgeBuilder7.IsDone()) {
        if(anEdgeBuilder7.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Edge anEdge7 = anEdgeBuilder7.Edge();
    myEdges.SetValue(7, anEdge7);

    // build edge 8
    BRepLib_MakeEdge anEdgeBuilder8(theVertex4, theVertex5);
    if(!anEdgeBuilder8.IsDone()) {
        if(anEdgeBuilder8.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Edge anEdge8 = anEdgeBuilder8.Edge();
    myEdges.SetValue(8, anEdge8);

    // build wire 1
    BRepLib_MakeWire aWireBuilder1(TopoDS::Edge(anEdge4.Reversed()),
                                   TopoDS::Edge(anEdge3.Reversed()),
                                   TopoDS::Edge(anEdge2.Reversed()),
                                   TopoDS::Edge(anEdge1.Reversed()));
    if(!aWireBuilder1.IsDone()) {
        myError = BRepPoly_WireError;
        return;
    }
    TopoDS_Wire aWire1 = aWireBuilder1.Wire();
    myWires.SetValue(1, aWire1);

    // build wire 2
    BRepLib_MakeWire aWireBuilder2(anEdge1, anEdge6, TopoDS::Edge(anEdge5.Reversed()));
    if(!aWireBuilder2.IsDone()) {
        myError = BRepPoly_WireError;
        return;
    }
    TopoDS_Wire aWire2 = aWireBuilder2.Wire();
    myWires.SetValue(2, aWire2);

    // build wire 3
    BRepLib_MakeWire aWireBuilder3(anEdge2, anEdge7, TopoDS::Edge(anEdge6.Reversed()));
    if(!aWireBuilder3.IsDone()) {
        myError = BRepPoly_WireError;
        return;
    }
    TopoDS_Wire aWire3 = aWireBuilder3.Wire();
    myWires.SetValue(3, aWire3);

    // build wire 4
    BRepLib_MakeWire aWireBuilder4(anEdge3, anEdge8, TopoDS::Edge(anEdge7.Reversed()));
    if(!aWireBuilder4.IsDone()) {
        myError = BRepPoly_WireError;
        return;
    }
    TopoDS_Wire aWire4 = aWireBuilder4.Wire();
    myWires.SetValue(4, aWire4);

    // build wire 5
    BRepLib_MakeWire aWireBuilder5(anEdge4, anEdge5, TopoDS::Edge(anEdge8.Reversed()));
    if(!aWireBuilder5.IsDone()) {
        myError = BRepPoly_WireError;
        return;
    }
    TopoDS_Wire aWire5 = aWireBuilder5.Wire();
    myWires.SetValue(5, aWire5);

    // build face 1
    BRepLib_MakeFace aFaceBuilder1(aWire1, Standard_True);
    if(!aFaceBuilder1.IsDone()) {
        if(aFaceBuilder1.Error() == BRepLib_NotPlanar) {
            myError = BRepPoly_FaceNotPlanarError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Face aFace1 = aFaceBuilder1.Face();
    myFaces.SetValue(1, aFace1);

    // build face 2
    BRepLib_MakeFace aFaceBuilder2(aWire2, Standard_True);
    if(!aFaceBuilder2.IsDone()) {
        if(aFaceBuilder2.Error() == BRepLib_NotPlanar) {
            myError = BRepPoly_FaceNotPlanarError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Face aFace2 = aFaceBuilder2.Face();
    myFaces.SetValue(2, aFace2);

    // build face 3
    BRepLib_MakeFace aFaceBuilder3(aWire3, Standard_True);
    if(!aFaceBuilder3.IsDone()) {
        if(aFaceBuilder3.Error() == BRepLib_NotPlanar) {
            myError = BRepPoly_FaceNotPlanarError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Face aFace3 = aFaceBuilder3.Face();
    myFaces.SetValue(3, aFace3);

    // build face 4
    BRepLib_MakeFace aFaceBuilder4(aWire4, Standard_True);
    if(!aFaceBuilder4.IsDone()) {
        if(aFaceBuilder4.Error() == BRepLib_NotPlanar) {
            myError = BRepPoly_FaceNotPlanarError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Face aFace4 = aFaceBuilder4.Face();
    myFaces.SetValue(4, aFace4);

    // build face 5
    BRepLib_MakeFace aFaceBuilder5(aWire5, Standard_True);
    if(!aFaceBuilder5.IsDone()) {
        if(aFaceBuilder5.Error() == BRepLib_NotPlanar) {
            myError = BRepPoly_FaceNotPlanarError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Face aFace5 = aFaceBuilder5.Face();
    myFaces.SetValue(5, aFace5);

    // build shell
    TopoDS_Shell aShell;
    BRepPrim_Builder aBuilder;
    aBuilder.MakeShell(aShell);
    aBuilder.AddShellFace(aShell, aFace1);
    aBuilder.AddShellFace(aShell, aFace2);
    aBuilder.AddShellFace(aShell, aFace3);
    aBuilder.AddShellFace(aShell, aFace4);
    aBuilder.AddShellFace(aShell, aFace5);
    aBuilder.CompleteShell(aShell);
    myShells.SetValue(1, aShell);

    // build solid
    BRepLib_MakeSolid aSolidBuilder(aShell);
    if(!aSolidBuilder.IsDone()) {
        myError = BRepPoly_SolidError;
        return;
    }
    TopoDS_Solid aSolid = aSolidBuilder.Solid();
    mySolids.SetValue(1, aSolid);

    // set shape, internal state
    myShape = aSolid;
    myIsDone = Standard_True;
}


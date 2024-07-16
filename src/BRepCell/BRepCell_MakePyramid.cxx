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
#include <BRepCell_MakePyramid.hxx>

// OpenCascade
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_MakeSolid.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepPrim_Builder.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakePyramid::BRepCell_MakePyramid(const TopoDS_Vertex &theVertex1,
                                           const TopoDS_Vertex &theVertex2,
                                           const TopoDS_Vertex &theVertex3,
                                           const TopoDS_Vertex &theVertex4,
                                           const TopoDS_Vertex &theVertex5)
{
    Initialize(theVertex1, theVertex2, theVertex3, theVertex4, theVertex5);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakePyramid::~BRepCell_MakePyramid()
{

}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
BRepCell_PyramidError BRepCell_MakePyramid::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakePyramid::Initialize(const TopoDS_Vertex &theVertex1,
                                      const TopoDS_Vertex &theVertex2,
                                      const TopoDS_Vertex &theVertex3,
                                      const TopoDS_Vertex &theVertex4,
                                      const TopoDS_Vertex &theVertex5)
{
    // build edge 1
    BRepBuilderAPI_MakeEdge anEdgeBuilder1(theVertex1, theVertex2);
    if(!anEdgeBuilder1.IsDone()) {
        myError = BRepCell_PyramidEdge1Error;
        return;
    }
    TopoDS_Edge anEdge1 = anEdgeBuilder1.Edge();

    // build edge 2
    BRepBuilderAPI_MakeEdge anEdgeBuilder2(theVertex2, theVertex3);
    if(!anEdgeBuilder2.IsDone()) {
        myError = BRepCell_PyramidEdge2Error;
        return;
    }
    TopoDS_Edge anEdge2 = anEdgeBuilder2.Edge();

    // build edge 3
    BRepBuilderAPI_MakeEdge anEdgeBuilder3(theVertex3, theVertex4);
    if(!anEdgeBuilder3.IsDone()) {
        myError = BRepCell_PyramidEdge3Error;
        return;
    }
    TopoDS_Edge anEdge3 = anEdgeBuilder3.Edge();

    // build edge 4
    BRepBuilderAPI_MakeEdge anEdgeBuilder4(theVertex4, theVertex1);
    if(!anEdgeBuilder4.IsDone()) {
        myError = BRepCell_PyramidEdge4Error;
        return;
    }
    TopoDS_Edge anEdge4 = anEdgeBuilder4.Edge();

    // build edge 5
    BRepBuilderAPI_MakeEdge anEdgeBuilder5(theVertex1, theVertex5);
    if(!anEdgeBuilder5.IsDone()) {
        myError = BRepCell_PyramidEdge5Error;
        return;
    }
    TopoDS_Edge anEdge5 = anEdgeBuilder5.Edge();

    // build edge 6
    BRepBuilderAPI_MakeEdge anEdgeBuilder6(theVertex2, theVertex5);
    if(!anEdgeBuilder6.IsDone()) {
        myError = BRepCell_PyramidEdge6Error;
        return;
    }
    TopoDS_Edge anEdge6 = anEdgeBuilder6.Edge();

    // build edge 7
    BRepBuilderAPI_MakeEdge anEdgeBuilder7(theVertex3, theVertex5);
    if(!anEdgeBuilder7.IsDone()) {
        myError = BRepCell_PyramidEdge7Error;
        return;
    }
    TopoDS_Edge anEdge7 = anEdgeBuilder7.Edge();

    // build edge 8
    BRepBuilderAPI_MakeEdge anEdgeBuilder8(theVertex4, theVertex5);
    if(!anEdgeBuilder8.IsDone()) {
        myError = BRepCell_PyramidEdge8Error;
        return;
    }
    TopoDS_Edge anEdge8 = anEdgeBuilder8.Edge();

    // build wire 1
    BRepBuilderAPI_MakeWire aWireBuilder1(TopoDS::Edge(anEdge4.Reversed()), TopoDS::Edge(anEdge3.Reversed()), TopoDS::Edge(anEdge2.Reversed()), TopoDS::Edge(anEdge1.Reversed()));
    if(!aWireBuilder1.IsDone()) {
        myError = BRepCell_PyramidWire1Error;
        return;
    }
    TopoDS_Wire aWire1 = aWireBuilder1.Wire();

    // build wire 2
    BRepBuilderAPI_MakeWire aWireBuilder2(anEdge1, anEdge6, TopoDS::Edge(anEdge5.Reversed()));
    if(!aWireBuilder2.IsDone()) {
        myError = BRepCell_PyramidWire2Error;
        return;
    }
    TopoDS_Wire aWire2 = aWireBuilder2.Wire();

    // build wire 3
    BRepBuilderAPI_MakeWire aWireBuilder3(anEdge2, anEdge7, TopoDS::Edge(anEdge6.Reversed()));
    if(!aWireBuilder3.IsDone()) {
        myError = BRepCell_PyramidWire3Error;
        return;
    }
    TopoDS_Wire aWire3 = aWireBuilder3.Wire();

    // build wire 4
    BRepBuilderAPI_MakeWire aWireBuilder4(anEdge3, anEdge8, TopoDS::Edge(anEdge7.Reversed()));
    if(!aWireBuilder4.IsDone()) {
        myError = BRepCell_PyramidWire4Error;
        return;
    }
    TopoDS_Wire aWire4 = aWireBuilder4.Wire();

    // build wire 5
    BRepBuilderAPI_MakeWire aWireBuilder5(anEdge4, anEdge5, TopoDS::Edge(anEdge8.Reversed()));
    if(!aWireBuilder5.IsDone()) {
        myError = BRepCell_PyramidWire5Error;
        return;
    }
    TopoDS_Wire aWire5 = aWireBuilder5.Wire();

    // build face 1
    BRepBuilderAPI_MakeFace aFaceBuilder1(aWire1, Standard_True);
    if(!aFaceBuilder1.IsDone()) {
        myError = BRepCell_PyramidFace1Error;
        return;
    }
    TopoDS_Face aFace1 = aFaceBuilder1.Face();

    // build face 2
    BRepBuilderAPI_MakeFace aFaceBuilder2(aWire2, Standard_True);
    if(!aFaceBuilder2.IsDone()) {
        myError = BRepCell_PyramidFace2Error;
        return;
    }
    TopoDS_Face aFace2 = aFaceBuilder2.Face();

    // build face 3
    BRepBuilderAPI_MakeFace aFaceBuilder3(aWire3, Standard_True);
    if(!aFaceBuilder3.IsDone()) {
        myError = BRepCell_PyramidFace3Error;
        return;
    }
    TopoDS_Face aFace3 = aFaceBuilder3.Face();

    // build face 4
    BRepBuilderAPI_MakeFace aFaceBuilder4(aWire4, Standard_True);
    if(!aFaceBuilder4.IsDone()) {
        myError = BRepCell_PyramidFace4Error;
        return;
    }
    TopoDS_Face aFace4 = aFaceBuilder4.Face();

    // build face 5
    BRepBuilderAPI_MakeFace aFaceBuilder5(aWire5, Standard_True);
    if(!aFaceBuilder5.IsDone()) {
        myError = BRepCell_PyramidFace5Error;
        return;
    }
    TopoDS_Face aFace5 = aFaceBuilder5.Face();

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

    // build solid
    BRepBuilderAPI_MakeSolid aSolidBuilder(aShell);
    if(!aSolidBuilder.IsDone()) {
        myError = BRepCell_PyramidSolidError;
        return;
    }
    TopoDS_Solid aSolid = aSolidBuilder.Solid();

    // populate internal containers
    myEdges.Add(anEdge1);
    myEdges.Add(anEdge2);
    myEdges.Add(anEdge3);
    myEdges.Add(anEdge4);
    myEdges.Add(anEdge5);
    myEdges.Add(anEdge6);
    myEdges.Add(anEdge7);
    myEdges.Add(anEdge8);
    myFaces.Add(aFace1);
    myFaces.Add(aFace2);
    myFaces.Add(aFace3);
    myFaces.Add(aFace4);
    myFaces.Add(aFace5);
    myShells.Add(aShell);
    mySolids.Add(aSolid);
    myVertices.Add(theVertex1);
    myVertices.Add(theVertex2);
    myVertices.Add(theVertex3);
    myVertices.Add(theVertex4);
    myVertices.Add(theVertex5);
    myWires.Add(aWire1);
    myWires.Add(aWire2);
    myWires.Add(aWire3);
    myWires.Add(aWire4);
    myWires.Add(aWire5);
    myShape = aSolid;

    myError = BRepCell_PyramidNoError;
    SetDone();
}

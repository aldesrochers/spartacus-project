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
#include <BRepCell_MakeTetrahedron.hxx>

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
BRepCell_MakeTetrahedron::BRepCell_MakeTetrahedron(const TopoDS_Vertex &theVertex1,
                                                   const TopoDS_Vertex &theVertex2,
                                                   const TopoDS_Vertex &theVertex3,
                                                   const TopoDS_Vertex &theVertex4)
{
    Initialize(theVertex1, theVertex2, theVertex3, theVertex4);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeTetrahedron::~BRepCell_MakeTetrahedron()
{

}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
BRepCell_TetrahedronError BRepCell_MakeTetrahedron::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeTetrahedron::Initialize(const TopoDS_Vertex &theVertex1,
                                          const TopoDS_Vertex &theVertex2,
                                          const TopoDS_Vertex &theVertex3,
                                          const TopoDS_Vertex &theVertex4)
{
    // build edge 1
    BRepBuilderAPI_MakeEdge anEdgeBuilder1(theVertex1, theVertex2);
    if(!anEdgeBuilder1.IsDone()) {
        myError = BRepCell_TetrahedronEdge1Error;
        return;
    }
    TopoDS_Edge anEdge1 = anEdgeBuilder1.Edge();

    // build edge 2
    BRepBuilderAPI_MakeEdge anEdgeBuilder2(theVertex2, theVertex3);
    if(!anEdgeBuilder2.IsDone()) {
        myError = BRepCell_TetrahedronEdge2Error;
        return;
    }
    TopoDS_Edge anEdge2 = anEdgeBuilder2.Edge();

    // build edge 3
    BRepBuilderAPI_MakeEdge anEdgeBuilder3(theVertex3, theVertex1);
    if(!anEdgeBuilder3.IsDone()) {
        myError = BRepCell_TetrahedronEdge3Error;
        return;
    }
    TopoDS_Edge anEdge3 = anEdgeBuilder3.Edge();

    // build edge 4
    BRepBuilderAPI_MakeEdge anEdgeBuilder4(theVertex1, theVertex4);
    if(!anEdgeBuilder4.IsDone()) {
        myError = BRepCell_TetrahedronEdge4Error;
        return;
    }
    TopoDS_Edge anEdge4 = anEdgeBuilder4.Edge();

    // build edge 5
    BRepBuilderAPI_MakeEdge anEdgeBuilder5(theVertex2, theVertex4);
    if(!anEdgeBuilder5.IsDone()) {
        myError = BRepCell_TetrahedronEdge5Error;
        return;
    }
    TopoDS_Edge anEdge5 = anEdgeBuilder5.Edge();

    // build edge 6
    BRepBuilderAPI_MakeEdge anEdgeBuilder6(theVertex3, theVertex4);
    if(!anEdgeBuilder6.IsDone()) {
        myError = BRepCell_TetrahedronEdge6Error;
        return;
    }
    TopoDS_Edge anEdge6 = anEdgeBuilder6.Edge();

    // build wire 1
    BRepBuilderAPI_MakeWire aWireBuilder1(TopoDS::Edge(anEdge3.Reversed()), TopoDS::Edge(anEdge2.Reversed()), TopoDS::Edge(anEdge1.Reversed()));
    if(!aWireBuilder1.IsDone()) {
        myError = BRepCell_TetrahedronWire1Error;
        return;
    }
    TopoDS_Wire aWire1 = aWireBuilder1.Wire();

    // build wire 2
    BRepBuilderAPI_MakeWire aWireBuilder2(anEdge1, anEdge5, TopoDS::Edge(anEdge4.Reversed()));
    if(!aWireBuilder2.IsDone()) {
        myError = BRepCell_TetrahedronWire2Error;
        return;
    }
    TopoDS_Wire aWire2 = aWireBuilder2.Wire();

    // build wire 3
    BRepBuilderAPI_MakeWire aWireBuilder3(anEdge2, anEdge6, TopoDS::Edge(anEdge5.Reversed()));
    if(!aWireBuilder3.IsDone()) {
        myError = BRepCell_TetrahedronWire3Error;
        return;
    }
    TopoDS_Wire aWire3 = aWireBuilder3.Wire();

    // build wire 4
    BRepBuilderAPI_MakeWire aWireBuilder4(anEdge3, anEdge4, TopoDS::Edge(anEdge6.Reversed()));
    if(!aWireBuilder4.IsDone()) {
        myError = BRepCell_TetrahedronWire4Error;
        return;
    }
    TopoDS_Wire aWire4 = aWireBuilder4.Wire();

    // build face 1
    BRepBuilderAPI_MakeFace aFaceBuilder1(aWire1, Standard_True);
    if(!aFaceBuilder1.IsDone()) {
        myError = BRepCell_TetrahedronFace1Error;
        return;
    }
    TopoDS_Face aFace1 = aFaceBuilder1.Face();

    // build face 2
    BRepBuilderAPI_MakeFace aFaceBuilder2(aWire2, Standard_True);
    if(!aFaceBuilder2.IsDone()) {
        myError = BRepCell_TetrahedronFace2Error;
        return;
    }
    TopoDS_Face aFace2 = aFaceBuilder2.Face();

    // build face 3
    BRepBuilderAPI_MakeFace aFaceBuilder3(aWire3, Standard_True);
    if(!aFaceBuilder3.IsDone()) {
        myError = BRepCell_TetrahedronFace3Error;
        return;
    }
    TopoDS_Face aFace3 = aFaceBuilder3.Face();

    // build face 4
    BRepBuilderAPI_MakeFace aFaceBuilder4(aWire4, Standard_True);
    if(!aFaceBuilder4.IsDone()) {
        myError = BRepCell_TetrahedronFace4Error;
        return;
    }
    TopoDS_Face aFace4 = aFaceBuilder4.Face();

    // build shell
    TopoDS_Shell aShell;
    BRepPrim_Builder aBuilder;
    aBuilder.MakeShell(aShell);
    aBuilder.AddShellFace(aShell, aFace1);
    aBuilder.AddShellFace(aShell, aFace2);
    aBuilder.AddShellFace(aShell, aFace3);
    aBuilder.AddShellFace(aShell, aFace4);
    aBuilder.CompleteShell(aShell);

    // build solid
    BRepBuilderAPI_MakeSolid aSolidBuilder(aShell);
    if(!aSolidBuilder.IsDone()) {
        myError = BRepCell_TetrahedronSolidError;
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
    myFaces.Add(aFace1);
    myFaces.Add(aFace2);
    myFaces.Add(aFace3);
    myFaces.Add(aFace4);
    myShells.Add(aShell);
    mySolids.Add(aSolid);
    myVertices.Add(theVertex1);
    myVertices.Add(theVertex2);
    myVertices.Add(theVertex3);
    myVertices.Add(theVertex4);
    myWires.Add(aWire1);
    myWires.Add(aWire2);
    myWires.Add(aWire3);
    myWires.Add(aWire4);
    myShape = aSolid;

    myError = BRepCell_TetrahedronNoError;
    SetDone();
}

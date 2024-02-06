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
#include <BRepCell_MakeLinearLine2N.hxx>
#include <BRepCell_MakeLinearQuadrangle4N.hxx>
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
BRepCell_MakeLinearQuadrangle4N::BRepCell_MakeLinearQuadrangle4N(const gp_Pnt& thePoint1,
                                                                 const gp_Pnt& thePoint2,
                                                                 const gp_Pnt& thePoint3,
                                                                 const gp_Pnt& thePoint4)
{
    Initialize(thePoint1, thePoint2, thePoint3, thePoint4);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearQuadrangle4N::BRepCell_MakeLinearQuadrangle4N(const TopoDS_Vertex &theVertex1,
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
BRepCell_MakeLinearQuadrangle4N::~BRepCell_MakeLinearQuadrangle4N()
{

}

// ============================================================================
/*!
 *  \brief Face()
*/
// ============================================================================
const TopoDS_Face& BRepCell_MakeLinearQuadrangle4N::Face() const
{
    return TopoDS::Face(Shape());
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearQuadrangle4N::Initialize(const gp_Pnt &thePoint1,
                                                 const gp_Pnt &thePoint2,
                                                 const gp_Pnt &thePoint3,
                                                 const gp_Pnt &thePoint4)
{
    TopoDS_Vertex aVertex1 = BRepLib_MakeVertex(thePoint1).Vertex();
    TopoDS_Vertex aVertex2 = BRepLib_MakeVertex(thePoint2).Vertex();
    TopoDS_Vertex aVertex3 = BRepLib_MakeVertex(thePoint3).Vertex();
    TopoDS_Vertex aVertex4 = BRepLib_MakeVertex(thePoint4).Vertex();
    Initialize(aVertex1, aVertex2, aVertex3, aVertex4);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearQuadrangle4N::Initialize(const TopoDS_Vertex &theVertex1,
                                                 const TopoDS_Vertex &theVertex2,
                                                 const TopoDS_Vertex &theVertex3,
                                                 const TopoDS_Vertex &theVertex4)
{
    // resize internal containers
    myVertices.Resize(1, 4, Standard_False);
    myEdges.Resize(1, 4, Standard_False);
    myWires.Resize(1, 1, Standard_False);
    myFaces.Resize(1, 1, Standard_False);

    // define vertices
    myVertices.SetValue(1, theVertex1);
    myVertices.SetValue(2, theVertex2);
    myVertices.SetValue(3, theVertex3);
    myVertices.SetValue(4, theVertex4);

    // make edge 1
    BRepCell_MakeLinearLine2N anEdgeBuilder1(theVertex1, theVertex2);
    if(!anEdgeBuilder1.IsDone()) {
        SetError(anEdgeBuilder1.Error());
        return;
    }
    TopoDS_Edge anEdge1 = anEdgeBuilder1.Edge();
    myEdges.SetValue(1, anEdge1);

    // make edge 2
    BRepCell_MakeLinearLine2N anEdgeBuilder2(theVertex2, theVertex3);
    if(!anEdgeBuilder2.IsDone()) {
        SetError(anEdgeBuilder2.Error());
        return;
    }
    TopoDS_Edge anEdge2 = anEdgeBuilder2.Edge();
    myEdges.SetValue(2, anEdge2);

    // make edge 3
    BRepCell_MakeLinearLine2N anEdgeBuilder3(theVertex3, theVertex4);
    if(!anEdgeBuilder3.IsDone()) {
        SetError(anEdgeBuilder3.Error());
        return;
    }
    TopoDS_Edge anEdge3 = anEdgeBuilder3.Edge();
    myEdges.SetValue(3, anEdge3);

    // make edge 4
    BRepCell_MakeLinearLine2N anEdgeBuilder4(theVertex4, theVertex1);
    if(!anEdgeBuilder4.IsDone()) {
        SetError(anEdgeBuilder4.Error());
        return;
    }
    TopoDS_Edge anEdge4 = anEdgeBuilder4.Edge();
    myEdges.SetValue(4, anEdge4);

    // wire
    BRepLib_MakeWire aWireBuilder(anEdge1, anEdge2, anEdge3, anEdge4);
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

// ============================================================================
/*!
 *  \brief operator TopoDS_Face()
*/
// ============================================================================
BRepCell_MakeLinearQuadrangle4N::operator TopoDS_Face()
{
    return Face();
}

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
#include <BRepCell_MakeLinearLine.hxx>
#include <BRepCell_MakeLinearTriangle.hxx>
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
BRepCell_MakeLinearTriangle::BRepCell_MakeLinearTriangle(const gp_Pnt& thePoint1,
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
BRepCell_MakeLinearTriangle::BRepCell_MakeLinearTriangle(const TopoDS_Vertex &theVertex1,
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
BRepCell_MakeLinearTriangle::~BRepCell_MakeLinearTriangle()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearTriangle::Initialize(const gp_Pnt &thePoint1,
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
void BRepCell_MakeLinearTriangle::Initialize(const TopoDS_Vertex &theVertex1,
                                             const TopoDS_Vertex &theVertex2,
                                             const TopoDS_Vertex &theVertex3)
{
    // resize internal containers
    ResizeVertices(3);
    ResizeEdges(3);

    // setup vertices
    SetVertex(1, theVertex1);
    SetVertex(2, theVertex2);
    SetVertex(3, theVertex3);

    // make edge 1
    BRepCell_MakeLinearLine aLineBuilder1(theVertex1, theVertex2);
    if(!aLineBuilder1.IsDone()) {
        SetError(aLineBuilder1.Error());
        return;
    }
    TopoDS_Edge anEdge1 = aLineBuilder1.Edge();
    SetEdge(1, anEdge1);

    // make edge 2
    BRepCell_MakeLinearLine aLineBuilder2(theVertex2, theVertex3);
    if(!aLineBuilder2.IsDone()) {
        SetError(aLineBuilder2.Error());
        return;
    }
    TopoDS_Edge anEdge2 = aLineBuilder2.Edge();
    SetEdge(2, anEdge2);

    // make edge 3
    BRepCell_MakeLinearLine aLineBuilder3(theVertex3, theVertex1);
    if(!aLineBuilder3.IsDone()) {
        SetError(aLineBuilder3.Error());
        return;
    }
    TopoDS_Edge anEdge3 = aLineBuilder3.Edge();
    SetEdge(3, anEdge3);

    // build wire
    BRepLib_MakeWire aWireBuilder(anEdge1, anEdge2, anEdge3);
    if(!aWireBuilder.IsDone()) {
        SetError(BRepCell_UnknownError);
        return;
    }
    TopoDS_Wire aWire = aWireBuilder.Wire();
    myWire = aWire;

    // build face
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

    // set shape
    SetShape(aFace);
    SetDone();
}

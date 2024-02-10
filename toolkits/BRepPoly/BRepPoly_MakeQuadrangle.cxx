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
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeWire.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepPoly_MakeQuadrangle::BRepPoly_MakeQuadrangle(const gp_Pnt& thePoint1,
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
void BRepPoly_MakeQuadrangle::Initialize(const gp_Pnt &thePoint1,
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
void BRepPoly_MakeQuadrangle::Initialize(const TopoDS_Vertex &theVertex1,
                                         const TopoDS_Vertex &theVertex2,
                                         const TopoDS_Vertex &theVertex3,
                                         const TopoDS_Vertex &theVertex4)
{
    // initialize vertices
    myVertex1 = theVertex1;
    myVertex2 = theVertex2;
    myVertex3 = theVertex3;
    myVertex4 = theVertex4;

    // build edge 1
    BRepLib_MakeEdge anEdgeBuilder1(myVertex1, myVertex2);
    if(!anEdgeBuilder1.IsDone()) {
        if(anEdgeBuilder1.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    myEdge1 = anEdgeBuilder1.Edge();

    // build edge 2
    BRepLib_MakeEdge anEdgeBuilder2(myVertex2, myVertex3);
    if(!anEdgeBuilder2.IsDone()) {
        if(anEdgeBuilder2.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    myEdge2 = anEdgeBuilder2.Edge();

    // build edge 3
    BRepLib_MakeEdge anEdgeBuilder3(myVertex3, myVertex4);
    if(!anEdgeBuilder3.IsDone()) {
        if(anEdgeBuilder3.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    myEdge3 = anEdgeBuilder3.Edge();

    // build edge 4
    BRepLib_MakeEdge anEdgeBuilder4(myVertex4, myVertex1);
    if(!anEdgeBuilder4.IsDone()) {
        if(anEdgeBuilder4.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    myEdge4 = anEdgeBuilder4.Edge();

    // build wire
    BRepLib_MakeWire aWireBuilder(myEdge1, myEdge2, myEdge3, myEdge4);
    if(!aWireBuilder.IsDone()) {
        myError = BRepPoly_UnknownError;
        return;
    }
    myWire = aWireBuilder.Wire();

    // build face
    BRepLib_MakeFace aFaceBuilder(myWire);
    if(!aFaceBuilder.IsDone()) {
        if(aFaceBuilder.Error() == BRepLib_NotPlanar) {
            myError = BRepPoly_FaceNotPlanarError;
        } else {
            myError = BRepPoly_NoError;
        }
        return;
    }
    myFace = aFaceBuilder.Face();

    myIsDone = Standard_True;
}


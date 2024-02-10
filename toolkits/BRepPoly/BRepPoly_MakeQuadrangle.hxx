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


#ifndef __BRepPoly_MakeQuadrangle_hxx__
#define __BRepPoly_MakeQuadrangle_hxx__


// Spartacus
#include <BRepPoly_MakeShape.hxx>

// OpenCascade
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>


// ============================================================================
/*!
 *  \brief BRepPoly_MakeQuadrangle
*/
// ============================================================================
class BRepPoly_MakeQuadrangle : public BRepPoly_MakeShape
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT BRepPoly_MakeQuadrangle(const gp_Pnt& thePoint1,
                                            const gp_Pnt& thePoint2,
                                            const gp_Pnt& thePoint3,
                                            const gp_Pnt& thePoint4);
    Standard_EXPORT BRepPoly_MakeQuadrangle(const TopoDS_Vertex& theVertex1,
                                            const TopoDS_Vertex& theVertex2,
                                            const TopoDS_Vertex& theVertex3,
                                            const TopoDS_Vertex& theVertex4);
    // destructors
    Standard_EXPORT ~BRepPoly_MakeQuadrangle();

public:

    Standard_EXPORT const TopoDS_Edge&      Edge1() const {return myEdge1;}
    Standard_EXPORT const TopoDS_Edge&      Edge2() const {return myEdge2;}
    Standard_EXPORT const TopoDS_Edge&      Edge3() const {return myEdge3;}
    Standard_EXPORT const TopoDS_Edge&      Edge4() const {return myEdge4;}
    Standard_EXPORT const TopoDS_Face&      Face() const {return myFace;}
    Standard_EXPORT const TopoDS_Vertex&    Vertex1() const {return myVertex1;}
    Standard_EXPORT const TopoDS_Vertex&    Vertex2() const {return myVertex2;}
    Standard_EXPORT const TopoDS_Vertex&    Vertex3() const {return myVertex3;}
    Standard_EXPORT const TopoDS_Vertex&    Vertex4() const {return myVertex4;}
    Standard_EXPORT const TopoDS_Wire&      Wire() const {return myWire;}

public:

    Standard_EXPORT operator                TopoDS_Face() {return Face();}

protected:

    Standard_EXPORT void        Initialize(const gp_Pnt& thePoint1,
                                           const gp_Pnt& thePoint2,
                                           const gp_Pnt& thePoint3,
                                           const gp_Pnt& thePoint4);

    Standard_EXPORT void        Initialize(const TopoDS_Vertex& theVertex1,
                                           const TopoDS_Vertex& theVertex2,
                                           const TopoDS_Vertex& theVertex3,
                                           const TopoDS_Vertex& theVertex4);

private:

    TopoDS_Edge         myEdge1;
    TopoDS_Edge         myEdge2;
    TopoDS_Edge         myEdge3;
    TopoDS_Edge         myEdge4;
    TopoDS_Face         myFace;
    TopoDS_Vertex       myVertex1;
    TopoDS_Vertex       myVertex2;
    TopoDS_Vertex       myVertex3;
    TopoDS_Vertex       myVertex4;
    TopoDS_Wire         myWire;

};


#endif // __BRepPoly_MakeQuadrangle_hxx__

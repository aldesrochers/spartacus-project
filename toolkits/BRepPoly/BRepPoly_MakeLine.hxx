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


#ifndef __BRepPoly_MakeLine_hxx__
#define __BRepPoly_MakeLine_hxx__


// Spartacus
#include <BRepPoly_MakeShape.hxx>

// OpenCascade
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>


// ============================================================================
/*!
 *  \brief BRepPoly_MakeLine
*/
// ============================================================================
class BRepPoly_MakeLine : public BRepPoly_MakeShape
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT BRepPoly_MakeLine(const gp_Pnt& thePoint1,
                                      const gp_Pnt& thePoint2);
    Standard_EXPORT BRepPoly_MakeLine(const TopoDS_Vertex& theVertex1,
                                      const TopoDS_Vertex& theVertex2);
    // destructors
    Standard_EXPORT ~BRepPoly_MakeLine();

public:

    Standard_EXPORT const TopoDS_Edge&      Edge() const {return myEdge;}
    Standard_EXPORT const TopoDS_Vertex&    Vertex1() const {return myVertex1;}
    Standard_EXPORT const TopoDS_Vertex&    Vertex2() const {return myVertex2;}

public:

    Standard_EXPORT operator                TopoDS_Edge() const {return Edge();}

protected:

    Standard_EXPORT void        Initialize(const gp_Pnt& thePoint1,
                                           const gp_Pnt& thePoint2);

    Standard_EXPORT void        Initialize(const TopoDS_Vertex& theVertex1,
                                           const TopoDS_Vertex& theVertex2);

private:

    TopoDS_Edge         myEdge;
    TopoDS_Vertex       myVertex1;
    TopoDS_Vertex       myVertex2;

};


#endif // __BRepPoly_MakeLine_hxx__

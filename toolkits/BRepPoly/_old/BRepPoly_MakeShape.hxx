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


#ifndef __BRepPoly_MakeShape_hxx__
#define __BRepPoly_MakeShape_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>
#include <TopTools_Array1OfShape.hxx>

// Spartacus
#include <BRepPoly_Error.hxx>


// ============================================================================
/*!
 *  \brief BRepPoly_MakeShape
*/
// ============================================================================
class BRepPoly_MakeShape
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT BRepPoly_MakeShape();
    // destructors
    Standard_EXPORT ~BRepPoly_MakeShape();

public:

    virtual Standard_EXPORT void            Build();

public:

    Standard_EXPORT void                    Check() const;
    Standard_EXPORT const TopoDS_Edge&      Edge(const Standard_Integer theIndex) const;
    Standard_EXPORT BRepPoly_Error          Error() const;
    Standard_EXPORT const TopoDS_Face&      Face(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Boolean        IsDone() const;
    Standard_EXPORT Standard_Integer        NbEdges() const;
    Standard_EXPORT Standard_Integer        NbFaces() const;
    Standard_EXPORT Standard_Integer        NbShells() const;
    Standard_EXPORT Standard_Integer        NbSolids() const;
    Standard_EXPORT Standard_Integer        NbVertices() const;
    Standard_EXPORT Standard_Integer        NbWires() const;
    Standard_EXPORT const TopoDS_Shape&     Shape() const;
    Standard_EXPORT const TopoDS_Shell&     Shell(const Standard_Integer theIndex) const;
    Standard_EXPORT const TopoDS_Solid&     Solid(const Standard_Integer theIndex) const;
    Standard_EXPORT const TopoDS_Vertex&    Vertex(const Standard_Integer theIndex) const;
    Standard_EXPORT const TopoDS_Wire&      Wire(const Standard_Integer theIndex) const;

public:

    Standard_EXPORT operator                TopoDS_Shape();

protected:

    Standard_EXPORT void                    SetDone();
    Standard_EXPORT void                    SetNotDone();

protected:

    BRepPoly_Error              myError;
    Standard_Boolean            myIsDone;
    TopTools_Array1OfShape      myEdges;
    TopTools_Array1OfShape      myFaces;
    TopoDS_Shape                myShape;
    TopTools_Array1OfShape      myShells;
    TopTools_Array1OfShape      mySolids;
    TopTools_Array1OfShape      myVertices;
    TopTools_Array1OfShape      myWires;

};


#endif // __BRepPoly_MakeShape_hxx__

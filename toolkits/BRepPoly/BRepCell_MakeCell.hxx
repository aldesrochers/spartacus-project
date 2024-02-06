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


#ifndef __BRepCell_MakeCell_hxx__
#define __BRepCell_MakeCell_hxx__

// OpenCascade
#include <BRepCell_Command.hxx>
#include <BRepCell_Error.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>
#include <TopTools_Array1OfShape.hxx>

// ============================================================================
/*!
 *  \brief BRepCell_MakeCell
*/
// ============================================================================
class BRepCell_MakeCell : public BRepCell_Command
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT BRepCell_MakeCell();
    // destructors
    Standard_EXPORT ~BRepCell_MakeCell();

public:

    virtual Standard_EXPORT void            Build();

public:

    Standard_EXPORT const TopoDS_Edge&      Edge(const Standard_Integer theIndex) const;
    Standard_EXPORT const TopoDS_Face&      Face(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer        NbEdges() const;
    Standard_EXPORT Standard_Integer        NbFaces() const;
    Standard_EXPORT Standard_Integer        NbShells() const;
    Standard_EXPORT Standard_Integer        NbSolids() const;
    Standard_EXPORT Standard_Integer        NbVertices() const;
    Standard_EXPORT Standard_Integer        NbWires() const;
    Standard_EXPORT const TopoDS_Shell&     Shell(const Standard_Integer theIndex) const;
    Standard_EXPORT const TopoDS_Solid&     Solid(const Standard_Integer theIndex) const;
    Standard_EXPORT const TopoDS_Vertex&    Vertex(const Standard_Integer theIndex) const;
    Standard_EXPORT const TopoDS_Wire&      Wire(const Standard_Integer theIndex) const;

public:

    Standard_EXPORT BRepCell_Error          Error() const;
    Standard_EXPORT const TopoDS_Shape&     Shape() const;

public:

    Standard_EXPORT operator                TopoDS_Shape();

protected:

    Standard_EXPORT void                    SetError(const BRepCell_Error theError);
    Standard_EXPORT void                    SetShape(const TopoDS_Shape& theShape);

protected:

    TopTools_Array1OfShape      myEdges;
    TopTools_Array1OfShape      myFaces;
    TopTools_Array1OfShape      myShells;
    TopTools_Array1OfShape      mySolids;
    TopTools_Array1OfShape      myVertices;
    TopTools_Array1OfShape      myWires;

protected:

    BRepCell_Error              myError;
    TopoDS_Shape                myShape;

};


#endif // __BRepCell_MakeCell_hxx__

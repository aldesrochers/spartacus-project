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


#ifndef __Cell_Shape_hxx__
#define __Cell_Shape_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>
#include <TopTools_SequenceOfShape.hxx>

// Spartacus
#include <TColgp_SequenceOfPnt.hxx>


// Forward declarations
class Cell_Shape;

// Handles
DEFINE_STANDARD_HANDLE(Cell_Shape, Standard_Transient)


// ============================================================================
/*!
 *  \brief Cell_Shape
*/
// ============================================================================
class Cell_Shape : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT Cell_Shape();
    // destructors
    Standard_EXPORT ~Cell_Shape();

public:

    virtual Standard_EXPORT Standard_Boolean    Build() = 0;

public:

    Standard_EXPORT void                    Clear();
    Standard_EXPORT const TopoDS_Edge&      Edge(const Standard_Integer theIndex) const;
    Standard_EXPORT const TopoDS_Face&      Face(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Boolean        IsDegenerated() const;
    Standard_EXPORT Standard_Boolean        IsModified() const;
    Standard_EXPORT Standard_Integer        NbEdges() const;
    Standard_EXPORT Standard_Integer        NbFaces() const;
    Standard_EXPORT Standard_Integer        NbPoints() const;
    Standard_EXPORT Standard_Integer        NbShells() const;
    Standard_EXPORT Standard_Integer        NbSolids() const;
    Standard_EXPORT Standard_Integer        NbVertices() const;
    Standard_EXPORT Standard_Integer        NbWires() const;
    Standard_EXPORT Standard_Boolean        MustBeUpdated() const;
    Standard_EXPORT const gp_Pnt&           Point(const Standard_Integer theIndex) const;
    Standard_EXPORT void                    SetPoint(const Standard_Integer theIndex,
                                                     const gp_Pnt& thePoint);
    Standard_EXPORT const TopoDS_Shape&     Shape() const;
    Standard_EXPORT const TopoDS_Shell&     Shell(const Standard_Integer theIndex) const;
    Standard_EXPORT const TopoDS_Solid&     Solid(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Boolean        Update();
    Standard_EXPORT const TopoDS_Wire&      Wire(const Standard_Integer theIndex) const;
    Standard_EXPORT const TopoDS_Vertex&    Vertex(const Standard_Integer theIndex) const;

protected:

    Standard_EXPORT void    SetModified();
    Standard_EXPORT void    SetNotModified();

protected:

    TopTools_SequenceOfShape    myEdges;
    TopTools_SequenceOfShape    myFaces;
    Standard_Boolean            myIsModified;
    TopoDS_Shape                myShape;
    TopTools_SequenceOfShape    myShells;
    TopTools_SequenceOfShape    mySolids;
    TColgp_SequenceOfPnt        myPoints;
    TopTools_SequenceOfShape    myVertices;
    TopTools_SequenceOfShape    myWires;

public:

    DEFINE_STANDARD_RTTIEXT(Cell_Shape, Standard_Transient)

};


#endif // __Cell_Shape_hxx__

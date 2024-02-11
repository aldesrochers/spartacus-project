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


#ifndef __BRepCell_MakeFace_hxx__
#define __BRepCell_MakeFace_hxx__

// Spartacus
#include <BRepCell_MakeShape.hxx>

// OpenCascade
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>


// ============================================================================
/*!
 *  \brief BRepCell_MakeFace
*/
// ============================================================================
class BRepCell_MakeFace : public BRepCell_MakeShape
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT BRepCell_MakeFace();
    // destructors
    Standard_EXPORT ~BRepCell_MakeFace();

public:

    Standard_EXPORT const TopoDS_Edge&  Edge(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer    NbEdges() const;

public:

    Standard_EXPORT const TopoDS_Face&  Face() const;
    Standard_EXPORT const TopoDS_Wire&  Wire() const;

public:

    Standard_EXPORT operator            TopoDS_Face() const;
    Standard_EXPORT operator            TopoDS_Wire() const;

protected:

    Standard_EXPORT void        ResizeEdges(const Standard_Integer theNbEdges,
                                            const Standard_Boolean toCopyData = Standard_False);

    Standard_EXPORT void        SetEdge(const Standard_Integer theIndex,
                                        const TopoDS_Edge& theEdge);

protected:

    TopTools_Array1OfShape      myEdges;
    TopoDS_Wire                 myWire;

};


#endif // __BRepCell_MakeFace_hxx__

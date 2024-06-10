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

// Spartacus
#include <BRepCell_Command.hxx>
#include <TopTools_SequenceOfShape.hxx>

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

    Standard_EXPORT const TopoDS_Shape&     Shape() const;
    Standard_EXPORT operator                TopoDS_Shape() const;

protected:

    Standard_EXPORT void        SetShape(const TopoDS_Shape& theShape);

protected:

    TopTools_SequenceOfShape    myEdges;
    TopTools_SequenceOfShape    myFaces;
    TopoDS_Shape                myShape;
    TopTools_SequenceOfShape    myVertices;
    TopTools_SequenceOfShape    myWires;

};


#endif // __BRepCell_MakeCell_hxx__

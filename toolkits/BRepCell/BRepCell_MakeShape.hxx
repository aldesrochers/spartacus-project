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


#ifndef __BRepCell_MakeShape_hxx__
#define __BRepCell_MakeShape_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopTools_Array1OfShape.hxx>

// Spartacus
#include <BRepCell_Error.hxx>


// ============================================================================
/*!
 *  \brief BRepCell_MakeShape
*/
// ============================================================================
class BRepCell_MakeShape
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT BRepCell_MakeShape();
    // destructors
    Standard_EXPORT ~BRepCell_MakeShape();

public:

    Standard_EXPORT BRepCell_Error          Error() const;
    Standard_EXPORT Standard_Boolean        IsDone() const;
    Standard_EXPORT Standard_Integer        NbVertices() const;
    Standard_EXPORT const TopoDS_Shape&     Shape() const;
    Standard_EXPORT const TopoDS_Vertex&    Vertex(const Standard_Integer theIndex) const;

public:

    Standard_EXPORT operator                TopoDS_Shape() const;

protected:

    Standard_EXPORT void    ResizeVertices(const Standard_Integer theNbVertices,
                                           const Standard_Boolean toCopyData = Standard_False);
    Standard_EXPORT void    SetDone();
    Standard_EXPORT void    SetError(const BRepCell_Error& theError);
    Standard_EXPORT void    SetNotDone();
    Standard_EXPORT void    SetShape(const TopoDS_Shape& theShape);
    Standard_EXPORT void    SetVertex(const Standard_Integer theIndex,
                                      const TopoDS_Vertex& theVertex);


protected:

    BRepCell_Error          myError;
    Standard_Boolean        myIsDone;
    TopoDS_Shape            myShape;
    TopTools_Array1OfShape  myVertices;

};


#endif // __BRepCell_MakeShape_hxx__

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


#ifndef __BRepCell_MakeEdge_hxx__
#define __BRepCell_MakeEdge_hxx__

// Spartacus
#include <BRepCell_MakeShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopTools_IndexedMapOfShape.hxx>


// ============================================================================
/*!
 *  \brief BRepCell_MakeEdge
*/
// ============================================================================
class BRepCell_MakeEdge : public BRepCell_MakeShape
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT BRepCell_MakeEdge();
    // destructors
    Standard_EXPORT ~BRepCell_MakeEdge();

public:

    virtual Standard_EXPORT void            Build();

public:

    Standard_EXPORT const TopoDS_Edge&      Edge() const;
    Standard_EXPORT operator                TopoDS_Edge() const;

public:

    Standard_EXPORT Standard_Integer        NbVertices() const;


protected:

    TopTools_IndexedMapOfShape  myVertices;

};


#endif // __BRepCell_MakeEdge_hxx__
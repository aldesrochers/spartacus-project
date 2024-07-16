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


#ifndef __BRepCell_MakeTetrahedron_hxx__
#define __BRepCell_MakeTetrahedron_hxx__

// Spartacus
#include <BRepCell_TetrahedronError.hxx>
#include <BRepCell_MakeCell.hxx>


// ============================================================================
/*!
 *  \brief BRepCell_MakeTetrahedron
*/
// ============================================================================
class BRepCell_MakeTetrahedron : public BRepCell_MakeCell
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT BRepCell_MakeTetrahedron(const TopoDS_Vertex& theVertex1,
                                            const TopoDS_Vertex& theVertex2,
                                            const TopoDS_Vertex& theVertex3,
                                            const TopoDS_Vertex& theVertex4);
    // destructors
    Standard_EXPORT ~BRepCell_MakeTetrahedron();

public:

    Standard_EXPORT BRepCell_TetrahedronError      Error() const;

public:

    Standard_EXPORT void        Initialize(const TopoDS_Vertex& theVertex1,
                                           const TopoDS_Vertex& theVertex2,
                                           const TopoDS_Vertex& theVertex3,
                                           const TopoDS_Vertex& theVertex4);

private:

    BRepCell_TetrahedronError          myError;

};


#endif // __BRepCell_MakeTetrahedron_hxx__

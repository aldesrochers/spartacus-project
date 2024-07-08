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


#ifndef __Mesh1d_Vertex_hxx__
#define __Mesh1d_Vertex_hxx__

// Spartacus
#include <gp_Pnt1d.hxx>
#include <Mesh1d_Object.hxx>

// OpenCascade
#include <TopoDS_Vertex.hxx>

// Forward declarations
class Mesh1d_Vertex;

// Handles
DEFINE_STANDARD_HANDLE(Mesh1d_Vertex, Mesh1d_Object)


// ============================================================================
/*!
 *  \brief Mesh1d_Vertex
*/
// ============================================================================
class Mesh1d_Vertex : public Mesh1d_Object
{

public:
    // constructors
    Standard_EXPORT Mesh1d_Vertex();
    Standard_EXPORT Mesh1d_Vertex(const gp_Pnt1d& thePoint);
    // destructors
    Standard_EXPORT ~Mesh1d_Vertex();

public:

    Standard_EXPORT void                    Initialize(const gp_Pnt1d& thePoint);
    Standard_EXPORT const TopoDS_Vertex&    Vertex() const;

private:

    TopoDS_Vertex   myVertex;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh1d_Vertex, Mesh1d_Object)

};


#endif // __Mesh1d_Vertex_hxx__

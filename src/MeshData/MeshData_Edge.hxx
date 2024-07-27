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


#ifndef __MeshData_Edge_hxx__
#define __MeshData_Edge_hxx__

// Spartacus
#include <MeshData_Shape.hxx>

// OpenCascade
#include <TopoDS_Edge.hxx>

// Forward declarations
class MeshData_Edge;

// Handles
DEFINE_STANDARD_HANDLE(MeshData_Edge, MeshData_Shape)


// ============================================================================
/*!
 *  \brief MeshData_Edge
*/
// ============================================================================
class MeshData_Edge : public MeshData_Shape
{

public:
    // constructors
    Standard_EXPORT MeshData_Edge();
    // destructors
    Standard_EXPORT ~MeshData_Edge();

public:

    Standard_EXPORT void                    SetTopology(const TopoDS_Edge& theEdge);
    Standard_EXPORT const TopoDS_Edge&      Topology() const;

private:

    TopoDS_Edge     myTopology;

public:

    DEFINE_STANDARD_RTTIEXT(MeshData_Edge, MeshData_Shape)

};


#endif // __MeshData_Edge_hxx__

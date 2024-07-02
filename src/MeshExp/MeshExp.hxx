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


#ifndef __MeshExp_hxx__
#define __MeshExp_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <MeshDS_Cell.hxx>
#include <MeshDS_Group.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshDS_Vertex.hxx>
#include <MeshTools_IndexedMapOfObject.hxx>

// ============================================================================
/*!
 *  \brief MeshExp
*/
// ============================================================================
class MeshExp
{

public:

    DEFINE_STANDARD_ALLOC;

public:

    static Standard_EXPORT void     MapCells(const MeshDS_Mesh& theMesh,
                                             MeshTools_IndexedMapOfObject& theMap);

    static Standard_EXPORT void     MapCells(const MeshDS_Group& theGroup,
                                             MeshTools_IndexedMapOfObject& theMap);

    static Standard_EXPORT void     MapGroups(const MeshDS_Mesh& theMesh,
                                              MeshTools_IndexedMapOfObject& theMap);

    static Standard_EXPORT void     MapVertices(const MeshDS_Mesh& theMesh,
                                                MeshTools_IndexedMapOfObject& theMap);

    static Standard_EXPORT void     MapVertices(const MeshDS_Group& theGroup,
                                                MeshTools_IndexedMapOfObject& theMap);

    static Standard_EXPORT void     MapVertices(const MeshDS_Cell& theCell,
                                                MeshTools_IndexedMapOfObject& theMap);

public:

    static Standard_EXPORT const MeshDS_Mesh&   Mesh(const MeshDS_Cell& theCell);
    static Standard_EXPORT const MeshDS_Mesh&   Mesh(const MeshDS_Group& theGroup);
    static Standard_EXPORT const MeshDS_Mesh&   Mesh(const MeshDS_Vertex& theVertex);


};


#endif // __MeshExp_hxx__

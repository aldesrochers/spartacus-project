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


#ifndef __MeshBuilder_MakeMesh_hxx__
#define __MeshBuilder_MakeMesh_hxx__

// Spartacus
#include <MeshBuilder_MakeObject.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Group.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshDS_Vertex.hxx>
#include <MeshTools_IndexedMapOfObject.hxx>


// ============================================================================
/*!
 *  \brief MeshBuilder_MakeMesh
*/
// ============================================================================
class MeshBuilder_MakeMesh : public MeshBuilder_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT MeshBuilder_MakeMesh();
    // destructors
    Standard_EXPORT ~MeshBuilder_MakeMesh();

public:

    Standard_EXPORT void                    Build() Standard_OVERRIDE;

public:

    Standard_EXPORT const MeshDS_Mesh&      Mesh();
    Standard_EXPORT operator                MeshDS_Mesh();

public:

    Standard_EXPORT void                AddCell(const MeshDS_Cell& theCell);
    Standard_EXPORT void                AddGroup(const MeshDS_Group& theGroup);
    Standard_EXPORT void                AddVertex(const MeshDS_Vertex& theVertex);
    Standard_EXPORT Standard_Integer    NbCells() const;
    Standard_EXPORT Standard_Integer    NbGroups() const;
    Standard_EXPORT Standard_Integer    NbVertices() const;

private:

    MeshTools_IndexedMapOfObject    myCells;
    MeshTools_IndexedMapOfObject    myGroups;
    MeshTools_IndexedMapOfObject    myVertices;

};


#endif // __MeshBuilder_MakeMesh_hxx__

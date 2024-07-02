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


// Spartacus
#include <MeshBuilder_MakeMesh.hxx>
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshExp.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeMesh::MeshBuilder_MakeMesh()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MakeMesh::~MeshBuilder_MakeMesh()
{

}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void MeshBuilder_MakeMesh::Build()
{
    MeshDS_Builder aBuilder;
    aBuilder.MakeMesh(MeshDS::Mesh(myObject));
    // add Vertexs to mesh
    for(Standard_Integer i=1; i<=myVertices.Size(); i++) {
        MeshDS_Vertex aVertex = MeshDS::Vertex(myVertices.FindKey(i));
        aBuilder.AddVertex(MeshDS::Mesh(myObject), aVertex);
    }
    // add cells to mesh
    for(Standard_Integer i=1; i<=myCells.Size(); i++) {
        MeshDS_Cell aCell = MeshDS::Cell(myCells.FindKey(i));
        aBuilder.AddCell(MeshDS::Mesh(myObject), aCell);
    }
    // add groups to mesh
    for(Standard_Integer i=1; i<=myGroups.Size(); i++) {
        MeshDS_Group aGroup = MeshDS::Group(myGroups.FindKey(i));
        aBuilder.AddGroup(MeshDS::Mesh(myObject), aGroup);
    }
    SetDone();
}

// ============================================================================
/*!
 *  \brief AddCell()
*/
// ============================================================================
void MeshBuilder_MakeMesh::AddCell(const MeshDS_Cell &theCell)
{
    MeshTools_IndexedMapOfObject aMap;
    MeshExp::MapVertices(theCell, aMap);
    for(Standard_Integer i=1; i<=aMap.Size(); i++)
        AddVertex(MeshDS::Vertex(aMap.FindKey(i)));
    myCells.Add(theCell);
}

// ============================================================================
/*!
 *  \brief AddGroup()
*/
// ============================================================================
void MeshBuilder_MakeMesh::AddGroup(const MeshDS_Group &theGroup)
{
    MeshTools_IndexedMapOfObject aMap;
    MeshExp::MapCells(theGroup, aMap);
    for(Standard_Integer i=1; i<=aMap.Size(); i++)
        AddCell(MeshDS::Cell(aMap.FindKey(i)));
    myGroups.Add(theGroup);
}

// ============================================================================
/*!
 *  \brief AddVertex()
*/
// ============================================================================
void MeshBuilder_MakeMesh::AddVertex(const MeshDS_Vertex &theVertex)
{
    myVertices.Add(theVertex);
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const MeshDS_Mesh& MeshBuilder_MakeMesh::Mesh()
{
    return MeshDS::Mesh(Object());
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer MeshBuilder_MakeMesh::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbGroups()
*/
// ============================================================================
Standard_Integer MeshBuilder_MakeMesh::NbGroups() const
{
    return myGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbVertices()
*/
// ============================================================================
Standard_Integer MeshBuilder_MakeMesh::NbVertices() const
{
    return myVertices.Size();
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Mesh()
*/
// ============================================================================
MeshBuilder_MakeMesh::operator MeshDS_Mesh()
{
    return Mesh();
}

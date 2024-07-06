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
#include <MeshDS_TVertex.hxx>




// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TVertex::MeshDS_TVertex()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TVertex::~MeshDS_TVertex()
{

}

// ============================================================================
/*!
 *  \brief LinkedCells()
*/
// ============================================================================
const MeshDS_ListOfObject& MeshDS_TVertex::LinkedCells() const
{
    return myLinkedCells;
}

// ============================================================================
/*!
 *  \brief LinkedCells()
*/
// ============================================================================
MeshDS_ListOfObject& MeshDS_TVertex::LinkedCells()
{
    return myLinkedCells;
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const MeshDS_Mesh& MeshDS_TVertex::Mesh() const
{
    return myMesh;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
MeshAbs_TypeOfObject MeshDS_TVertex::ObjectType() const
{
    return MeshAbs_OBJ_Vertex;
}

// ============================================================================
/*!
 *  \brief SetMesh()
*/
// ============================================================================
void MeshDS_TVertex::SetMesh(const MeshDS_Mesh& theMesh)
{
    myMesh = theMesh;
}

// ============================================================================
/*!
 *  \brief SetVertex()
*/
// ============================================================================
void MeshDS_TVertex::SetVertex(const TopoDS_Vertex &theVertex)
{
    myVertex = theVertex;
}

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const TopoDS_Vertex& MeshDS_TVertex::Vertex() const
{
    return myVertex;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TVertex, MeshDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TVertex, MeshDS_TObject)

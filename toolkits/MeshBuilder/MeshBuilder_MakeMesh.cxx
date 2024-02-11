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
 *  \brief BindCell()
*/
// ============================================================================
Standard_Boolean MeshBuilder_MakeMesh::BindCell(const Standard_Integer theCellId,
                                                const MeshDS_Cell &theCell)
{
    return myCells.Bind(theCellId, theCell);
}

// ============================================================================
/*!
 *  \brief BindNode()
*/
// ============================================================================
Standard_Boolean MeshBuilder_MakeMesh::BindNode(const Standard_Integer theNodeId,
                                                const MeshDS_Node &theNode)
{
    return myNodes.Bind(theNodeId, theNode);
}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void MeshBuilder_MakeMesh::Build()
{

}

// ============================================================================
/*!
 *  \brief FreeCellId()
*/
// ============================================================================
Standard_Integer MeshBuilder_MakeMesh::FreeCellId() const
{
    Standard_Integer aCellId = 1;
    while(myCells.IsBound(aCellId))
        aCellId++;
    return aCellId;
}

// ============================================================================
/*!
 *  \brief FreeNodeId()
*/
// ============================================================================
Standard_Integer MeshBuilder_MakeMesh::FreeNodeId() const
{
    Standard_Integer aNodeId = 1;
    while(myNodes.IsBound(aNodeId))
        aNodeId++;
    return aNodeId;
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const MeshDS_Mesh& MeshBuilder_MakeMesh::Mesh() const
{
    if (!IsDone()) {
        ((MeshBuilder_MakeMesh*) (void*) this)->Build();
        Check();
    }
    return myMesh;
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Mesh()
*/
// ============================================================================
MeshBuilder_MakeMesh::operator MeshDS_Mesh() const
{
    return Mesh();
}

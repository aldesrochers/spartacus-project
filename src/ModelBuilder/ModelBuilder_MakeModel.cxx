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

#include <iostream>
using namespace std;

// Spartacus
#include <MeshDS.hxx>
#include <MeshDS_Tool.hxx>
#include <MeshExp.hxx>
#include <ModelBuilder_MakeModel.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Tool.hxx>
#include <ModelExp.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeModel::ModelBuilder_MakeModel()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeModel::~ModelBuilder_MakeModel()
{

}

// ============================================================================
/*!
 *  \brief AddNode()
*/
// ============================================================================
void ModelBuilder_MakeModel::AddNode(const ModelDS_Node &theNode)
{
    /*
    // check if node is defined on a vertex that is contained within mesh
    const MeshDS_Vertex& aVertex = ModelDS_Tool::Vertex(theNode);
    if(!myVertices.Contains(aVertex)) {
        myError = ModelBuilder_ModelNodeNotOnMeshError;
        return;
    }

    // bind node in builder, use vertex index for internal mapping
    Standard_Integer anIndex = myVertices.FindIndex(aVertex);
    myNodes.Bind(anIndex, theNode);
    SetDone();
**/
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const MeshDS_Mesh& ModelBuilder_MakeModel::Mesh() const
{
    return myMesh;
}

// ============================================================================
/*!
 *  \brief Model()
*/
// ============================================================================
const ModelDS_Model& ModelBuilder_MakeModel::Model() const
{
    return ModelDS::Model(Object());
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer ModelBuilder_MakeModel::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbElements()
*/
// ============================================================================
Standard_Integer ModelBuilder_MakeModel::NbElements() const
{
    return myElements.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer ModelBuilder_MakeModel::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief NbVertices()
*/
// ============================================================================
Standard_Integer ModelBuilder_MakeModel::NbVertices() const
{
    return myVertices.Size();
}

// ============================================================================
/*!
 *  \brief operator ModelDS_Model()
*/
// ============================================================================
ModelBuilder_MakeModel::operator ModelDS_Model() const
{
    return Model();
}

// ============================================================================
/*!
 *  \brief SetMesh()
*/
// ============================================================================
void ModelBuilder_MakeModel::SetMesh(const MeshDS_Mesh &theMesh)
{
    myMesh = theMesh;
    // clear internal cells/vertices containers
    myCells.Clear();
    myVertices.Clear();
    // map cells/vertices to algorithm
    MeshExp::MapCells(myMesh, myCells);
    MeshExp::MapVertices(myMesh, myVertices);
}


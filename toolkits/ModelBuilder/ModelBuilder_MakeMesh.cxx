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
#include <ModelBuilder_MakeMesh.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeMesh::ModelBuilder_MakeMesh(const Handle(PolyMesh1d_Mesh)& thePolyMesh)
{
    Initialize(thePolyMesh);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeMesh::ModelBuilder_MakeMesh(const Handle(PolyMesh2d_Mesh)& thePolyMesh)
{
    Initialize(thePolyMesh);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeMesh::ModelBuilder_MakeMesh(const Handle(PolyMesh_Mesh)& thePolyMesh)
{
    Initialize(thePolyMesh);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeMesh::ModelBuilder_MakeMesh(const Handle(Poly_Triangulation)& theTriangulation)
{
    Initialize(theTriangulation);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeMesh::~ModelBuilder_MakeMesh()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeMesh::Initialize(const Handle(PolyMesh1d_Mesh) &thePolyMesh)
{
    myBuilder.MakeMesh(myMesh, thePolyMesh);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeMesh::Initialize(const Handle(PolyMesh2d_Mesh) &thePolyMesh)
{
    myBuilder.MakeMesh(myMesh, thePolyMesh);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeMesh::Initialize(const Handle(PolyMesh_Mesh) &thePolyMesh)
{
    myBuilder.MakeMesh(myMesh, thePolyMesh);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeMesh::Initialize(const Handle(Poly_Triangulation) &theTriangulation)
{
    myBuilder.MakeMesh(myMesh, theTriangulation);
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const ModelDS_Mesh& ModelBuilder_MakeMesh::Mesh() const
{
    Check();
    return myMesh;
}

// ============================================================================
/*!
 *  \brief operator ModelDS_Mesh()
*/
// ============================================================================
ModelBuilder_MakeMesh::operator ModelDS_Mesh() const
{
    return Mesh();
}



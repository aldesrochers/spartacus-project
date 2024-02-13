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
 *  \brief Build()
*/
// ============================================================================
void MeshBuilder_MakeMesh::Build()
{

    cout << "OK" << endl;


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

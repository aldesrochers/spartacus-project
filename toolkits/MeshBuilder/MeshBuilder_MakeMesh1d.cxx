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
#include <MeshBuilder_MakeMesh1d.hxx>
#include <MeshBuilder_MakeNode.hxx>
#include <MeshBuilder_MakeTriangle.hxx>
#include <MeshDS.hxx>
#include <MeshDS_Tool.hxx>
#include <MeshTools_Array1OfObject.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeMesh1d::MeshBuilder_MakeMesh1d()
    : myError(MeshBuilder_MeshNoError)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MakeMesh1d::~MeshBuilder_MakeMesh1d()
{

}


// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
MeshBuilder_MeshError MeshBuilder_MakeMesh1d::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const MeshDS_Mesh& MeshBuilder_MakeMesh1d::Mesh() const
{
    return MeshDS::Mesh(Object());
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Mesh()
*/
// ============================================================================
MeshBuilder_MakeMesh1d::operator MeshDS_Mesh() const
{
    return Mesh();
}

// ============================================================================
/*!
 *  \brief SetError()
*/
// ============================================================================
void MeshBuilder_MakeMesh1d::SetError(const MeshBuilder_MeshError theError)
{
    myError = theError;
}

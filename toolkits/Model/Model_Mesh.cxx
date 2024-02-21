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
#include <Model_Mesh.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Mesh::Model_Mesh()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Mesh::~Model_Mesh()
{

}

// ============================================================================
/*!
 *  \brief IsPolyMesh1d()
*/
// ============================================================================
Standard_Boolean Model_Mesh::IsPolyMesh1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsPolyMesh2d()
*/
// ============================================================================
Standard_Boolean Model_Mesh::IsPolyMesh2d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsPolyMesh3d()
*/
// ============================================================================
Standard_Boolean Model_Mesh::IsPolyMesh3d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsTriangulation()
*/
// ============================================================================
Standard_Boolean Model_Mesh::IsTriangulation() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief PolyMesh1d()
*/
// ============================================================================
const Handle(PolyMesh1d_Mesh)& Model_Mesh::PolyMesh1d() const
{
    throw Standard_DomainError("Model_Mesh::PolyMesh1d()");
}

// ============================================================================
/*!
 *  \brief PolyMesh2d()
*/
// ============================================================================
const Handle(PolyMesh2d_Mesh)& Model_Mesh::PolyMesh2d() const
{
    throw Standard_DomainError("Model_Mesh::PolyMesh2d()");
}

// ============================================================================
/*!
 *  \brief PolyMesh3d()
*/
// ============================================================================
const Handle(PolyMesh_Mesh)& Model_Mesh::PolyMesh3d() const
{
    throw Standard_DomainError("Model_Mesh::PolyMesh3d()");
}

// ============================================================================
/*!
 *  \brief Triangulation()
*/
// ============================================================================
const Handle(Poly_Triangulation)& Model_Mesh::Triangulation() const
{
    throw Standard_DomainError("Model_Mesh::Triangulation()");
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Mesh, Model_Object);
IMPLEMENT_STANDARD_RTTIEXT(Model_Mesh, Model_Object);

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
#include <MeshDS_GridRepresentation.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_GridRepresentation::MeshDS_GridRepresentation()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_GridRepresentation::~MeshDS_GridRepresentation()
{

}

// ============================================================================
/*!
 *  \brief Grid1d()
*/
// ============================================================================
const Handle(Mesh1d_Grid)& MeshDS_GridRepresentation::Grid1d() const
{
    throw Standard_DomainError("MeshDS_GridRepresentation::Grid1d()");
}

// ============================================================================
/*!
 *  \brief Grid2d()
*/
// ============================================================================
const Handle(Mesh2d_Grid)& MeshDS_GridRepresentation::Grid2d() const
{
    throw Standard_DomainError("MeshDS_GridRepresentation::Grid2d()");
}

// ============================================================================
/*!
 *  \brief Grid3d()
*/
// ============================================================================
const Handle(Mesh_Grid)& MeshDS_GridRepresentation::Grid3d() const
{
    throw Standard_DomainError("MeshDS_GridRepresentation::Grid3d()");
}

// ============================================================================
/*!
 *  \brief Triangulation()
*/
// ============================================================================
const Handle(Poly_Triangulation)& MeshDS_GridRepresentation::Triangulation() const
{
    throw Standard_DomainError("MeshDS_GridRepresentation::Triangulation()");
}

// ============================================================================
/*!
 *  \brief IsGrid1d()
*/
// ============================================================================
Standard_Boolean MeshDS_GridRepresentation::IsGrid1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsGrid2d()
*/
// ============================================================================
Standard_Boolean MeshDS_GridRepresentation::IsGrid2d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsGrid3d()
*/
// ============================================================================
Standard_Boolean MeshDS_GridRepresentation::IsGrid3d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsTriangulation()
*/
// ============================================================================
Standard_Boolean MeshDS_GridRepresentation::IsTriangulation() const
{
    return Standard_False;
}






// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_GridRepresentation, MeshDS_Representation);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_GridRepresentation, MeshDS_Representation);

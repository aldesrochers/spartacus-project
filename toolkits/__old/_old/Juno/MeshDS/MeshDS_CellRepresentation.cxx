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
#include <MeshDS_CellRepresentation.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_CellRepresentation::MeshDS_CellRepresentation()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_CellRepresentation::~MeshDS_CellRepresentation()
{

}

// ============================================================================
/*!
 *  \brief IsCell1d()
*/
// ============================================================================
Standard_Boolean MeshDS_CellRepresentation::IsCell1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsCell2d()
*/
// ============================================================================
Standard_Boolean MeshDS_CellRepresentation::IsCell2d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsCell3d()
*/
// ============================================================================
Standard_Boolean MeshDS_CellRepresentation::IsCell3d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Cell1d()
*/
// ============================================================================
const Handle(Mesh1d_Cell)& MeshDS_CellRepresentation::Cell1d() const
{
    throw Standard_DomainError("MeshDS_CellRepresentation::Cell1d()");
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_CellRepresentation, Standard_Transient);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_CellRepresentation, Standard_Transient);

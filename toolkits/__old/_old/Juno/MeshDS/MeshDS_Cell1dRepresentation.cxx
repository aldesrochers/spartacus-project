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
#include <MeshDS_Cell1dRepresentation.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_Cell1dRepresentation::MeshDS_Cell1dRepresentation(const Handle(Mesh1d_Cell)& theCell)
    : myCell(theCell)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_Cell1dRepresentation::~MeshDS_Cell1dRepresentation()
{

}

// ============================================================================
/*!
 *  \brief IsCell1d()
*/
// ============================================================================
Standard_Boolean MeshDS_Cell1dRepresentation::IsCell1d() const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Cell1d()
*/
// ============================================================================
const Handle(Mesh1d_Cell)& MeshDS_Cell1dRepresentation::Cell1d() const
{
    return myCell;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_Cell1dRepresentation, MeshDS_CellRepresentation);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_Cell1dRepresentation, MeshDS_CellRepresentation);

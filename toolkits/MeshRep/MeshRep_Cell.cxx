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
#include <MeshRep_Cell.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshRep_Cell::MeshRep_Cell()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshRep_Cell::~MeshRep_Cell()
{

}

// ============================================================================
/*!
 *  \brief IsCell1d()
*/
// ============================================================================
Standard_Boolean MeshRep_Cell::IsCell1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsCell2d()
*/
// ============================================================================
Standard_Boolean MeshRep_Cell::IsCell2d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsCell3d()
*/
// ============================================================================
Standard_Boolean MeshRep_Cell::IsCell3d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Cell1d()
*/
// ============================================================================
const Handle(Mesh1d_Cell)& MeshRep_Cell::Cell1d() const
{
    throw Standard_DomainError("MeshRep_Cell::Cell1d()");
}

// ============================================================================
/*!
 *  \brief Cell2d()
*/
// ============================================================================
const Handle(Mesh2d_Cell)& MeshRep_Cell::Cell2d() const
{
    throw Standard_DomainError("MeshRep_Cell::Cell2d()");
}

// ============================================================================
/*!
 *  \brief Cell3d()
*/
// ============================================================================
const Handle(Mesh_Cell)& MeshRep_Cell::Cell3d() const
{
    throw Standard_DomainError("MeshRep_Cell::Cell3d()");
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshRep_Cell, MeshRep_Representation);
IMPLEMENT_STANDARD_RTTIEXT(MeshRep_Cell, MeshRep_Representation);

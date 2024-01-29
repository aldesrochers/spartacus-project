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
#include <MeshDS_Grid3dRepresentation.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_Grid3dRepresentation::MeshDS_Grid3dRepresentation(const Handle(Mesh_Grid)& theGrid3d)
    : myGrid3d(theGrid3d)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_Grid3dRepresentation::~MeshDS_Grid3dRepresentation()
{

}

// ============================================================================
/*!
 *  \brief Grid3d()
*/
// ============================================================================
const Handle(Mesh_Grid)& MeshDS_Grid3dRepresentation::Grid3d() const
{
    return myGrid3d;
}

// ============================================================================
/*!
 *  \brief IsGrid3d()
*/
// ============================================================================
Standard_Boolean MeshDS_Grid3dRepresentation::IsGrid3d() const
{
    return Standard_True;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_Grid3dRepresentation, MeshDS_GridRepresentation);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_Grid3dRepresentation, MeshDS_GridRepresentation);

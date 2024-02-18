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
#include <MeshDS_Grid2dRepresentation.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_Grid2dRepresentation::MeshDS_Grid2dRepresentation(const Handle(Mesh2d_Grid)& theGrid2d)
    : myGrid2d(theGrid2d)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_Grid2dRepresentation::~MeshDS_Grid2dRepresentation()
{

}

// ============================================================================
/*!
 *  \brief Grid2d()
*/
// ============================================================================
const Handle(Mesh2d_Grid)& MeshDS_Grid2dRepresentation::Grid2d() const
{
    return myGrid2d;
}

// ============================================================================
/*!
 *  \brief IsGrid2d()
*/
// ============================================================================
Standard_Boolean MeshDS_Grid2dRepresentation::IsGrid2d() const
{
    return Standard_True;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_Grid2dRepresentation, MeshDS_GridRepresentation);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_Grid2dRepresentation, MeshDS_GridRepresentation);

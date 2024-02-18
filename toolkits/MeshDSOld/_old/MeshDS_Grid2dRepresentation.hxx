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


#ifndef __MeshDS_Grid2dRepresentation_hxx__
#define __MeshDS_Grid2dRepresentation_hxx__

// Spartacus
#include <Mesh1d_Grid.hxx>
#include <MeshDS_GridRepresentation.hxx>

// Forward declarations
class MeshDS_Grid2dRepresentation;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_Grid2dRepresentation, MeshDS_GridRepresentation);


// ============================================================================
/*!
 *  \brief MeshDS_Grid2dRepresentation
*/
// ============================================================================
class MeshDS_Grid2dRepresentation : public MeshDS_GridRepresentation
{

public:
    // constructors
    Standard_EXPORT MeshDS_Grid2dRepresentation(const Handle(Mesh2d_Grid)& theGrid2d);
    // destructors
    Standard_EXPORT ~MeshDS_Grid2dRepresentation();

public:

    Standard_EXPORT const Handle(Mesh2d_Grid)&  Grid2d() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Boolean            IsGrid2d() const Standard_OVERRIDE;

private:

    Handle(Mesh2d_Grid)         myGrid2d;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_Grid2dRepresentation, MeshDS_GridRepresentation);

};


#endif // __MeshDS_Grid2dRepresentation_hxx__

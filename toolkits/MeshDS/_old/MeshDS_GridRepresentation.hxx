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


#ifndef __MeshDS_GridRepresentation_hxx__
#define __MeshDS_GridRepresentation_hxx__

// Spartacus
#include <Mesh_Grid.hxx>
#include <Mesh1d_Grid.hxx>
#include <Mesh2d_Grid.hxx>
#include <MeshDS_Representation.hxx>

// OpenCascade
#include <Poly_Triangulation.hxx>

// Forward declarations
class MeshDS_GridRepresentation;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_GridRepresentation, MeshDS_Representation);


// ============================================================================
/*!
 *  \brief MeshDS_GridRepresentation
*/
// ============================================================================
class MeshDS_GridRepresentation : public MeshDS_Representation
{

public:
    // constructors
    Standard_EXPORT MeshDS_GridRepresentation();
    // destructors
    Standard_EXPORT ~MeshDS_GridRepresentation();

public:

    virtual Standard_EXPORT const Handle(Mesh1d_Grid)&          Grid1d() const;
    virtual Standard_EXPORT const Handle(Mesh2d_Grid)&          Grid2d() const;
    virtual Standard_EXPORT const Handle(Mesh_Grid)&            Grid3d() const;
    virtual Standard_EXPORT const Handle(Poly_Triangulation)&   Triangulation() const;
    virtual Standard_EXPORT Standard_Boolean                    IsGrid1d() const;
    virtual Standard_EXPORT Standard_Boolean                    IsGrid2d() const;
    virtual Standard_EXPORT Standard_Boolean                    IsGrid3d() const;
    virtual Standard_EXPORT Standard_Boolean                    IsTriangulation() const;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_GridRepresentation, MeshDS_Representation);

};


#endif // __MeshDS_GridRepresentation_hxx__

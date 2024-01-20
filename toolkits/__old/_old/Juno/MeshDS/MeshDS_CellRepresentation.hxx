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


#ifndef __MeshDS_CellRepresentation_hxx__
#define __MeshDS_CellRepresentation_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Spartacus
#include <Mesh1d_Cell.hxx>

// Forward declarations
class MeshDS_CellRepresentation;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_CellRepresentation, Standard_Transient);


// ============================================================================
/*!
 *  \brief MeshDS_CellRepresentation
*/
// ============================================================================
class MeshDS_CellRepresentation : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT MeshDS_CellRepresentation();
    // destructors
    Standard_EXPORT ~MeshDS_CellRepresentation();

public:

    virtual Standard_EXPORT Standard_Boolean            IsCell1d() const;
    virtual Standard_EXPORT Standard_Boolean            IsCell2d() const;
    virtual Standard_EXPORT Standard_Boolean            IsCell3d() const;

    virtual Standard_EXPORT const Handle(Mesh1d_Cell)&  Cell1d() const;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_CellRepresentation, Standard_Transient);

};

#endif // __MeshDS_CellRepresentation_hxx__

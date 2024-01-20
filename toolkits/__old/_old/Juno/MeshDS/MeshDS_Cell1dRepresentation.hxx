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


#ifndef __MeshDS_Cell1dRepresentation_hxx__
#define __MeshDS_Cell1dRepresentation_hxx__

// Spartacus
#include <MeshDS_CellRepresentation.hxx>

// Forward declarations
class MeshDS_Cell1dRepresentation;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_Cell1dRepresentation, MeshDS_CellRepresentation);


// ============================================================================
/*!
 *  \brief MeshDS_Cell1dRepresentation
*/
// ============================================================================
class MeshDS_Cell1dRepresentation : public MeshDS_CellRepresentation
{

public:
    // constructors
    Standard_EXPORT MeshDS_Cell1dRepresentation(const Handle(Mesh1d_Cell)& theCell);
    // destructors
    Standard_EXPORT ~MeshDS_Cell1dRepresentation();

public:

    Standard_EXPORT Standard_Boolean            IsCell1d() const Standard_OVERRIDE;
    Standard_EXPORT const Handle(Mesh1d_Cell)&  Cell1d() const Standard_OVERRIDE;

private:

    Handle(Mesh1d_Cell)     myCell;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_Cell1dRepresentation, MeshDS_CellRepresentation);

};

#endif // __MeshDS_Cell1dRepresentation_hxx__

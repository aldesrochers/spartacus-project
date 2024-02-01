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


#ifndef __MeshRep_Cell_hxx__
#define __MeshRep_Cell_hxx__

// Spartacus
#include <MeshRep_Representation.hxx>
#include <Mesh_Cell.hxx>
#include <Mesh1d_Cell.hxx>
#include <Mesh2d_Cell.hxx>

// Forward declarations
class MeshRep_Cell;

// Handles
DEFINE_STANDARD_HANDLE(MeshRep_Cell, MeshRep_Representation);


// ============================================================================
/*!
 *  \brief MeshRep_Cell
*/
// ============================================================================
class MeshRep_Cell : public MeshRep_Representation
{

public:
    // constructors
    Standard_EXPORT MeshRep_Cell();
    // destructors
    Standard_EXPORT ~MeshRep_Cell();

public:

    Standard_EXPORT virtual Standard_Boolean            IsCell1d() const;
    Standard_EXPORT virtual Standard_Boolean            IsCell2d() const;
    Standard_EXPORT virtual Standard_Boolean            IsCell3d() const;
    Standard_EXPORT virtual const Handle(Mesh1d_Cell)&  Cell1d() const;
    Standard_EXPORT virtual const Handle(Mesh2d_Cell)&  Cell2d() const;
    Standard_EXPORT virtual const Handle(Mesh_Cell)&    Cell3d() const;

public:

    DEFINE_STANDARD_RTTIEXT(MeshRep_Cell, MeshRep_Representation);

};


#endif // __MeshRep_Cell_hxx__

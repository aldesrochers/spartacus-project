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


#ifndef __MeshRep_Cell1d_hxx__
#define __MeshRep_Cell1d_hxx__

// Spartacus
#include <MeshRep_Cell.hxx>

// Forward declarations
class MeshRep_Cell1d;

// Handles
DEFINE_STANDARD_HANDLE(MeshRep_Cell1d, MeshRep_Cell);


// ============================================================================
/*!
 *  \brief MeshRep_Cell1d
*/
// ============================================================================
class MeshRep_Cell1d : public MeshRep_Cell
{

public:
    // constructors
    Standard_EXPORT MeshRep_Cell1d(const Handle(Mesh1d_Cell)& theCell1d);
    // destructors
    Standard_EXPORT ~MeshRep_Cell1d();

public:

    Standard_EXPORT Standard_Boolean            IsCell1d() const Standard_OVERRIDE;
    Standard_EXPORT const Handle(Mesh1d_Cell)&  Cell1d() const Standard_OVERRIDE;

private:

    Handle(Mesh1d_Cell)     myCell1d;

public:

    DEFINE_STANDARD_RTTIEXT(MeshRep_Cell1d, MeshRep_Cell);

};


#endif // __MeshRep_Cell1d_hxx__

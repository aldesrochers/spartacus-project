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


#ifndef __MeshRep_Node3d_hxx__
#define __MeshRep_Node3d_hxx__

// Spartacus
#include <MeshRep_Node.hxx>

// Forward declarations
class MeshRep_Node3d;

// Handles
DEFINE_STANDARD_HANDLE(MeshRep_Node3d, MeshRep_Node);


// ============================================================================
/*!
 *  \brief MeshRep_Node3d
*/
// ============================================================================
class MeshRep_Node3d : public MeshRep_Node
{

public:
    // constructors
    Standard_EXPORT MeshRep_Node3d(const Handle(Mesh_Node)& theNode3d);
    // destructors
    Standard_EXPORT ~MeshRep_Node3d();

public:

    Standard_EXPORT Standard_Boolean            IsNode3d() const Standard_OVERRIDE;
    Standard_EXPORT const Handle(Mesh_Node)&    Node3d() const Standard_OVERRIDE;

private:

    Handle(Mesh_Node)       myNode3d;

public:

    DEFINE_STANDARD_RTTIEXT(MeshRep_Node3d, MeshRep_Node);

};


#endif // __MeshRep_Node3d_hxx__

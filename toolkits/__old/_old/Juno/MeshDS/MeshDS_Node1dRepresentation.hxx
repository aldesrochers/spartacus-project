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


#ifndef __MeshDS_Node1dRepresentation_hxx__
#define __MeshDS_Node1dRepresentation_hxx__

// Spartacus
#include <MeshDS_NodeRepresentation.hxx>

// Forward declarations
class MeshDS_Node1dRepresentation;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_Node1dRepresentation, MeshDS_NodeRepresentation);


// ============================================================================
/*!
 *  \brief MeshDS_Node1dRepresentation
*/
// ============================================================================
class MeshDS_Node1dRepresentation : public MeshDS_NodeRepresentation
{

public:
    // constructors
    Standard_EXPORT MeshDS_Node1dRepresentation(const Handle(Mesh1d_Node)& theNode);
    // destructors
    Standard_EXPORT ~MeshDS_Node1dRepresentation();

public:

    Standard_EXPORT Standard_Boolean            IsNode1d() const Standard_OVERRIDE;
    Standard_EXPORT const Handle(Mesh1d_Node)&  Node1d() const Standard_OVERRIDE;

private:

    Handle(Mesh1d_Node)     myNode;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_Node1dRepresentation, MeshDS_NodeRepresentation);

};

#endif // __MeshDS_Node1dRepresentation_hxx__

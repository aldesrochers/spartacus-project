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


#ifndef __MeshDS_NodeRepresentation_hxx__
#define __MeshDS_NodeRepresentation_hxx__

// Spartacus
#include <MeshDS_Representation.hxx>
#include <mp_Node.hxx>
#include <mp_Node1d.hxx>
#include <mp_Node2d.hxx>

// Forward declarations
class MeshDS_NodeRepresentation;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_NodeRepresentation, MeshDS_Representation);


// ============================================================================
/*!
 *  \brief MeshDS_NodeRepresentation
*/
// ============================================================================
class MeshDS_NodeRepresentation : public MeshDS_Representation
{

public:
    // constructors
    Standard_EXPORT MeshDS_NodeRepresentation();
    // destructors
    Standard_EXPORT ~MeshDS_NodeRepresentation();

public:

    virtual Standard_EXPORT Standard_Boolean    IsNode1d() const;
    virtual Standard_EXPORT Standard_Boolean    IsNode2d() const;
    virtual Standard_EXPORT Standard_Boolean    IsNode3d() const;
    virtual const mp_Node1d&                    Node1d() const;
    virtual const mp_Node2d&                    Node2d() const;
    virtual const mp_Node&                      Node3d() const;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_NodeRepresentation, MeshDS_Representation);

};


#endif // __MeshDS_NodeRepresentation_hxx__

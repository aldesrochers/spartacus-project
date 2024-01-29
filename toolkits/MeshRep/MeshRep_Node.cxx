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
#include <MeshRep_Node.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshRep_Node::MeshRep_Node()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshRep_Node::~MeshRep_Node()
{

}

// ============================================================================
/*!
 *  \brief IsNode1d()
*/
// ============================================================================
Standard_Boolean MeshRep_Node::IsNode1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsNode2d()
*/
// ============================================================================
Standard_Boolean MeshRep_Node::IsNode2d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsNode3d()
*/
// ============================================================================
Standard_Boolean MeshRep_Node::IsNode3d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Node1d()
*/
// ============================================================================
const Handle(Mesh1d_Node)& MeshRep_Node::Node1d() const
{
    throw Standard_DomainError("MeshRep_Node::Node1d()");
}

// ============================================================================
/*!
 *  \brief Node2d()
*/
// ============================================================================
const Handle(Mesh2d_Node)& MeshRep_Node::Node2d() const
{
    throw Standard_DomainError("MeshRep_Node::Node2d()");
}

// ============================================================================
/*!
 *  \brief Node3d()
*/
// ============================================================================
const Handle(Mesh_Node)& MeshRep_Node::Node3d() const
{
    throw Standard_DomainError("MeshRep_Node::Node3d()");
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshRep_Node, MeshRep_Representation);
IMPLEMENT_STANDARD_RTTIEXT(MeshRep_Node, MeshRep_Representation);

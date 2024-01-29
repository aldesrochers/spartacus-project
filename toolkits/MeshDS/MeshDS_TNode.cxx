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
#include <MeshDS_TNode.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TNode::MeshDS_TNode()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TNode::~MeshDS_TNode()
{

}

// ============================================================================
/*!
 *  \brief HasVertex()
*/
// ============================================================================
Standard_Boolean MeshDS_TNode::HasVertex() const
{
    return !myVertex.IsNull();
}

// ============================================================================
/*!
 *  \brief IsNode1d()
*/
// ============================================================================
Standard_Boolean MeshDS_TNode::IsNode1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsNode2d()
*/
// ============================================================================
Standard_Boolean MeshDS_TNode::IsNode2d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsNode3d()
*/
// ============================================================================
Standard_Boolean MeshDS_TNode::IsNode3d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Node1d()
*/
// ============================================================================
const Handle(Mesh1d_Node)& MeshDS_TNode::Node1d() const
{
    throw Standard_DomainError("MeshDS_TNode::Node1d()");
}

// ============================================================================
/*!
 *  \brief Node2d()
*/
// ============================================================================
const Handle(Mesh2d_Node)& MeshDS_TNode::Node2d() const
{
    throw Standard_DomainError("MeshDS_TNode::Node2d()");
}

// ============================================================================
/*!
 *  \brief Node3d()
*/
// ============================================================================
const Handle(Mesh_Node)& MeshDS_TNode::Node3d() const
{
    throw Standard_DomainError("MeshDS_TNode::Node3d()");
}

// ============================================================================
/*!
 *  \brief SetVertex()
*/
// ============================================================================
void MeshDS_TNode::SetVertex(const TopoDS_Vertex &theVertex)
{
    myVertex = theVertex;
}

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const TopoDS_Vertex& MeshDS_TNode::Vertex() const
{
    return myVertex;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TNode, MeshDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TNode, MeshDS_TObject);

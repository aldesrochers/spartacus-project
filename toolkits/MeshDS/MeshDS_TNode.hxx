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


#ifndef __MeshDS_TNode_hxx__
#define __MeshDS_TNode_hxx__

// Spartacus
#include <Mesh_Node.hxx>
#include <Mesh1d_Node.hxx>
#include <Mesh2d_Node.hxx>
#include <MeshDS_TObject.hxx>

// OpenCascade
#include <TopoDS_Vertex.hxx>

// Forward declarations
class MeshDS_TNode;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TNode, MeshDS_TObject);


// ============================================================================
/*!
 *  \brief MeshDS_TNode
*/
// ============================================================================
class MeshDS_TNode : public MeshDS_TObject
{

public:
    // constructors
    Standard_EXPORT MeshDS_TNode();
    // destructors
    Standard_EXPORT ~MeshDS_TNode();

public:

    virtual Standard_EXPORT Standard_Boolean            IsNode1d() const;
    virtual Standard_EXPORT Standard_Boolean            IsNode2d() const;
    virtual Standard_EXPORT Standard_Boolean            IsNode3d() const;
    virtual Standard_EXPORT const Handle(Mesh1d_Node)&  Node1d() const;
    virtual Standard_EXPORT const Handle(Mesh2d_Node)&  Node2d() const;
    virtual Standard_EXPORT const Handle(Mesh_Node)&    Node3d() const;

public:

    Standard_EXPORT Standard_Boolean        HasVertex() const;
    Standard_EXPORT void                    SetVertex(const TopoDS_Vertex& theVertex);
    Standard_EXPORT const TopoDS_Vertex&    Vertex() const;

private:

    TopoDS_Vertex       myVertex;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TNode, MeshDS_TObject);

};


#endif // __MeshDS_TNode_hxx__

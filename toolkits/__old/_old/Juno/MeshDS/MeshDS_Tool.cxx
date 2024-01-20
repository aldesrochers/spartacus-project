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
#include <MeshDS_Tool.hxx>

// OpenCascade
#include <Standard_NullObject.hxx>


// ============================================================================
/*!
 *  \brief IsNode1d()
*/
// ============================================================================
Standard_Boolean MeshDS_Tool::IsNode1d(const MeshDS_Node &theNode)
{
    const MeshDS_TNode* aTNode = static_cast<const MeshDS_TNode*>(theNode.TObject().get());
    if(aTNode == 0)
        throw Standard_NullObject("MeshDS_Tool::IsNodeId()");

    Handle(MeshDS_NodeRepresentation) aRepresentation = aTNode->Representation();
    return aRepresentation->IsNode1d();
}

// ============================================================================
/*!
 *  \brief IsNode1d()
*/
// ============================================================================
const Handle(Mesh1d_Node)& MeshDS_Tool::Node1d(const MeshDS_Node& theNode)
{
    const MeshDS_TNode* aTNode = static_cast<const MeshDS_TNode*>(theNode.TObject().get());
    if(aTNode == 0)
        throw Standard_NullObject("MeshDS_Tool::NodeId()");

    Handle(MeshDS_NodeRepresentation) aRepresentation = aTNode->Representation();
    return aRepresentation->Node1d();
}

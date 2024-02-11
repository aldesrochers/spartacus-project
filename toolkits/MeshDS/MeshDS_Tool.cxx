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
#include <MeshDS_TCell.hxx>
#include <MeshDS_TNode.hxx>
#include <MeshDS_Tool.hxx>
#include <MeshRep_Cell1d.hxx>
#include <MeshRep_Cell2d.hxx>
#include <MeshRep_Cell3d.hxx>
#include <MeshRep_Node1d.hxx>
#include <MeshRep_Node2d.hxx>
#include <MeshRep_Node3d.hxx>

// OpenCascade
#include <Standard_NullObject.hxx>

// ============================================================================
/*!
 *  \brief Cell1d()
 *  Get a 1d Cell geometry.
*/
// ============================================================================
Handle(Mesh1d_Cell) MeshDS_Tool::Cell1d(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if (aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Cell1d()");
    //Handle(MeshRep_Cell) aRepresentation = aTCell->Representation();
    //if(aRepresentation.IsNull())
    //    throw Standard_NullObject("MeshDS_Tool::Cell1d()");
    //if(!aRepresentation->IsCell1d())
    //    throw Standard_DomainError("MeshDS_Tool::Cell1d()->Not a valid 1d Cell.");
    //Handle(MeshRep_Cell1d) aRepresentation1d = Handle(MeshRep_Cell1d)::DownCast(aRepresentation);
    //return aRepresentation1d->Cell1d();
}

// ============================================================================
/*!
 *  \brief Cell2d()
 *  Get a 2d Cell geometry.
*/
// ============================================================================
Handle(Mesh2d_Cell) MeshDS_Tool::Cell2d(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if (aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Cell2d()");
    //Handle(MeshRep_Cell) aRepresentation = aTCell->Representation();
    //if(aRepresentation.IsNull())
    //    throw Standard_NullObject("MeshDS_Tool::Cell2d()");
    //if(!aRepresentation->IsCell2d())
    //    throw Standard_DomainError("MeshDS_Tool::Cell2d()->Not a valid 2d Cell.");
    //Handle(MeshRep_Cell2d) aRepresentation2d = Handle(MeshRep_Cell2d)::DownCast(aRepresentation);
    //return aRepresentation2d->Cell2d();
}

// ============================================================================
/*!
 *  \brief Cell3d()
 *  Get a 3d Cell geometry.
*/
// ============================================================================
Handle(Mesh_Cell) MeshDS_Tool::Cell3d(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if (aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Cell3d()");
    //Handle(MeshRep_Cell) aRepresentation = aTCell->Representation();
    //if(aRepresentation.IsNull())
    //    throw Standard_NullObject("MeshDS_Tool::Cell3d()");
    //if(!aRepresentation->IsCell3d())
    //    throw Standard_DomainError("MeshDS_Tool::Cell3d()->Not a valid 3d Cell.");
    //Handle(MeshRep_Cell3d) aRepresentation3d = Handle(MeshRep_Cell3d)::DownCast(aRepresentation);
    //return aRepresentation3d->Cell3d();
}

// ============================================================================
/*!
 *  \brief Node1d()
 *  Get a 1d node geometry.
*/
// ============================================================================
Handle(Mesh1d_Node) MeshDS_Tool::Node1d(const MeshDS_Node& theNode)
{
    const MeshDS_TNode* aTNode = static_cast<const MeshDS_TNode*>(theNode.TObject().get());
    if (aTNode == 0)
        throw Standard_NullObject("MeshDS_Tool::Node1d()");
    //Handle(MeshRep_Node) aRepresentation = aTNode->Representation();
    //if(aRepresentation.IsNull())
    //    throw Standard_NullObject("MeshDS_Tool::Node1d()");
    //if(!aRepresentation->IsNode1d())
    //    throw Standard_DomainError("MeshDS_Tool::Node1d()->Not a valid 1d node.");
    //Handle(MeshRep_Node1d) aRepresentation1d = Handle(MeshRep_Node1d)::DownCast(aRepresentation);
    //return aRepresentation1d->Node1d();
}

// ============================================================================
/*!
 *  \brief Node2d()
 *  Get a 2d node geometry.
*/
// ============================================================================
Handle(Mesh2d_Node) MeshDS_Tool::Node2d(const MeshDS_Node& theNode)
{
    const MeshDS_TNode* aTNode = static_cast<const MeshDS_TNode*>(theNode.TObject().get());
    if (aTNode == 0)
        throw Standard_NullObject("MeshDS_Tool::Node2d()");
    //Handle(MeshRep_Node) aRepresentation = aTNode->Representation();
    //if(aRepresentation.IsNull())
    //    throw Standard_NullObject("MeshDS_Tool::Node2d()");
    //if(!aRepresentation->IsNode2d())
    //    throw Standard_DomainError("MeshDS_Tool::Node2d()->Not a valid 2d node.");
    //Handle(MeshRep_Node2d) aRepresentation2d = Handle(MeshRep_Node2d)::DownCast(aRepresentation);
    //return aRepresentation2d->Node2d();
}

// ============================================================================
/*!
 *  \brief Node3d()
 *  Get a 3d node geometry.
*/
// ============================================================================
Handle(Mesh_Node) MeshDS_Tool::Node3d(const MeshDS_Node& theNode)
{
    const MeshDS_TNode* aTNode = static_cast<const MeshDS_TNode*>(theNode.TObject().get());
    if (aTNode == 0)
        throw Standard_NullObject("MeshDS_Tool::Node3d()");
    //Handle(MeshRep_Node) aRepresentation = aTNode->Representation();
    //if(aRepresentation.IsNull())
    //    throw Standard_NullObject("MeshDS_Tool::Node3d()");
    //if(!aRepresentation->IsNode3d())
    //    throw Standard_DomainError("MeshDS_Tool::Node3d()->Not a valid 3d node.");
    //Handle(MeshRep_Node3d) aRepresentation3d = Handle(MeshRep_Node3d)::DownCast(aRepresentation);
    //return aRepresentation3d->Node3d();
}


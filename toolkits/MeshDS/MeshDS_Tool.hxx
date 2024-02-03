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


#ifndef __MeshDS_Tool_hxx__
#define __MeshDS_Tool_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>

// Spartacus
#include <Mesh_Cell.hxx>
#include <Mesh_Node.hxx>
#include <Mesh1d_Cell.hxx>
#include <Mesh1d_Node.hxx>
#include <Mesh2d_Cell.hxx>
#include <Mesh2d_Node.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Node.hxx>


// ============================================================================
/*!
 *  \brief MeshDS_Tool
*/
// ============================================================================
class MeshDS_Tool
{

public:

    DEFINE_STANDARD_ALLOC;

public:

    static Standard_EXPORT Handle(Mesh1d_Cell)  Cell1d(const MeshDS_Cell& theCell);
    static Standard_EXPORT Handle(Mesh2d_Cell)  Cell2d(const MeshDS_Cell& theCell);
    static Standard_EXPORT Handle(Mesh_Cell)    Cell3d(const MeshDS_Cell& theCell);

    static Standard_EXPORT Handle(Mesh1d_Node)  Node1d(const MeshDS_Node& theNode);
    static Standard_EXPORT Handle(Mesh2d_Node)  Node2d(const MeshDS_Node& theNode);
    static Standard_EXPORT Handle(Mesh_Node)    Node3d(const MeshDS_Node& theNode);

};


#endif // __MeshDS_Tool_hxx__

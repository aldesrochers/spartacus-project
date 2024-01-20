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


#ifndef __MeshDS_Builder_hxx__
#define __MeshDS_Builder_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Pnt.hxx>

// Spartacus
#include <Mesh1d_Cell.hxx>
#include <Mesh1d_Node.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Group.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshDS_Node.hxx>
#include <MeshDS_Object.hxx>
#include <MeshDS_TObject.hxx>



// ============================================================================
/*!
 *  \brief MeshDS_Builder
*/
// ============================================================================
class MeshDS_Builder
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT MeshDS_Builder();
    // destructors
    Standard_EXPORT ~MeshDS_Builder();

public:

    Standard_EXPORT void        AddCell(MeshDS_Group& theGroup,
                                        const MeshDS_Cell& theCell) const;

    Standard_EXPORT void        AddGroup(MeshDS_Mesh& theMesh,
                                         const MeshDS_Group& theGroup) const;

    Standard_EXPORT void        AddNode(MeshDS_Cell& theCell,
                                        const MeshDS_Node& theNode) const;

    Standard_EXPORT void        MakeCell(MeshDS_Cell& theCell) const;
    Standard_EXPORT void        MakeCell(MeshDS_Cell& theCell,
                                         const Handle(Mesh1d_Cell)& theCell1d) const;

    Standard_EXPORT void        MakeGroup(MeshDS_Group& theGroup) const;

    Standard_EXPORT void        MakeMesh(MeshDS_Mesh& theMesh) const;

    Standard_EXPORT void        MakeNode(MeshDS_Node& theNode) const;
    Standard_EXPORT void        MakeNode(MeshDS_Node& theNode,
                                         const Handle(Mesh1d_Node)& theNode1d) const;

    Standard_EXPORT void        RemoveCell(MeshDS_Group& theGroup,
                                           const MeshDS_Cell& theCell) const;

    Standard_EXPORT void        RemoveGroup(MeshDS_Mesh& theMesh,
                                            const MeshDS_Group& theGroup) const;

    Standard_EXPORT void        RemoveNode(MeshDS_Cell& theCell,
                                           const MeshDS_Node& theNode) const;

    Standard_EXPORT void        UpdateCell(const MeshDS_Cell& theCell,
                                           const Handle(Mesh1d_Cell)& theCell1d) const;

    Standard_EXPORT void        UpdateGroup(const MeshDS_Group& theGroup,
                                            const Standard_Integer theGroupId) const;

    Standard_EXPORT void        UpdateGroup(const MeshDS_Group& theGroup,
                                            const TCollection_AsciiString& theGroupName) const;

    Standard_EXPORT void        UpdateNode(const MeshDS_Node& theNode,
                                           const Handle(Mesh1d_Node)& theNode1d) const;

protected:

    Standard_EXPORT void        MakeObject(MeshDS_Object& theObject,
                                           const Handle(MeshDS_TObject)& theTObject) const;

};

#endif // __MeshDS_Builder_hxx__

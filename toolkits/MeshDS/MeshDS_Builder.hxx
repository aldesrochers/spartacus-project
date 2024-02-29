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
#include <gp_Pnt2d.hxx>

// Spartacus
#include <gp_Pnt1d.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Group.hxx>
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

    Standard_EXPORT void    AddCell(const MeshDS_Group& theGroup,
                                    const MeshDS_Cell& theCell) const;

    Standard_EXPORT void    MakeCell(MeshDS_Cell& theCell) const;
    Standard_EXPORT void    MakeCell(MeshDS_Cell& theCell,
                                     const MeshAbs_TypeOfCell theCellType,
                                     const Standard_Integer theNbNodes) const;

    Standard_EXPORT void    MakeGroup(MeshDS_Group& theGroup) const;
    Standard_EXPORT void    MakeGroup(MeshDS_Group& theGroup,
                                      const TCollection_AsciiString& theName) const;

    Standard_EXPORT void    MakeNode(MeshDS_Node& theNode) const;
    Standard_EXPORT void    MakeNode(MeshDS_Node& theNode,
                                     const gp_Pnt1d& thePoint) const;
    Standard_EXPORT void    MakeNode(MeshDS_Node& theNode,
                                     const gp_Pnt2d& thePoint) const;
    Standard_EXPORT void    MakeNode(MeshDS_Node& theNode,
                                     const gp_Pnt& thePoint) const;

    Standard_EXPORT void    SetNode(const MeshDS_Cell& theCell,
                                    const Standard_Integer theIndex,
                                    const MeshDS_Node& theNode) const;

    Standard_EXPORT void    UpdateCell(const MeshDS_Cell& theCell,
                                       const MeshAbs_TypeOfCell theCellType,
                                       const Standard_Integer theNbNodes) const;

    Standard_EXPORT void    UpdateGroup(const MeshDS_Group& theGroup,
                                        const TCollection_AsciiString& theName) const;

    Standard_EXPORT void    UpdateNode(const MeshDS_Node& theNode,
                                       const gp_Pnt1d& thePoint) const;
    Standard_EXPORT void    UpdateNode(const MeshDS_Node& theNode,
                                       const gp_Pnt2d& thePoint) const;
    Standard_EXPORT void    UpdateNode(const MeshDS_Node& theNode,
                                       const gp_Pnt& thePoint) const;


protected:

    Standard_EXPORT void    MakeObject(MeshDS_Object& theObject,
                                       const Handle(MeshDS_TObject)& theTObject) const;

};


#endif // __MeshDS_Builder_hxx__

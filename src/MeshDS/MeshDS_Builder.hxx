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
#include <TColStd_SequenceOfReal.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>

// Spartacus
#include <gp_Pnt1d.hxx>
#include <Mesh1d_Vertex.hxx>
#include <MeshAbs_TypeOfCell.hxx>
#include <MeshAbs_TypeOfDimensionality.hxx>
#include <MeshAbs_TypeOfInterpolation.hxx>
#include <MeshAbs_TypeOfShape.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Edge.hxx>
#include <MeshDS_Group.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshDS_Object.hxx>
#include <MeshDS_TObject.hxx>
#include <MeshDS_Vertex.hxx>


// ============================================================================
/*!
 *  \brief MeshDS_Builder
*/
// ============================================================================
class MeshDS_Builder
{

public:

    DEFINE_STANDARD_ALLOC

public:

    Standard_EXPORT void    AddCell(const MeshDS_Group& theGroup,
                                    const MeshDS_Cell& theCell) const;

    Standard_EXPORT void    AddCell(const MeshDS_Mesh& theMesh,
                                    const MeshDS_Cell& theCell) const;

    Standard_EXPORT void    AddGroup(const MeshDS_Mesh& theMesh,
                                     const MeshDS_Group& theGroup) const;

    Standard_EXPORT void    AddVertex(const MeshDS_Cell& theCell,
                                    const MeshDS_Vertex& theVertex) const;

    Standard_EXPORT void    AddVertex(const MeshDS_Mesh& theMesh,
                                    const MeshDS_Vertex& theVertex) const;

    Standard_EXPORT void    MakeCell(MeshDS_Cell& theCell) const;

    Standard_EXPORT void    MakeCell(MeshDS_Cell& theCell,
                                     const TopoDS_Shape& theShape,
                                     const MeshAbs_TypeOfDimensionality theDimensionalityType,
                                     const MeshAbs_TypeOfShape theShapeType,
                                     const MeshAbs_TypeOfInterpolation theInterpolationType,
                                     const MeshAbs_TypeOfCell theCellType) const;

    Standard_EXPORT void    MakeEdge(MeshDS_Edge& theEdge) const;
    Standard_EXPORT void    MakeEdge(MeshDS_Edge& theEdge,
                                     const TopoDS_Edge& theTopology) const;

    Standard_EXPORT void    MakeGroup(MeshDS_Group& theGroup) const;
    Standard_EXPORT void    MakeGroup(MeshDS_Group& theGroup,
                                      const TCollection_AsciiString& theName) const;

    Standard_EXPORT void    MakeMesh(MeshDS_Mesh& theMesh) const;

    Standard_EXPORT void    MakeVertex(MeshDS_Vertex& theVertex) const;
    Standard_EXPORT void    MakeVertex(MeshDS_Vertex& theVertex,
                                       const gp_Pnt1d& thePoint) const;
    Standard_EXPORT void    MakeVertex(MeshDS_Vertex& theVertex,
                                       const gp_Pnt2d& thePoint) const;
    Standard_EXPORT void    MakeVertex(MeshDS_Vertex& theVertex,
                                       const gp_Pnt& thePoint) const;

    Standard_EXPORT void    RemoveCell(const MeshDS_Group& theGroup,
                                       const MeshDS_Cell& theCell) const;

    Standard_EXPORT void    RemoveCell(const MeshDS_Mesh& theMesh,
                                       const MeshDS_Cell& theCell) const;

    Standard_EXPORT void    RemoveGroup(const MeshDS_Mesh& theMesh,
                                        const MeshDS_Group& theGroup) const;

    Standard_EXPORT void    RemoveVertex(const MeshDS_Cell& theCell,
                                       const MeshDS_Vertex& theVertex) const;

    Standard_EXPORT void    RemoveVertex(const MeshDS_Mesh& theMesh,
                                       const MeshDS_Vertex& theVertex) const;

    Standard_EXPORT void    UpdateCell(const MeshDS_Cell& theCell,
                                       const TopoDS_Shape& theShape,
                                       const MeshAbs_TypeOfDimensionality theDimensionalityType,
                                       const MeshAbs_TypeOfShape theShapeType,
                                       const MeshAbs_TypeOfInterpolation theInterpolationType,
                                       const MeshAbs_TypeOfCell theCellType) const;

    Standard_EXPORT void    UpdateEdge(const MeshDS_Edge& theEdge,
                                       const TopoDS_Edge& theTopology) const;

    Standard_EXPORT void    UpdateGroup(const MeshDS_Group& theGroup,
                                        const TCollection_AsciiString& theName) const;

    Standard_EXPORT void    UpdateVertex(const MeshDS_Vertex& theVertex,
                                         const gp_Pnt1d& thePoint) const;
    Standard_EXPORT void    UpdateVertex(const MeshDS_Vertex& theVertex,
                                         const gp_Pnt2d& thePoint) const;
    Standard_EXPORT void    UpdateVertex(const MeshDS_Vertex& theVertex,
                                         const gp_Pnt& thePoint) const;

protected:

    Standard_EXPORT void    MakeObject(MeshDS_Object& theObject,
                                       const Handle(MeshDS_TObject)& theTObject) const;



};


#endif // __MeshDS_Builder_hxx__

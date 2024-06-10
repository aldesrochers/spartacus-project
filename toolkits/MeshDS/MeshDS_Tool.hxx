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
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TopoDS_Shape.hxx>

// Spartacus
#include <gp_Pnt1d.hxx>
#include <MeshAbs_TypeOfCell.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Group.hxx>
#include <MeshDS_ListOfObject.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshDS_SequenceOfObject.hxx>
#include <MeshDS_Vertex.hxx>


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

    static Standard_EXPORT const MeshDS_ListOfObject&       Cells(const MeshDS_Group& theGroup);

    static Standard_EXPORT MeshAbs_TypeOfCell               CellType(const MeshDS_Cell& theCell);

    static Standard_EXPORT const MeshDS_ListOfObject&       Groups(const MeshDS_Mesh& theMesh);

    static Standard_EXPORT Standard_Boolean                 IsPoint1d(const MeshDS_Vertex& theVertex);
    static Standard_EXPORT Standard_Boolean                 IsPoint2d(const MeshDS_Vertex& theVertex);
    static Standard_EXPORT Standard_Boolean                 IsPoint3d(const MeshDS_Vertex& theVertex);

    static Standard_EXPORT Standard_Integer                 NbCells(const MeshDS_Group& theGroup);
    static Standard_EXPORT Standard_Integer                 NbGroups(const MeshDS_Mesh& theMesh);
    static Standard_EXPORT Standard_Integer                 NbVertices(const MeshDS_Cell& theCell);

    static Standard_EXPORT const gp_Pnt1d&                  Point1d(const MeshDS_Vertex& theVertex);
    static Standard_EXPORT const gp_Pnt2d&                  Point2d(const MeshDS_Vertex& theVertex);
    static Standard_EXPORT const gp_Pnt&                    Point3d(const MeshDS_Vertex& theVertex);

    static Standard_EXPORT const TopoDS_Shape&              Shape(const MeshDS_Cell& theCell);

    static Standard_EXPORT const MeshDS_Vertex&             Vertex(const MeshDS_Cell& theCell,
                                                                   const Standard_Integer theIndex);

    static Standard_EXPORT const MeshDS_SequenceOfObject&   Vertices(const MeshDS_Cell& theCell);

};


#endif // __MeshDS_Tool_hxx__

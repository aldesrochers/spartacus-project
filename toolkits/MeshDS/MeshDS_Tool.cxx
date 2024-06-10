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
#include <MeshDS.hxx>
#include <MeshDS_Point1d.hxx>
#include <MeshDS_Point2d.hxx>
#include <MeshDS_Point3d.hxx>
#include <MeshDS_TCell.hxx>
#include <MeshDS_TGroup.hxx>
#include <MeshDS_TMesh.hxx>
#include <MeshDS_Tool.hxx>
#include <MeshDS_TVertex.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>
#include <Standard_NullObject.hxx>


// ============================================================================
/*!
 *  \brief Cells()
*/
// ============================================================================
const MeshDS_ListOfObject& MeshDS_Tool::Cells(const MeshDS_Group& theGroup)
{
    const MeshDS_TGroup* aTGroup = static_cast<const MeshDS_TGroup*>(theGroup.TObject().get());
    if(aTGroup == 0)
        throw Standard_NullObject("MeshDS_Tool::Cells()->Invalid group.");
    return aTGroup->Cells();
}

// ============================================================================
/*!
 *  \brief CellType()
*/
// ============================================================================
MeshAbs_TypeOfCell MeshDS_Tool::CellType(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::CellType()->Invalid cell.");
    return aTCell->CellType();
}

// ============================================================================
/*!
 *  \brief Groups()
*/
// ============================================================================
const MeshDS_ListOfObject& MeshDS_Tool::Groups(const MeshDS_Mesh& theMesh)
{
    const MeshDS_TMesh* aTMesh = static_cast<const MeshDS_TMesh*>(theMesh.TObject().get());
    if(aTMesh == 0)
        throw Standard_NullObject("MeshDS_Tool::Groups()->Invalid mesh.");
    return aTMesh->Groups();
}

// ============================================================================
/*!
 *  \brief IsPoint1d()
*/
// ============================================================================
Standard_Boolean MeshDS_Tool::IsPoint1d(const MeshDS_Vertex& theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    if(aTVertex == 0)
        throw Standard_NullObject("MeshDS_Tool::IsPoint1d()->Invalid vertex.");
    const Handle(MeshDS_Point)& aPoint = aTVertex->Point();
    return aPoint->IsPoint1d();
}

// ============================================================================
/*!
 *  \brief IsPoint2d()
*/
// ============================================================================
Standard_Boolean MeshDS_Tool::IsPoint2d(const MeshDS_Vertex& theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    if(aTVertex == 0)
        throw Standard_NullObject("MeshDS_Tool::IsPoint2d()->Invalid vertex.");
    const Handle(MeshDS_Point)& aPoint = aTVertex->Point();
    return aPoint->IsPoint2d();
}

// ============================================================================
/*!
 *  \brief IsPoint3d()
*/
// ============================================================================
Standard_Boolean MeshDS_Tool::IsPoint3d(const MeshDS_Vertex& theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    if(aTVertex == 0)
        throw Standard_NullObject("MeshDS_Tool::IsPoint3d()->Invalid vertex.");
    const Handle(MeshDS_Point)& aPoint = aTVertex->Point();
    return aPoint->IsPoint3d();
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer MeshDS_Tool::NbCells(const MeshDS_Group& theGroup)
{
    const MeshDS_TGroup* aTGroup = static_cast<const MeshDS_TGroup*>(theGroup.TObject().get());
    if(aTGroup == 0)
        throw Standard_NullObject("MeshDS_Tool::IsCell()->Invalid group.");
    const MeshDS_ListOfObject& aList = aTGroup->Cells();
    return aList.Size();
}

// ============================================================================
/*!
 *  \brief NbGroups()
*/
// ============================================================================
Standard_Integer MeshDS_Tool::NbGroups(const MeshDS_Mesh& theMesh)
{
    const MeshDS_TMesh* aTMesh = static_cast<const MeshDS_TMesh*>(theMesh.TObject().get());
    if(aTMesh == 0)
        throw Standard_NullObject("MeshDS_Tool::NbGroups()->Invalid mesh.");
    const MeshDS_ListOfObject& aList = aTMesh->Groups();
    return aList.Size();
}

// ============================================================================
/*!
 *  \brief NbVertices()
*/
// ============================================================================
Standard_Integer MeshDS_Tool::NbVertices(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::NbVertices()->Invalid cell.");
    const MeshDS_SequenceOfObject& aSequence = aTCell->Vertices();
    return aSequence.Size();
}

// ============================================================================
/*!
 *  \brief Point1d()
*/
// ============================================================================
const gp_Pnt1d& MeshDS_Tool::Point1d(const MeshDS_Vertex& theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    if(aTVertex == 0)
        throw Standard_NullObject("MeshDS_Tool::IsPoint3d()->Invalid vertex.");
    const Handle(MeshDS_Point1d)& aPoint1d =
        Handle(MeshDS_Point1d)::DownCast(aTVertex->Point());
    return aPoint1d->Point1d();
}

// ============================================================================
/*!
 *  \brief Point2d()
*/
// ============================================================================
const gp_Pnt2d& MeshDS_Tool::Point2d(const MeshDS_Vertex& theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    if(aTVertex == 0)
        throw Standard_NullObject("MeshDS_Tool::IsPoint3d()->Invalid vertex.");
    const Handle(MeshDS_Point2d)& aPoint2d =
        Handle(MeshDS_Point2d)::DownCast(aTVertex->Point());
    return aPoint2d->Point2d();
}

// ============================================================================
/*!
 *  \brief Point3d()
*/
// ============================================================================
const gp_Pnt& MeshDS_Tool::Point3d(const MeshDS_Vertex& theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    if(aTVertex == 0)
        throw Standard_NullObject("MeshDS_Tool::IsPoint3d()->Invalid vertex.");
    const Handle(MeshDS_Point3d)& aPoint3d =
        Handle(MeshDS_Point3d)::DownCast(aTVertex->Point());
    return aPoint3d->Point3d();
}

// ============================================================================
/*!
 *  \brief Shape
*/
// ============================================================================
const TopoDS_Shape& MeshDS_Tool::Shape(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Shape()->Invalid cell.");
    const TopoDS_Shape& aShape = aTCell->Shape();
    return aShape;
}

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const MeshDS_Vertex& MeshDS_Tool::Vertex(const MeshDS_Cell& theCell,
                                         const Standard_Integer theIndex)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::NbVertices()->Invalid cell.");
    const MeshDS_SequenceOfObject& aSequence = aTCell->Vertices();
    const MeshDS_Vertex& aVertex = MeshDS::Vertex(aSequence.Value(theIndex));
    return aVertex;
}

// ============================================================================
/*!
 *  \brief Vertices()
*/
// ============================================================================
const MeshDS_SequenceOfObject& MeshDS_Tool::Vertices(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Vertices()->Invalid cell.");
    const MeshDS_SequenceOfObject& aSequence = aTCell->Vertices();
    return aSequence;
}

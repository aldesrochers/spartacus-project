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

#include <iostream>
using namespace std;

// Spartacus
#include <Mesh_Point1d.hxx>
#include <Mesh_Point2d.hxx>
#include <Mesh_Point3d.hxx>
#include <MeshDS.hxx>
#include <MeshDS_TCell.hxx>
#include <MeshDS_TGroup.hxx>
#include <MeshDS_TMesh.hxx>
#include <MeshDS_Tool.hxx>
#include <MeshDS_TVertex.hxx>

// OpenCascade
#include <BRep_Tool.hxx>
#include <Standard_DomainError.hxx>
#include <Standard_NullObject.hxx>


// ============================================================================
/*!
 *  \brief CellType()
*/
// ============================================================================
MeshAbs_TypeOfCell MeshDS_Tool::CellType(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Shape()->Invalid cell.");
    //return aTCell->CellType();
}

// ============================================================================
/*!
 *  \brief DimensionalityType()
*/
// ============================================================================
MeshAbs_TypeOfDimensionality MeshDS_Tool::DimensionalityType(const MeshDS_Cell &theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Shape()->Invalid cell.");
    //return aTCell->DimensionalityType();
}

// ============================================================================
/*!
 *  \brief DimensionalityType()
*/
// ============================================================================
MeshAbs_TypeOfDimensionality MeshDS_Tool::DimensionalityType(const MeshDS_Vertex &theVertex)
{
    if(IsPoint1d(theVertex))
        return MeshAbs_DIM_1d;
    else if(IsPoint2d(theVertex))
        return MeshAbs_DIM_2d;
    else if(IsPoint3d(theVertex))
        return MeshAbs_DIM_3d;
    return MeshAbs_DIM_0d;
}

// ============================================================================
/*!
 *  \brief InterpolationType()
*/
// ============================================================================
MeshAbs_TypeOfInterpolation MeshDS_Tool::InterpolationType(const MeshDS_Cell &theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Shape()->Invalid cell.");
    //return aTCell->InterpolationType();
}

// ============================================================================
/*!
 *  \brief IsPoint1d()
*/
// ============================================================================
Standard_Boolean MeshDS_Tool::IsPoint1d(const MeshDS_Vertex &theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    if(aTVertex == 0)
        throw Standard_NullObject("MeshDS_Tool::IsPoint1d()->Invalid vertex.");
    //const Handle(Mesh_Point)& aPoint = aTVertex->Point();
    //return aPoint->IsPoint1d();
}

// ============================================================================
/*!
 *  \brief IsPoint2d()
*/
// ============================================================================
Standard_Boolean MeshDS_Tool::IsPoint2d(const MeshDS_Vertex &theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    if(aTVertex == 0)
        throw Standard_NullObject("MeshDS_Tool::IsPoint2d()->Invalid vertex.");
    //const Handle(Mesh_Point)& aPoint = aTVertex->Point();
    //return aPoint->IsPoint2d();
}

// ============================================================================
/*!
 *  \brief IsPoint3d()
*/
// ============================================================================
Standard_Boolean MeshDS_Tool::IsPoint3d(const MeshDS_Vertex &theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    if(aTVertex == 0)
        throw Standard_NullObject("MeshDS_Tool::IsPoint3d()->Invalid vertex.");
    //const Handle(Mesh_Point)& aPoint = aTVertex->Point();
    //return aPoint->IsPoint3d();
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
TCollection_AsciiString MeshDS_Tool::Name(const MeshDS_Group &theGroup)
{
    const MeshDS_TGroup* aTGroup = static_cast<const MeshDS_TGroup*>(theGroup.TObject().get());
    if(aTGroup == 0)
        throw Standard_NullObject("MeshDS_Tool::Name()->Invalid group.");
    return aTGroup->Name();
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const Handle(MeshDS_Point)& MeshDS_Tool::Point(const MeshDS_Vertex &theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    if(aTVertex == 0)
        throw Standard_NullObject("MeshDS_Tool::Point()->Invalid vertex.");
    return aTVertex->Point();
}

// ============================================================================
/*!
 *  \brief Shape()
*/
// ============================================================================
TopoDS_Shape MeshDS_Tool::Shape(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Shape()->Invalid cell.");
    //return aTCell->Shape();
}

// ============================================================================
/*!
 *  \brief ShapeType()
*/
// ============================================================================
MeshAbs_TypeOfShape MeshDS_Tool::ShapeType(const MeshDS_Cell &theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Shape()->Invalid cell.");
    //return aTCell->ShapeType();
}


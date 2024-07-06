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
#include <MeshDS_TCell.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TCell::MeshDS_TCell()
    : myCellType(MeshAbs_CELL_Invalid)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TCell::~MeshDS_TCell()
{

}

// ============================================================================
/*!
 *  \brief CellType()
*/
// ============================================================================
MeshAbs_TypeOfCell MeshDS_TCell::CellType() const
{
    return myCellType;
}

// ============================================================================
/*!
 *  \brief DimensionalityType()
*/
// ============================================================================
MeshAbs_TypeOfDimensionality MeshDS_TCell::DimensionalityType() const
{
    return myDimensionalityType;
}

// ============================================================================
/*!
 *  \brief InterpolationType()
*/
// ============================================================================
MeshAbs_TypeOfInterpolation MeshDS_TCell::InterpolationType() const
{
    return myInterpolationType;
}

// ============================================================================
/*!
 *  \brief LinkedGroups()
*/
// ============================================================================
const MeshDS_ListOfObject& MeshDS_TCell::LinkedGroups() const
{
    return myLinkedGroups;
}

// ============================================================================
/*!
 *  \brief LinkedGroups()
*/
// ============================================================================
MeshDS_ListOfObject& MeshDS_TCell::LinkedGroups()
{
    return myLinkedGroups;
}

// ============================================================================
/*!
 *  \brief Vertices()
*/
// ============================================================================
const MeshDS_SequenceOfObject& MeshDS_TCell::Vertices() const
{
    return myVertices;
}

// ============================================================================
/*!
 *  \brief Vertices()
*/
// ============================================================================
MeshDS_SequenceOfObject& MeshDS_TCell::Vertices()
{
    return myVertices;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
MeshAbs_TypeOfObject MeshDS_TCell::ObjectType() const
{
    return MeshAbs_OBJ_Cell;
}

// ============================================================================
/*!
 *  \brief SetCellType()
*/
// ============================================================================
void MeshDS_TCell::SetCellType(const MeshAbs_TypeOfCell theCellType)
{
    myCellType = theCellType;
}

// ============================================================================
/*!
 *  \brief SetDimensionalityType()
*/
// ============================================================================
void MeshDS_TCell::SetDimensionalityType(const MeshAbs_TypeOfDimensionality theDimensionalityType)
{
    myDimensionalityType = theDimensionalityType;
}

// ============================================================================
/*!
 *  \brief SetInterpolationType()
*/
// ============================================================================
void MeshDS_TCell::SetInterpolationType(const MeshAbs_TypeOfInterpolation theInterpolationType)
{
    myInterpolationType = theInterpolationType;
}

// ============================================================================
/*!
 *  \brief SetShape()
*/
// ============================================================================
void MeshDS_TCell::SetShape(const TopoDS_Shape &theShape)
{
    myShape = theShape;
}

// ============================================================================
/*!
 *  \brief SetShapeType()
*/
// ============================================================================
void MeshDS_TCell::SetShapeType(const MeshAbs_TypeOfShape theShapeType)
{
    myShapeType = theShapeType;
}

// ============================================================================
/*!
 *  \brief Shape()
*/
// ============================================================================
const TopoDS_Shape& MeshDS_TCell::Shape() const
{
    return myShape;
}

// ============================================================================
/*!
 *  \brief ShapeType()
*/
// ============================================================================
MeshAbs_TypeOfShape MeshDS_TCell::ShapeType() const
{
    return myShapeType;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TCell, MeshDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TCell, MeshDS_TObject)

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
#include <BRepCell_MakeLine.hxx>
#include <MeshBuilder_MakeLine.hxx>
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshDS_Tool.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeLine::MeshBuilder_MakeLine(const MeshDS_Vertex& theVertex1,
                                           const MeshDS_Vertex& theVertex2)
{
    Initialize(theVertex1, theVertex2);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MakeLine::~MeshBuilder_MakeLine()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MakeLine::Initialize(const MeshDS_Vertex &theVertex1,
                                      const MeshDS_Vertex &theVertex2)
{
    // check vertices dimensionality
    MeshAbs_TypeOfDimensionality aDim1 = MeshDS_Tool::DimensionalityType(theVertex1);
    MeshAbs_TypeOfDimensionality aDim2 = MeshDS_Tool::DimensionalityType(theVertex2);
    if(aDim1 != aDim2) {
        myError = MeshBuilder_CellDimensionalityError;
        SetNotDone();
        return;
    }

    // define cell properties
    MeshAbs_TypeOfDimensionality aDimensionality = aDim1;
    MeshAbs_TypeOfInterpolation anInterpolationType = MeshAbs_INTERP_Linear;
    MeshAbs_TypeOfShape aShapeType = MeshAbs_SHAPE_Line;

    // process cell type
    /*
    MeshAbs_TypeOfCell aCellType;
    if(aDimensionality == MeshAbs_DIM_1D) {
        aCellType = MeshAbs_CELL_LinearLine1d;
    } else if(aDimensionality == MeshAbs_DIM_2D) {
        aCellType = MeshAbs_CELL_LinearLine2d;
    } else if(aDimensionality == MeshAbs_DIM_3D) {
        aCellType = MeshAbs_CELL_LinearLine;
    } else {
        myError = MeshBuilder_CellDimensionalityError;
        SetNotDone();
        return;
    }
    */

    // make shape
    const gp_Pnt& aPoint1 = MeshDS_Tool::Point(theVertex1);
    const gp_Pnt& aPoint2 = MeshDS_Tool::Point(theVertex2);
    BRepCell_MakeLine aShapeBuilder(aPoint1, aPoint2);
    if(!aShapeBuilder.IsDone()) {
        myError = MeshBuilder_CellShapeError;
        SetNotDone();
        return;
    }
    TopoDS_Shape aShape = aShapeBuilder.Shape();

    // make cell
    MeshDS_Builder aBuilder;
    //aBuilder.MakeCell(MeshDS::Cell(myObject), aShape, aDimensionality, aShapeType, anInterpolationType, aCellType);
    aBuilder.AddVertex(MeshDS::Cell(myObject), theVertex1);
    aBuilder.AddVertex(MeshDS::Cell(myObject), theVertex2);
    SetDone();
}


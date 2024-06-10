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
#include <BRepCell_MakeTriangle.hxx>
#include <MeshBuilder_MakeTriangle.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshDS_Tool.hxx>
#include <MeshDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeTriangle::MeshBuilder_MakeTriangle(const MeshDS_Node& theNode1,
                                                   const MeshDS_Node& theNode2,
                                                   const MeshDS_Node& theNode3)
{
    Initialize(theNode1, theNode2, theNode3);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MakeTriangle::~MeshBuilder_MakeTriangle()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MakeTriangle::Initialize(const MeshDS_Node &theNode1,
                                          const MeshDS_Node &theNode2,
                                          const MeshDS_Node &theNode3)
{
    // initialize cell connectivity
    MeshDS_Builder aBuilder;
    //aBuilder.MakeCell(MeshDS::Cell(myObject));
    aBuilder.ResizeNodes(MeshDS::Cell(myObject), 3);
    aBuilder.SetNode(MeshDS::Cell(myObject), 1, theNode1);
    aBuilder.SetNode(MeshDS::Cell(myObject), 2, theNode2);
    aBuilder.SetNode(MeshDS::Cell(myObject), 3, theNode3);
    //aBuilder.SetType(MeshDS::Cell(myObject), MeshAbs_CELL_LinearTriangle);

    // create cell shape
    gp_Pnt aPoint1 = MeshDS_Tool::Point(theNode1);
    gp_Pnt aPoint2 = MeshDS_Tool::Point(theNode2);
    gp_Pnt aPoint3 = MeshDS_Tool::Point(theNode3);
    BRepCell_MakeTriangle aShapeBuilder(aPoint1, aPoint2, aPoint3);
    if(!aShapeBuilder.IsDone()) {
        SetError(MeshBuilder_CellShapeError);
        SetNotDone();
        return;
    }

    TopoDS_Shape aShape = aShapeBuilder.Shape();
    aBuilder.SetShape(MeshDS::Cell(myObject), aShape);
    SetDone();
}

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
#include <BRepCell_MakeLine.hxx>
#include <MeshBuilder_MakeLine.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshDS_Tool.hxx>
#include <MeshDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeLine::MeshBuilder_MakeLine(const MeshDS_Node& theNode1,
                                           const MeshDS_Node& theNode2)
{
    Initialize(theNode1, theNode2);
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
void MeshBuilder_MakeLine::Initialize(const MeshDS_Node &theNode1,
                                      const MeshDS_Node &theNode2)
{
    // create cell shape
    gp_Pnt aPoint1 = MeshDS_Tool::Point(theNode1);
    gp_Pnt aPoint2 = MeshDS_Tool::Point(theNode2);
    BRepCell_MakeLine aShapeBuilder(aPoint1, aPoint2);
    if(!aShapeBuilder.IsDone()) {
        SetError(MeshBuilder_CellShapeError);
        SetNotDone();
        return;
    }
    TopoDS_Shape aShape = aShapeBuilder.Shape();

    // make cell
    MeshDS_Builder aBuilder;
    aBuilder.MakeCell(MeshDS::Cell(myObject));
    aBuilder.AddNode(MeshDS::Cell(myObject), theNode1);
    aBuilder.AddNode(MeshDS::Cell(myObject), theNode2);
    aBuilder.SetShape(MeshDS::Cell(myObject), aShape);
    aBuilder.SetType(MeshDS::Cell(myObject), MeshAbs_CELL_LinearLine);
    SetDone();
}

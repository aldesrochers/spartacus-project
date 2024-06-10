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
#include <MeshDS_Builder.hxx>
#include <MeshDS_Point1d.hxx>
#include <MeshDS_Point2d.hxx>
#include <MeshDS_Point3d.hxx>
#include <MeshDS_TCell.hxx>
#include <MeshDS_TGroup.hxx>
#include <MeshDS_TMesh.hxx>
#include <MeshDS_Tool.hxx>
#include <MeshDS_TVertex.hxx>
#include <MeshDS.hxx>

// ============================================================================
/*!
 *  \brief AddCell()
*/
// ============================================================================
void MeshDS_Builder::AddCell(const MeshDS_Group &theGroup,
                             const MeshDS_Cell &theCell) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    MeshDS_ListOfObject& aList = aTGroup->Cells();
    aList.Append(theCell);
}

// ============================================================================
/*!
 *  \brief AddGroup()
*/
// ============================================================================
void MeshDS_Builder::AddGroup(const MeshDS_Mesh &theMesh,
                              const MeshDS_Group &theGroup) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    MeshDS_ListOfObject& aList = aTMesh->Groups();
    aList.Append(theGroup);
}

// ============================================================================
/*!
 *  \brief AddVertex()
*/
// ============================================================================
void MeshDS_Builder::AddVertex(const MeshDS_Cell &theCell,
                               const MeshDS_Vertex &theVertex) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    MeshDS_SequenceOfObject& aSequence = aTCell->Vertices();
    aSequence.Append(theVertex);
}

// ============================================================================
/*!
 *  \brief MakeCell()
*/
// ============================================================================
void MeshDS_Builder::MakeCell(MeshDS_Cell &theCell) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell();
    MakeObject(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeCell()
*/
// ============================================================================
void MeshDS_Builder::MakeCell(MeshDS_Cell &theCell,
                              const MeshAbs_TypeOfCell theCellType) const
{
    MakeCell(theCell);
    UpdateCell(theCell, theCellType);
}

// ============================================================================
/*!
 *  \brief MakeGroup()
*/
// ============================================================================
void MeshDS_Builder::MakeGroup(MeshDS_Group &theGroup) const
{
    Handle(MeshDS_TGroup) aTGroup = new MeshDS_TGroup();
    MakeObject(theGroup, aTGroup);
}

// ============================================================================
/*!
 *  \brief MakeGroup()
*/
// ============================================================================
void MeshDS_Builder::MakeGroup(MeshDS_Group &theGroup,
                               const TCollection_AsciiString &theName) const
{
    MakeGroup(theGroup);
    UpdateGroup(theGroup, theName);
}

// ============================================================================
/*!
 *  \brief MakeMesh()
*/
// ============================================================================
void MeshDS_Builder::MakeMesh(MeshDS_Mesh &theMesh) const
{
    Handle(MeshDS_TMesh) aTMesh = new MeshDS_TMesh();
    MakeObject(theMesh, aTMesh);
}

// ============================================================================
/*!
 *  \brief MakeVertex()
*/
// ============================================================================
void MeshDS_Builder::MakeVertex(MeshDS_Vertex &theVertex) const
{
    Handle(MeshDS_TVertex) aTVertex = new MeshDS_TVertex();
    MakeObject(theVertex, aTVertex);
}

// ============================================================================
/*!
 *  \brief MakeVertex()
*/
// ============================================================================
void MeshDS_Builder::MakeVertex(MeshDS_Vertex &theVertex,
                                const gp_Pnt1d& thePoint) const
{
    MakeVertex(theVertex);
    UpdateVertex(theVertex, thePoint);
}

// ============================================================================
/*!
 *  \brief MakeVertex()
*/
// ============================================================================
void MeshDS_Builder::MakeVertex(MeshDS_Vertex &theVertex,
                                const gp_Pnt2d& thePoint) const
{
    MakeVertex(theVertex);
    UpdateVertex(theVertex, thePoint);
}

// ============================================================================
/*!
 *  \brief MakeVertex()
*/
// ============================================================================
void MeshDS_Builder::MakeVertex(MeshDS_Vertex &theVertex,
                              const gp_Pnt& thePoint) const
{
    MakeVertex(theVertex);
    UpdateVertex(theVertex, thePoint);
}

// ============================================================================
/*!
 *  \brief MakeObject()
*/
// ============================================================================
void MeshDS_Builder::MakeObject(MeshDS_Object &theObject,
                                const Handle(MeshDS_TObject) &theTObject) const
{
    theObject.SetTObject(theTObject);
}

// ============================================================================
/*!
 *  \brief UpdateCell()
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const MeshAbs_TypeOfCell theCellType) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    aTCell->SetCellType(theCellType);
}

// ============================================================================
/*!
 *  \brief UpdateCell()
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const TopoDS_Shape& theShape) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    aTCell->SetShape(theShape);
}

// ============================================================================
/*!
 *  \brief UpdateCell()
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const MeshDS_SequenceOfObject& theVertices) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    MeshDS_SequenceOfObject& aSequence = aTCell->Vertices();
    aSequence = theVertices;
}

// ============================================================================
/*!
 *  \brief UpdateGroup()
*/
// ============================================================================
void MeshDS_Builder::UpdateGroup(const MeshDS_Group &theGroup,
                                 const TCollection_AsciiString& theName) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    aTGroup->SetName(theName);
}

// ============================================================================
/*!
 *  \brief UpdateVertex()
*/
// ============================================================================
void MeshDS_Builder::UpdateVertex(const MeshDS_Vertex &theVertex,
                                  const gp_Pnt1d& thePoint) const
{
    const Handle(MeshDS_TVertex)& aTVertex = *((Handle(MeshDS_TVertex)*) &theVertex.TObject());
    Handle(MeshDS_Point1d) aPoint1d = new MeshDS_Point1d(thePoint);
    aTVertex->SetPoint(aPoint1d);
}

// ============================================================================
/*!
 *  \brief UpdateVertex()
*/
// ============================================================================
void MeshDS_Builder::UpdateVertex(const MeshDS_Vertex &theVertex,
                                  const gp_Pnt2d& thePoint) const
{
    const Handle(MeshDS_TVertex)& aTVertex = *((Handle(MeshDS_TVertex)*) &theVertex.TObject());
    Handle(MeshDS_Point2d) aPoint2d = new MeshDS_Point2d(thePoint);
    aTVertex->SetPoint(aPoint2d);
}

// ============================================================================
/*!
 *  \brief UpdateVertex()
*/
// ============================================================================
void MeshDS_Builder::UpdateVertex(const MeshDS_Vertex &theVertex,
                                  const gp_Pnt& thePoint) const
{
    const Handle(MeshDS_TVertex)& aTVertex = *((Handle(MeshDS_TVertex)*) &theVertex.TObject());
    Handle(MeshDS_Point3d) aPoint3d = new MeshDS_Point3d(thePoint);
    aTVertex->SetPoint(aPoint3d);
}

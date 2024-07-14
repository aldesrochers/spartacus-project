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
#include <Mesh_Curve1d.hxx>
#include <Mesh_Curve2d.hxx>
#include <Mesh_Curve3d.hxx>
#include <Mesh_Point1d.hxx>
#include <Mesh_Point2d.hxx>
#include <Mesh_Point3d.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshDS_TCell.hxx>
#include <MeshDS_TEdge.hxx>
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
                             const MeshDS_Cell& theCell) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    MeshDS_ListOfObject& aList1 = aTGroup->Cells();
    aList1.Append(theCell);
    // link Group to Cell
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    MeshDS_ListOfObject& aList2 = aTCell->LinkedGroups();
    aList2.Append(theGroup);
}

// ============================================================================
/*!
 *  \brief AddCell()
*/
// ============================================================================
void MeshDS_Builder::AddCell(const MeshDS_Mesh &theMesh,
                             const MeshDS_Cell& theCell) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    MeshDS_SequenceOfObject& aSequence = aTMesh->Cells();
    aSequence.Append(theCell);
    // link Mesh to Cell
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    //aTCell->SetMesh(theMesh);
}

// ============================================================================
/*!
 *  \brief AddGroup()
*/
// ============================================================================
void MeshDS_Builder::AddGroup(const MeshDS_Mesh &theMesh,
                              const MeshDS_Group& theGroup) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    MeshDS_SequenceOfObject& aSequence = aTMesh->Groups();
    aSequence.Append(theGroup);
    // link Mesh to Group
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    aTGroup->SetMesh(theMesh);
}

// ============================================================================
/*!
 *  \brief AddVertex()
*/
// ============================================================================
void MeshDS_Builder::AddVertex(const MeshDS_Cell &theCell,
                             const MeshDS_Vertex& theVertex) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    MeshDS_SequenceOfObject& aSequence = aTCell->Vertices();
    aSequence.Append(theVertex);
    // link cell to Vertex
    const Handle(MeshDS_TVertex)& aTVertex = *((Handle(MeshDS_TVertex)*) &theVertex.TObject());
    MeshDS_ListOfObject& aList = aTVertex->LinkedCells();
    aList.Append(theCell);
}

// ============================================================================
/*!
 *  \brief AddVertex()
*/
// ============================================================================
void MeshDS_Builder::AddVertex(const MeshDS_Edge &theEdge,
                               const MeshDS_Vertex& theVertex) const
{
    const Handle(MeshDS_TEdge)& aTEdge = *((Handle(MeshDS_TEdge)*) &theEdge.TObject());
    MeshDS_SequenceOfObject& aSequence = aTEdge->Vertices();
    aSequence.Append(theVertex);
}

// ============================================================================
/*!
 *  \brief AddVertex()
*/
// ============================================================================
void MeshDS_Builder::AddVertex(const MeshDS_Mesh &theMesh,
                             const MeshDS_Vertex& theVertex) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    MeshDS_SequenceOfObject& aSequence = aTMesh->Vertices();
    aSequence.Append(theVertex);
    // link Mesh to Vertex
    const Handle(MeshDS_TVertex)& aTVertex = *((Handle(MeshDS_TVertex)*) &theVertex.TObject());
    //aTVertex->SetMesh(theMesh);
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
                              const TopoDS_Shape& theShape,
                              const MeshAbs_TypeOfDimensionality theDimensionalityType,
                              const MeshAbs_TypeOfShape theShapeType,
                              const MeshAbs_TypeOfInterpolation theInterpolationType,
                              const MeshAbs_TypeOfCell theCellType) const
{
    MakeCell(theCell);
    UpdateCell(theCell, theShape, theDimensionalityType, theShapeType, theInterpolationType, theCellType);
}

// ============================================================================
/*!
 *  \brief MakeEdge()
*/
// ============================================================================
void MeshDS_Builder::MakeEdge(MeshDS_Edge &theEdge) const
{
    Handle(MeshDS_TEdge) aTEdge = new MeshDS_TEdge();
    MakeObject(theEdge, aTEdge);
}

// ============================================================================
/*!
 *  \brief MakeEdge()
*/
// ============================================================================
void MeshDS_Builder::MakeEdge(MeshDS_Edge &theEdge,
                              const Handle(Geom2d_Curve)& theCurve) const
{
    MakeEdge(theEdge);
    UpdateEdge(theEdge, theCurve);
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
 *  \brief RemoveCell()
*/
// ============================================================================
void MeshDS_Builder::RemoveCell(const MeshDS_Group &theGroup,
                                const MeshDS_Cell& theCell) const
{
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    MeshDS_ListOfObject& aList1 = aTGroup->Cells();
    MeshDS_ListIteratorOfListOfObject anIterator1(aList1);
    for(; anIterator1.More(); anIterator1.Next()) {
        if(theCell.IsEqual(anIterator1.Value())) {
            aList1.Remove(anIterator1);
            break;
        }
    }
    // unlink group from cell
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    MeshDS_ListOfObject& aList2 = aTCell->LinkedGroups();
    MeshDS_ListIteratorOfListOfObject anIterator2(aList2);
    for(; anIterator2.More(); anIterator2.Next()) {
        if(theGroup.IsEqual(anIterator2.Value())) {
            aList2.Remove(anIterator2);
            break;
        }
    }
}

// ============================================================================
/*!
 *  \brief RemoveCell()
*/
// ============================================================================
void MeshDS_Builder::RemoveCell(const MeshDS_Mesh &theMesh,
                                const MeshDS_Cell& theCell) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    MeshDS_SequenceOfObject& aSequence = aTMesh->Cells();
    for(Standard_Integer i=1; i<=aSequence.Size(); i++) {
        if(theCell.IsEqual(aSequence.Value(i))) {
            aSequence.Remove(i);
            break;
        }
    }
    // unlink Mesh from cell
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    MeshDS_Mesh aMesh;
    //aTCell->SetMesh(aMesh);
}

// ============================================================================
/*!
 *  \brief RemoveGroup()
*/
// ============================================================================
void MeshDS_Builder::RemoveGroup(const MeshDS_Mesh &theMesh,
                                 const MeshDS_Group& theGroup) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    MeshDS_SequenceOfObject& aSequence = aTMesh->Groups();
    for(Standard_Integer i=1; i<=aSequence.Size(); i++) {
        if(theGroup.IsEqual(aSequence.Value(i))) {
            aSequence.Remove(i);
            break;
        }
    }
    // unlink Mesh from Group
    const Handle(MeshDS_TGroup)& aTGroup = *((Handle(MeshDS_TGroup)*) &theGroup.TObject());
    MeshDS_Mesh aMesh;
    aTGroup->SetMesh(aMesh);
}

// ============================================================================
/*!
 *  \brief RemoveVertex()
*/
// ============================================================================
void MeshDS_Builder::RemoveVertex(const MeshDS_Cell &theCell,
                                const MeshDS_Vertex& theVertex) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    MeshDS_SequenceOfObject& aSequence = aTCell->Vertices();
    for(Standard_Integer i=1; i<=aSequence.Size(); i++) {
        if(theVertex.IsEqual(aSequence.Value(i))) {
            aSequence.Remove(i);
            break;
        }
    }
    // unlink cell from Vertex
    const Handle(MeshDS_TVertex)& aTVertex = *((Handle(MeshDS_TVertex)*) &theVertex.TObject());
    MeshDS_ListOfObject& aList = aTVertex->LinkedCells();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        if(theCell.IsEqual(anIterator.Value())) {
            aList.Remove(anIterator);
            break;
        }
    }
}

// ============================================================================
/*!
 *  \brief RemoveVertex()
*/
// ============================================================================
void MeshDS_Builder::RemoveVertex(const MeshDS_Mesh &theMesh,
                                const MeshDS_Vertex& theVertex) const
{
    const Handle(MeshDS_TMesh)& aTMesh = *((Handle(MeshDS_TMesh)*) &theMesh.TObject());
    MeshDS_SequenceOfObject& aSequence = aTMesh->Vertices();
    for(Standard_Integer i=1; i<=aSequence.Size(); i++) {
        if(theVertex.IsEqual(aSequence.Value(i))) {
            aSequence.Remove(i);
            break;
        }
    }
    // unlink Mesh from Vertex
    const Handle(MeshDS_TVertex)& aTVertex = *((Handle(MeshDS_TVertex)*) &theVertex.TObject());
    MeshDS_Mesh aMesh;
    //aTVertex->SetMesh(aMesh);
}

// ============================================================================
/*!
 *  \brief UpdateCell()
*/
// ============================================================================
void MeshDS_Builder::UpdateCell(const MeshDS_Cell &theCell,
                                const TopoDS_Shape& theShape,
                                const MeshAbs_TypeOfDimensionality theDimensionalityType,
                                const MeshAbs_TypeOfShape theShapeType,
                                const MeshAbs_TypeOfInterpolation theInterpolationType,
                                const MeshAbs_TypeOfCell theCellType) const
{
    const Handle(MeshDS_TCell)& aTCell = *((Handle(MeshDS_TCell)*) &theCell.TObject());
    //aTCell->SetCellType(theCellType);
    //aTCell->SetDimensionalityType(theDimensionalityType);
    //aTCell->SetInterpolationType(theInterpolationType);
    //aTCell->SetShape(theShape);
    //aTCell->SetShapeType(theShapeType);
}

// ============================================================================
/*!
 *  \brief UpdateEdge()
*/
// ============================================================================
void MeshDS_Builder::UpdateEdge(const MeshDS_Edge &theEdge,
                                const Handle(Geom2d_Curve)& theCurve) const
{
    const Handle(MeshDS_TEdge)& aTEdge = *((Handle(MeshDS_TEdge)*) &theEdge.TObject());
    Handle(Mesh_Curve2d) aCurve2d = new Mesh_Curve2d(theCurve);

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
    Handle(Mesh_Point1d) aPoint = new Mesh_Point1d(thePoint);
    aTVertex->SetPoint(aPoint);
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
    Handle(Mesh_Point2d) aPoint = new Mesh_Point2d(thePoint);
    aTVertex->SetPoint(aPoint);
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
    Handle(Mesh_Point3d) aPoint = new Mesh_Point3d(thePoint);
    aTVertex->SetPoint(aPoint);
}

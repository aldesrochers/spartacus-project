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
#include <MeshDS_TGroup.hxx>
#include <MeshDS_TMesh.hxx>
#include <MeshDS_TVertex.hxx>
#include <MeshExp.hxx>


// ============================================================================
/*!
 *  \brief MapCells()
*/
// ============================================================================
void MeshExp::MapCells(const MeshDS_Mesh &theMesh,
                       MeshTools_IndexedMapOfObject &theMap)
{
    const MeshDS_TMesh* aTMesh = static_cast<const MeshDS_TMesh*>(theMesh.TObject().get());
    const MeshDS_SequenceOfObject& anArray = aTMesh->Cells();
    for(Standard_Integer i=anArray.Lower(); i<=anArray.Upper(); i++)
        theMap.Add(anArray.Value(i));
}

// ============================================================================
/*!
 *  \brief MapCells()
*/
// ============================================================================
void MeshExp::MapCells(const MeshDS_Group &theGroup,
                       MeshTools_IndexedMapOfObject &theMap)
{
    const MeshDS_TGroup* aTGroup = static_cast<const MeshDS_TGroup*>(theGroup.TObject().get());
    const MeshDS_ListOfObject& aList = aTGroup->Cells();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theMap.Add(anIterator.Value());
}

// ============================================================================
/*!
 *  \brief MapGroups()
*/
// ============================================================================
void MeshExp::MapGroups(const MeshDS_Mesh &theMesh,
                        MeshTools_IndexedMapOfObject &theMap)
{
    const MeshDS_TMesh* aTMesh = static_cast<const MeshDS_TMesh*>(theMesh.TObject().get());
    const MeshDS_SequenceOfObject& anArray = aTMesh->Groups();
    for(Standard_Integer i=anArray.Lower(); i<=anArray.Upper(); i++)
        theMap.Add(anArray.Value(i));
}

// ============================================================================
/*!
 *  \brief MapVertices()
*/
// ============================================================================
void MeshExp::MapVertices(const MeshDS_Mesh &theMesh,
                       MeshTools_IndexedMapOfObject &theMap)
{
    const MeshDS_TMesh* aTMesh = static_cast<const MeshDS_TMesh*>(theMesh.TObject().get());
    const MeshDS_SequenceOfObject& anArray = aTMesh->Vertices();
    for(Standard_Integer i=anArray.Lower(); i<=anArray.Upper(); i++)
        theMap.Add(anArray.Value(i));
}

// ============================================================================
/*!
 *  \brief MapVertices()
*/
// ============================================================================
void MeshExp::MapVertices(const MeshDS_Group &theGroup,
                       MeshTools_IndexedMapOfObject &theMap)
{
    const MeshDS_TGroup* aTGroup = static_cast<const MeshDS_TGroup*>(theGroup.TObject().get());
    const MeshDS_ListOfObject& aList = aTGroup->Cells();
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        MeshTools_IndexedMapOfObject aMap;
        MeshExp::MapVertices(MeshDS::Cell(anIterator.Value()), aMap);
        for(Standard_Integer i=1; i<=aMap.Size(); i++)
            theMap.Add(MeshDS::Vertex(aMap.FindKey(i)));
    }
}

// ============================================================================
/*!
 *  \brief MapVertices()
*/
// ============================================================================
void MeshExp::MapVertices(const MeshDS_Cell &theCell,
                       MeshTools_IndexedMapOfObject &theMap)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    const MeshDS_SequenceOfObject& anArray = aTCell->Vertices();
    for(Standard_Integer i=anArray.Lower(); i<=anArray.Upper(); i++)
        theMap.Add(anArray.Value(i));
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const MeshDS_Mesh& MeshExp::Mesh(const MeshDS_Cell &theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    //return aTCell->Mesh();
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const MeshDS_Mesh& MeshExp::Mesh(const MeshDS_Group &theGroup)
{
    const MeshDS_TGroup* aTGroup = static_cast<const MeshDS_TGroup*>(theGroup.TObject().get());
    return aTGroup->Mesh();
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const MeshDS_Mesh& MeshExp::Mesh(const MeshDS_Vertex &theVertex)
{
    const MeshDS_TVertex* aTVertex = static_cast<const MeshDS_TVertex*>(theVertex.TObject().get());
    //return aTVertex->Mesh();
}

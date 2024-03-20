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
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshExp.hxx>
#include <MeshLib_MakeMesh.hxx>
#include <MeshTools_IndexedMapOfObject.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeMesh::MeshLib_MakeMesh()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MakeMesh::~MeshLib_MakeMesh()
{

}

// ============================================================================
/*!
 *  \brief Add()
*/
// ============================================================================
void MeshLib_MakeMesh::Add(const MeshDS_Node &theNode)
{
    if(myNodes.Contains(theNode))
        return;
    myNodes.Add(theNode);
}

// ============================================================================
/*!
 *  \brief Add()
*/
// ============================================================================
void MeshLib_MakeMesh::Add(const MeshDS_Cell &theCell)
{
    // add cell to internal map
    if(myCells.Contains(theCell))
        return;
    myCells.Add(theCell);

    // get cell nodes, add to internal maps
    MeshTools_ListOfObject aList;
    MeshExp::ListNodes(theCell, aList);
    MeshTools_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        Add(MeshDS::Node(anIterator.Value()));
}

// ============================================================================
/*!
 *  \brief Add()
*/
// ============================================================================
void MeshLib_MakeMesh::Add(const MeshDS_Group &theGroup)
{
    // add group to internal map
    if(myGroups.Contains(theGroup))
        return;
    myGroups.Add(theGroup);

    // get group cells, add to internal maps
    MeshTools_ListOfObject aList;
    MeshExp::ListCells(theGroup, aList);
    MeshTools_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        Add(MeshDS::Cell(anIterator.Value()));
}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void MeshLib_MakeMesh::Build()
{
    // make mesh
    Standard_Integer nbNodes = myNodes.Size();
    Standard_Integer nbCells = myCells.Size();
    Standard_Integer nbGroups = myGroups.Size();
    MeshDS_Builder aBuilder;
    aBuilder.MakeMesh(MeshDS::Mesh(myObject), nbNodes, nbCells, nbGroups);

    // add nodes in mesh
    for(Standard_Integer i=1; i<=myNodes.Size(); i++) {
        MeshDS_Node aNode = MeshDS::Node(myNodes.FindKey(i));
        aBuilder.SetNode(MeshDS::Mesh(myObject), i, aNode);
    }

    // add cells in mesh
    for(Standard_Integer i=1; i<=myCells.Size(); i++) {
        MeshDS_Cell aCell = MeshDS::Cell(myCells.FindKey(i));
        aBuilder.SetCell(MeshDS::Mesh(myObject), i, aCell);
    }

    // add groups in mesh
    for(Standard_Integer i=1; i<=myGroups.Size(); i++) {
        MeshDS_Group aGroup = MeshDS::Group(myGroups.FindKey(i));
        aBuilder.SetGroup(MeshDS::Mesh(myObject), i, aGroup);
    }

    SetDone();
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer MeshLib_MakeMesh::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbGroups()
*/
// ============================================================================
Standard_Integer MeshLib_MakeMesh::NbGroups() const
{
    return myGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer MeshLib_MakeMesh::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const MeshDS_Mesh&  MeshLib_MakeMesh::Mesh()
{
    return MeshDS::Mesh(Object());
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Mesh()
*/
// ============================================================================
MeshLib_MakeMesh::operator MeshDS_Mesh()
{
    return Mesh();
}


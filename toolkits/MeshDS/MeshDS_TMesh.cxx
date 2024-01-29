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
#include <MeshDS_TMesh.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TMesh::MeshDS_TMesh()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TMesh::~MeshDS_TMesh()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const MeshDS_Cell& MeshDS_TMesh::Cell(const Standard_Integer theIndex) const
{
    return myCells.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
const MeshDS_Group& MeshDS_TMesh::Group(const Standard_Integer theIndex) const
{
    return myGroups.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const MeshDS_Node& MeshDS_TMesh::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer MeshDS_TMesh::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbGroups()
*/
// ============================================================================
Standard_Integer MeshDS_TMesh::NbGroups() const
{
    return myGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer MeshDS_TMesh::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void MeshDS_TMesh::ResizeCells(const Standard_Integer theNbCells,
                               const Standard_Boolean toCopyData)
{
    myCells.Resize(1, theNbCells, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeGroups()
*/
// ============================================================================
void MeshDS_TMesh::ResizeGroups(const Standard_Integer theNbGroups,
                                const Standard_Boolean toCopyData)
{
    myGroups.Resize(1, theNbGroups, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void MeshDS_TMesh::ResizeNodes(const Standard_Integer theNbNodes,
                               const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void MeshDS_TMesh::SetCell(const Standard_Integer theIndex,
                           const MeshDS_Cell &theCell)
{
    myCells.SetValue(theIndex, theCell);
}

// ============================================================================
/*!
 *  \brief SetGroup()
*/
// ============================================================================
void MeshDS_TMesh::SetGroup(const Standard_Integer theIndex,
                            const MeshDS_Group &theGroup)
{
    myGroups.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void MeshDS_TMesh::SetNode(const Standard_Integer theIndex,
                           const MeshDS_Node &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TMesh, MeshDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TMesh, MeshDS_TObject);

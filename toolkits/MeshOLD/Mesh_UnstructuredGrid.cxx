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
#include <Mesh_UnstructuredGrid.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_UnstructuredGrid::Mesh_UnstructuredGrid()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_UnstructuredGrid::Mesh_UnstructuredGrid(const Standard_Integer theNbNodes,
                                             const Standard_Integer theNbCells)
{
    myNodes.Resize(1, theNbNodes, Standard_False);
    myCells.Resize(1, theNbCells, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_UnstructuredGrid::Mesh_UnstructuredGrid(const Standard_Integer theNbNodes,
                                             const Standard_Integer theNbCells,
                                             const Standard_Integer theNbGroups)
{
    myNodes.Resize(1, theNbNodes, Standard_False);
    myCells.Resize(1, theNbCells, Standard_False);
    myGroups.Resize(1, theNbGroups, Standard_False);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh_UnstructuredGrid::~Mesh_UnstructuredGrid()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
Mesh_Cell Mesh_UnstructuredGrid::Cell(const Standard_Integer theIndex) const
{
    return myCells.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Cells()
*/
// ============================================================================
const Mesh_Array1OfCell& Mesh_UnstructuredGrid::Cells() const
{
    return myCells;
}

// ============================================================================
/*!
 *  \brief Cells()
*/
// ============================================================================
Mesh_Array1OfCell& Mesh_UnstructuredGrid::Cells()
{
    return myCells;
}


// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
Mesh_Group Mesh_UnstructuredGrid::Group(const Standard_Integer theIndex) const
{
    return myGroups.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Groups()
*/
// ============================================================================
const Mesh_Array1OfGroup& Mesh_UnstructuredGrid::Groups() const
{
    return myGroups;
}

// ============================================================================
/*!
 *  \brief Groups()
*/
// ============================================================================
Mesh_Array1OfGroup& Mesh_UnstructuredGrid::Groups()
{
    return myGroups;
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer Mesh_UnstructuredGrid::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbGroups()
*/
// ============================================================================
Standard_Integer Mesh_UnstructuredGrid::NbGroups() const
{
    return myGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Mesh_UnstructuredGrid::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Mesh_Node Mesh_UnstructuredGrid::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const Mesh_Array1OfNode& Mesh_UnstructuredGrid::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
Mesh_Array1OfNode& Mesh_UnstructuredGrid::Nodes()
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void Mesh_UnstructuredGrid::ResizeCells(const Standard_Integer theNbCells,
                                        const Standard_Boolean toCopyData)
{
    myCells.Resize(1, theNbCells, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeGroups()
*/
// ============================================================================
void Mesh_UnstructuredGrid::ResizeGroups(const Standard_Integer theNbGroups,
                                         const Standard_Boolean toCopyData)
{
    myGroups.Resize(1, theNbGroups, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Mesh_UnstructuredGrid::ResizeNodes(const Standard_Integer theNbNodes,
                                        const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void Mesh_UnstructuredGrid::SetCell(const Standard_Integer theIndex,
                                    const Mesh_Cell &theCell)
{
    myCells.SetValue(theIndex, theCell);
}

// ============================================================================
/*!
 *  \brief SetGroup()
*/
// ============================================================================
void Mesh_UnstructuredGrid::SetGroup(const Standard_Integer theIndex,
                                     const Mesh_Group &theGroup)
{
    myGroups.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Mesh_UnstructuredGrid::SetNode(const Standard_Integer theIndex,
                                    const Mesh_Node &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
MeshAbs_TypeOfGrid Mesh_UnstructuredGrid::Type() const
{
    return MeshAbs_UnstructuredGrid;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh_UnstructuredGrid, Mesh_Grid)
IMPLEMENT_STANDARD_RTTIEXT(Mesh_UnstructuredGrid, Mesh_Grid)




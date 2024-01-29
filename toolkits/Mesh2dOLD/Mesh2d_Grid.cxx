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
#include <Mesh2d_Grid.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_Grid::Mesh2d_Grid()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh2d_Grid::~Mesh2d_Grid()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const Handle(Mesh2d_Cell)& Mesh2d_Grid::Cell(const Standard_Integer theIndex) const
{
    return myCells.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Cells()
*/
// ============================================================================
const Mesh2d_Array1OfCell& Mesh2d_Grid::Cells() const
{
    return myCells;
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
const Handle(Mesh2d_Group)& Mesh2d_Grid::Group(const Standard_Integer theIndex) const
{
    return myGroups.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Groups()
*/
// ============================================================================
const Mesh2d_Array1OfGroup& Mesh2d_Grid::Groups() const
{
    return myGroups;
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const Handle(Mesh2d_Node)& Mesh2d_Grid::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const Mesh2d_Array1OfNode& Mesh2d_Grid::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer Mesh2d_Grid::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbGroups()
*/
// ============================================================================
Standard_Integer Mesh2d_Grid::NbGroups() const
{
    return myGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Mesh2d_Grid::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void Mesh2d_Grid::ResizeCells(const Standard_Integer theNbCells,
                              const Standard_Boolean toCopyData)
{
    myCells.Resize(1, theNbCells, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeGroups()
*/
// ============================================================================
void Mesh2d_Grid::ResizeGroups(const Standard_Integer theNbGroups,
                               const Standard_Boolean toCopyData)
{
    myGroups.Resize(1, theNbGroups, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Mesh2d_Grid::ResizeNodes(const Standard_Integer theNbNodes,
                              const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void Mesh2d_Grid::SetCell(const Standard_Integer theIndex,
                          const Handle(Mesh2d_Cell) &theCell)
{
    myCells.SetValue(theIndex, theCell);
}

// ============================================================================
/*!
 *  \brief SetGroup()
*/
// ============================================================================
void Mesh2d_Grid::SetGroup(const Standard_Integer theIndex,
                           const Handle(Mesh2d_Group) &theGroup)
{
    myGroups.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Mesh2d_Grid::SetNode(const Standard_Integer theIndex,
                          const Handle(Mesh2d_Node) &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh2d_Grid, Mesh2d_Object)
IMPLEMENT_STANDARD_RTTIEXT(Mesh2d_Grid, Mesh2d_Object)

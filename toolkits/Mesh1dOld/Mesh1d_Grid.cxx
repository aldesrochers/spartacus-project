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
#include <Mesh1d_Grid.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Grid::Mesh1d_Grid()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Grid::Mesh1d_Grid(const Mesh1d_Array1OfNode &theNodes,
                         const Mesh1d_Array1OfCell &theCells,
                         const Mesh1d_Array1OfGroup &theGroups)
    : myCells(theCells),
    myGroups(theGroups),
    myNodes(theNodes)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Grid::Mesh1d_Grid(const Standard_Integer theNbNodes,
                         const Standard_Integer theNbCells,
                         const Standard_Integer theNbGroups)
{
    myCells.Resize(1, theNbCells, Standard_False);
    myGroups.Resize(1, theNbGroups, Standard_False);
    myNodes.Resize(1, theNbNodes, Standard_False);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh1d_Grid::~Mesh1d_Grid()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const Handle(Mesh1d_Cell)& Mesh1d_Grid::Cell(const Standard_Integer theIndex) const
{
    return myCells.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer Mesh1d_Grid::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbGroups()
*/
// ============================================================================
Standard_Integer Mesh1d_Grid::NbGroups() const
{
    return myGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Mesh1d_Grid::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
const Handle(Mesh1d_Group)& Mesh1d_Grid::Group(const Standard_Integer theIndex) const
{
    return myGroups.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const Handle(Mesh1d_Node)& Mesh1d_Grid::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void Mesh1d_Grid::ResizeCells(const Standard_Integer theNbCells,
                              const Standard_Boolean toCopyData)
{
    myCells.Resize(1, theNbCells, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeGroups()
*/
// ============================================================================
void Mesh1d_Grid::ResizeGroups(const Standard_Integer theNbGroups,
                               const Standard_Boolean toCopyData)
{
    myGroups.Resize(1, theNbGroups, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Mesh1d_Grid::ResizeNodes(const Standard_Integer theNbNodes,
                              const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void Mesh1d_Grid::SetCell(const Standard_Integer theIndex,
                          const Handle(Mesh1d_Cell) &theCell)
{
    myCells.SetValue(theIndex, theCell);
}

// ============================================================================
/*!
 *  \brief SetGroup()
*/
// ============================================================================
void Mesh1d_Grid::SetGroup(const Standard_Integer theIndex,
                           const Handle(Mesh1d_Group) &theGroup)
{
    myGroups.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Mesh1d_Grid::SetNode(const Standard_Integer theIndex,
                          const Handle(Mesh1d_Node) &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh1d_Grid, Mesh1d_Object)
IMPLEMENT_STANDARD_RTTIEXT(Mesh1d_Grid, Mesh1d_Object)

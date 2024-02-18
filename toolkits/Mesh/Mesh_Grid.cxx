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
#include <Mesh_Grid.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_Grid::Mesh_Grid()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_Grid::Mesh_Grid(const Mesh_Array1OfNode &theNodes,
                     const Mesh_Array1OfCell &theCells,
                     const Mesh_Array1OfGroup &theGroups)
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
Mesh_Grid::Mesh_Grid(const Standard_Integer theNbNodes,
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
Mesh_Grid::~Mesh_Grid()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const Handle(Mesh_Cell)& Mesh_Grid::Cell(const Standard_Integer theIndex) const
{
    return myCells.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer Mesh_Grid::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbGroups()
*/
// ============================================================================
Standard_Integer Mesh_Grid::NbGroups() const
{
    return myGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Mesh_Grid::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
const Handle(Mesh_Group)& Mesh_Grid::Group(const Standard_Integer theIndex) const
{
    return myGroups.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const Handle(Mesh_Node)& Mesh_Grid::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void Mesh_Grid::ResizeCells(const Standard_Integer theNbCells,
                            const Standard_Boolean toCopyData)
{
    myCells.Resize(1, theNbCells, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeGroups()
*/
// ============================================================================
void Mesh_Grid::ResizeGroups(const Standard_Integer theNbGroups,
                             const Standard_Boolean toCopyData)
{
    myGroups.Resize(1, theNbGroups, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Mesh_Grid::ResizeNodes(const Standard_Integer theNbNodes,
                            const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void Mesh_Grid::SetCell(const Standard_Integer theIndex,
                        const Handle(Mesh_Cell) &theCell)
{
    myCells.SetValue(theIndex, theCell);
}

// ============================================================================
/*!
 *  \brief SetGroup()
*/
// ============================================================================
void Mesh_Grid::SetGroup(const Standard_Integer theIndex,
                         const Handle(Mesh_Group) &theGroup)
{
    myGroups.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Mesh_Grid::SetNode(const Standard_Integer theIndex,
                        const Handle(Mesh_Node) &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh_Grid, Mesh_Object)
IMPLEMENT_STANDARD_RTTIEXT(Mesh_Grid, Mesh_Object)

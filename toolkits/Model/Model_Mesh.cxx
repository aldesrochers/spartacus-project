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
#include <Model_Mesh.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Mesh::Model_Mesh()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Mesh::Model_Mesh(const Standard_Integer theNbNodes,
                       const Standard_Integer theNbCells)
{
    myNodes.Resize(1, theNbNodes, Standard_False);
    myCells.Resize(1, theNbCells, Standard_False);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Mesh::~Model_Mesh()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
Handle(Model_Cell) Model_Mesh::Cell(const Standard_Integer theIndex) const
{
    return Handle(Model_Cell)::DownCast(myCells.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer Model_Mesh::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Model_Mesh::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Handle(Model_Node) Model_Mesh::Node(const Standard_Integer theIndex) const
{
    return Handle(Model_Node)::DownCast(myNodes.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void Model_Mesh::ResizeCells(const Standard_Integer theNbCells,
                             const Standard_Boolean toCopyData)
{
    myCells.Resize(1, theNbCells, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Model_Mesh::ResizeNodes(const Standard_Integer theNbNodes,
                             const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void Model_Mesh::SetCell(const Standard_Integer theIndex,
                         const Handle(Model_Cell) &theCell)
{
    myCells.SetValue(theIndex, theCell);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Model_Mesh::SetNode(const Standard_Integer theIndex,
                         const Handle(Model_Node) &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Mesh, Model_Object);
IMPLEMENT_STANDARD_RTTIEXT(Model_Mesh, Model_Object);

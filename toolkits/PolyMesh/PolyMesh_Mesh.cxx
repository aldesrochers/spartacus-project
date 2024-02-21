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
#include <PolyMesh_Mesh.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Mesh::PolyMesh_Mesh()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Mesh::PolyMesh_Mesh(const PolyMesh_Array1OfNode &theNodes,
                             const PolyMesh_Array1OfCell &theCells)
    : myCells(theCells), myNodes(theNodes)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Mesh::PolyMesh_Mesh(const PolyMesh_Array1OfNode &theNodes,
                             const PolyMesh_Array1OfCell &theCells,
                             const PolyMesh_Array1OfGroup &theGroups)
    : myCells(theCells), myGroups(theGroups), myNodes(theNodes)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Mesh::PolyMesh_Mesh(const Standard_Integer theNbNodes,
                             const Standard_Integer theNbCells)
{
    myCells.Resize(1, theNbCells, Standard_False);
    myNodes.Resize(1, theNbNodes, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Mesh::PolyMesh_Mesh(const Standard_Integer theNbNodes,
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
PolyMesh_Mesh::~PolyMesh_Mesh()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const Handle(PolyMesh_Cell)& PolyMesh_Mesh::Cell(const Standard_Integer theIndex) const
{
    return myCells.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
const Handle(PolyMesh_Group)& PolyMesh_Mesh::Group(const Standard_Integer theIndex) const
{
    return myGroups.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer PolyMesh_Mesh::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbGroups()
*/
// ============================================================================
Standard_Integer PolyMesh_Mesh::NbGroups() const
{
    return myGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer PolyMesh_Mesh::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const Handle(PolyMesh_Node)& PolyMesh_Mesh::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void PolyMesh_Mesh::ResizeCells(const Standard_Integer theNbCells,
                                  const Standard_Boolean toCopyData)
{
    myCells.Resize(1, theNbCells, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeGroups()
*/
// ============================================================================
void PolyMesh_Mesh::ResizeGroups(const Standard_Integer theNbGroups,
                                   const Standard_Boolean toCopyData)
{
    myGroups.Resize(1, theNbGroups, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void PolyMesh_Mesh::ResizeNodes(const Standard_Integer theNbNodes,
                                  const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void PolyMesh_Mesh::SetCell(const Standard_Integer theIndex,
                              const Handle(PolyMesh_Cell) &theCell)
{
    myCells.SetValue(theIndex, theCell);
}

// ============================================================================
/*!
 *  \brief SetGroup()
*/
// ============================================================================
void PolyMesh_Mesh::SetGroup(const Standard_Integer theIndex,
                               const Handle(PolyMesh_Group) &theGroup)
{
    myGroups.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void PolyMesh_Mesh::SetNode(const Standard_Integer theIndex,
                              const Handle(PolyMesh_Node) &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(PolyMesh_Mesh, PolyMesh_Object)
IMPLEMENT_STANDARD_RTTIEXT(PolyMesh_Mesh, PolyMesh_Object)

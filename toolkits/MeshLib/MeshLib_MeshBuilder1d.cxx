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
#include <Mesh1d_LinearLine2N.hxx>
#include <Mesh1d_Node.hxx>
#include <Mesh1d_QuadraticLine3N.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshLib_MeshBuilder1d.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MeshBuilder1d::MeshLib_MeshBuilder1d()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MeshBuilder1d::~MeshLib_MeshBuilder1d()
{

}

// ============================================================================
/*!
 *  \brief AddLinearLine2N()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::AddLinearLine2N(const Standard_Integer theNode1,
                                                        const Standard_Integer theNode2)
{
    Standard_Integer aCellId = FindCellId();
    Handle(Mesh1d_LinearLine2N) aCell = new Mesh1d_LinearLine2N(theNode1, theNode2);
    myCells.Bind(aCellId, aCell);
    return aCellId;
}

// ============================================================================
/*!
 *  \brief AddNode()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::AddNode(const gp_Pnt1d& thePoint)
{
    Standard_Integer aNodeId = FindNodeId();
    Handle(Mesh1d_Node) aNode = new Mesh1d_Node(thePoint);
    myNodes.Bind(aNodeId, aNode);
    return aNodeId;
}

// ============================================================================
/*!
 *  \brief AddQuadraticLine3N()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::AddQuadraticLine3N(const Standard_Integer theNode1,
                                                           const Standard_Integer theNode2,
                                                           const Standard_Integer theNode3)
{
    Standard_Integer aCellId = FindCellId();
    Handle(Mesh1d_QuadraticLine3N) aCell = new Mesh1d_QuadraticLine3N(theNode1, theNode2, theNode3);
    myCells.Bind(aCellId, aCell);
    return aCellId;
}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void MeshLib_MeshBuilder1d::Build()
{
    // size of mesh
    Standard_Integer nbNodes = myNodes.Size();
    Standard_Integer nbCells = myCells.Size();
    Standard_Integer nbGroups = myGroups.Size();

    // initialize mesh with valid dimensions
    MeshDS_Builder aBuilder;
    aBuilder.MakeMesh(myMesh, nbNodes, nbCells, nbGroups);

    // loop each node, set in mesh
    TColMesh1d_DataMapIteratorOfDataMapOfIntegerNode anIterator(myNodes);
    for(; anIterator.More(); anIterator.Next()) {
        Standard_Integer aNodeId = anIterator.Key();
        Handle(Mesh1d_Node) aNode1d = anIterator.Value();
        MeshDS_Node aNode;
        aBuilder.MakeNode(aNode, aNode1d);
    }


}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbGroups()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::NbGroups() const
{
    return myGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief FindCellId()
 *  Internal helper function used to find an unused cell id.
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::FindCellId() const
{
    Standard_Integer aCellId = 1;
    while(myCells.IsBound(aCellId))
        aCellId++;
    return aCellId;
}

// ============================================================================
/*!
 *  \brief FindGroupId()
 *  Internal helper function used to find an unused group id.
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::FindGroupId() const
{
    Standard_Integer aGroupId = 1;
    while(myGroups.IsBound(aGroupId))
        aGroupId++;
    return aGroupId;
}

// ============================================================================
/*!
 *  \brief FindNodeId()
 *  Internal helper function used to find an unused node id.
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::FindNodeId() const
{
    Standard_Integer aNodeId = 1;
    while(myNodes.IsBound(aNodeId))
        aNodeId++;
    return aNodeId;
}

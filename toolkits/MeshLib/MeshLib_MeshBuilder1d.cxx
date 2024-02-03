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
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshLib_MeshBuilder1d.hxx>
#include <MeshTools_DataMapOfIntegerObject.hxx>


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
    MeshDS_Builder aBuilder;
    MeshTools_DataMapOfIntegerObject    meshNodes;
    MeshTools_DataMapOfIntegerObject    meshCells;
    MeshTools_DataMapOfIntegerObject    meshGroups;

    // size of mesh
    Standard_Integer nbNodes = myNodes.Size();
    Standard_Integer nbCells = myCells.Size();
    Standard_Integer nbGroups = myGroups.Size();

    // initialize mesh
    aBuilder.MakeMesh(myMesh, nbNodes, nbCells, nbGroups);

    // ---
    // nodes
    // ---
    TColMesh1d_DataMapIteratorOfDataMapOfIntegerNode aNodeIterator(myNodes);
    for(; aNodeIterator.More(); aNodeIterator.Next()) {
        Standard_Integer aNodeId = aNodeIterator.Key();
        Handle(Mesh1d_Node) aNode1d = aNodeIterator.Value();
        MeshDS_Node aNode;
        aBuilder.MakeNode(aNode, aNode1d);
        meshNodes.Bind(aNodeId, aNode);
    }

    // ---
    // cells
    // ---
    TColMesh1d_DataMapIteratorOfDataMapOfIntegerCell aCellIterator(myCells);
    for(; aCellIterator.More(); aCellIterator.Next()) {
        Standard_Integer aCellId = aCellIterator.Key();
        Handle(Mesh1d_Cell) aCell1d = aCellIterator.Value();

        // make cell, define in mesh
        MeshDS_Cell aCell;
        aBuilder.MakeCell(aCell, aCell1d);
        meshCells.Bind(aCellId, aCell);

        // for all nodes in cell, link to cell
        TColStd_ListOfInteger aListOfCellNodes;
        aCell1d->Nodes(aListOfCellNodes);
        TColStd_ListIteratorOfListOfInteger anIterator(aListOfCellNodes);
        for(; anIterator.More(); anIterator.Next()) {
            Standard_Integer aNodeId = anIterator.Value();
            MeshDS_Node aNode = MeshDS::Node(meshNodes(aNodeId));
            aBuilder.LinkCell(aNode, aCell);
        }
    }






    SetDone();
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

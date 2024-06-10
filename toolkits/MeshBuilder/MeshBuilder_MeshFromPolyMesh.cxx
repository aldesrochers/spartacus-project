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
#include <MeshBuilder_MakeLine.hxx>
#include <MeshBuilder_MakeNode.hxx>
#include <MeshBuilder_MeshFromPolyMesh.hxx>
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshDS_Tool.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MeshFromPolyMesh::MeshBuilder_MeshFromPolyMesh(const Handle(PolyMesh_Mesh1d)& theMesh)
{
    Initialize(theMesh);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MeshFromPolyMesh::~MeshBuilder_MeshFromPolyMesh()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MeshFromPolyMesh::Initialize(const Handle(PolyMesh_Mesh1d)& theMesh)
{
    Standard_Integer nbNodes = theMesh->NbPoints();
    Standard_Integer nbCells = 0;
    nbCells += theMesh->NbLinearLines();
    Standard_Integer nbGroups = 0;
    nbGroups += theMesh->NbGroupsOfLinearLines();

    // initialize mesh
    MeshDS_Builder aBuilder;
    aBuilder.MakeMesh(MeshDS::Mesh(myObject));
    aBuilder.ResizeCells(MeshDS::Mesh(myObject), nbCells);
    aBuilder.ResizeGroups(MeshDS::Mesh(myObject), nbGroups);
    aBuilder.ResizeNodes(MeshDS::Mesh(myObject), nbNodes);

    // process nodes
    for(Standard_Integer i=1; i<=nbNodes; i++) {
        const gp_Pnt1d& aPoint = theMesh->Point(i);
        MeshDS_Node aNode = MeshBuilder_MakeNode(gp_Pnt(aPoint.X(), 0., 0.)).Node();
        aBuilder.SetNode(MeshDS::Mesh(myObject), i, aNode);
    }

    // process lines
    for(Standard_Integer i=1; i<theMesh->NbLinearLines(); i++) {
        const pmp_LinearLine& aLine = theMesh->LinearLine(i);
        Standard_Integer N1, N2;
        aLine.Get(N1, N2);
        MeshDS_Node aNode1 = MeshDS_Tool::Node(MeshDS::Mesh(myObject), N1);
        MeshDS_Node aNode2 = MeshDS_Tool::Node(MeshDS::Mesh(myObject), N2);
        MeshBuilder_MakeLine aLineBuilder(aNode1, aNode2);
        if(!aLineBuilder.IsDone()) {
            SetError(MeshBuilder_MeshCellError);
            SetNotDone();
            return;
        }
        MeshDS_Cell aCell = aLineBuilder.Cell();
        aBuilder.SetCell(MeshDS::Mesh(myObject), i, aCell);
    }

    SetError(MeshBuilder_MeshNoError);
    SetDone();
}


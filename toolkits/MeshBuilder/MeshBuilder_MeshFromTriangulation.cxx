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
#include <MeshBuilder_MakeNode.hxx>
#include <MeshBuilder_MakeTriangle.hxx>
#include <MeshBuilder_MeshFromTriangulation.hxx>
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshDS_Tool.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MeshFromTriangulation::MeshBuilder_MeshFromTriangulation(const Handle(Poly_Triangulation)& theTriangulation)
{
    Initialize(theTriangulation);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MeshFromTriangulation::~MeshBuilder_MeshFromTriangulation()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MeshFromTriangulation::Initialize(const Handle(Poly_Triangulation) &theTriangulation)
{

    // get the number of nodes/triangles in triangulation
    Standard_Integer nbNodes = theTriangulation->NbNodes();
    Standard_Integer nbTriangles = theTriangulation->NbTriangles();

    // initialize a new mesh
    MeshDS_Builder aBuilder;
    aBuilder.MakeMesh(MeshDS::Mesh(myObject));
    aBuilder.ResizeCells(MeshDS::Mesh(myObject), nbTriangles);
    aBuilder.ResizeNodes(MeshDS::Mesh(myObject), nbNodes);

    // process nodes
    for(Standard_Integer i=1; i<=nbNodes; i++) {
        const gp_Pnt& aPnt = theTriangulation->Node(i);
        MeshDS_Node aNode = MeshBuilder_MakeNode(aPnt).Node();
        aBuilder.SetNode(MeshDS::Mesh(myObject), i, aNode);
    }

    // process triangles
    for(Standard_Integer i=1; i<nbTriangles; i++) {
        const Poly_Triangle& aTriangle = theTriangulation->Triangle(i);
        Standard_Integer N1, N2, N3;
        aTriangle.Get(N1, N2, N3);
        MeshDS_Node aNode1 = MeshDS_Tool::Node(MeshDS::Mesh(myObject), N1);
        MeshDS_Node aNode2 = MeshDS_Tool::Node(MeshDS::Mesh(myObject), N2);
        MeshDS_Node aNode3 = MeshDS_Tool::Node(MeshDS::Mesh(myObject), N3);
        MeshBuilder_MakeTriangle aTriangleBuilder(aNode1, aNode2, aNode3);
        if(!aTriangleBuilder.IsDone()) {
            SetError(MeshBuilder_MeshCellError);
            SetNotDone();
            return;
        }
        MeshDS_Cell aCell = aTriangleBuilder.Cell();
        aBuilder.SetCell(MeshDS::Mesh(myObject), i, aCell);
    }

    SetError(MeshBuilder_MeshNoError);
    SetDone();
}


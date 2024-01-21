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
#include <MeshDS_Builder.hxx>
#include <MeshDS_TCell.hxx>
#include <MeshDS_TGroup.hxx>
#include <MeshDS_TNode1d.hxx>
#include <MeshDS_TNode2d.hxx>
#include <MeshDS_TNode3d.hxx>
#include <MeshDS_TUnstructuredGrid.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_Builder::MeshDS_Builder()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_Builder::~MeshDS_Builder()
{

}

// ============================================================================
/*!
 *  \brief AddInGroup()
*/
// ============================================================================
void MeshDS_Builder::AddInGroup(MeshDS_Group &theGroup, const MeshDS_Cell &theCell) const
{
    Handle(MeshDS_TGroup) aTGroup = theGroup.TGroup();
    MeshDS_ListOfCell& aList = aTGroup->Cells();
    aList.Append(theCell);
    aTGroup->SetModified();
}

// ============================================================================
/*!
 *  \brief MakeGroup()
*/
// ============================================================================
void MeshDS_Builder::MakeGroup(MeshDS_Group& theGroup) const
{
    Handle(MeshDS_TGroup) aTGroup = new MeshDS_TGroup();
    MakeGroup(theGroup, aTGroup);
}

// ============================================================================
/*!
 *  \brief MakeCell()
 *  Generic cell construction method.
*/
// ============================================================================
void MeshDS_Builder::MakeCell(MeshDS_Cell &theCell,
                              const Handle(MeshDS_TCell) &theTCell) const
{
    theCell.SetTCell(theTCell);
}

// ============================================================================
/*!
 *  \brief MakeGrid()
 *  Generic grid construction method.
*/
// ============================================================================
void MeshDS_Builder::MakeGrid(MeshDS_Grid &theGrid,
                              const Handle(MeshDS_TGrid) &theTGrid) const
{
    theGrid.SetTGrid(theTGrid);
}

// ============================================================================
/*!
 *  \brief MakeGroup()
 *  Generic group construction method.
*/
// ============================================================================
void MeshDS_Builder::MakeGroup(MeshDS_Group &theGroup,
                               const Handle(MeshDS_TGroup) &theTGroup) const
{
    theGroup.SetTGroup(theTGroup);
}

// ============================================================================
/*!
 *  \brief MakeLinearHexahedron8N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearHexahedron8N(MeshDS_Cell &theCell,
                                            const MeshDS_Node &theNode1,
                                            const MeshDS_Node &theNode2,
                                            const MeshDS_Node &theNode3,
                                            const MeshDS_Node &theNode4,
                                            const MeshDS_Node &theNode5,
                                            const MeshDS_Node &theNode6,
                                            const MeshDS_Node &theNode7,
                                            const MeshDS_Node &theNode8) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_LinearHexahedron8N, 8);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    aTCell->SetNode(8, theNode8);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeLinearLine2N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearLine2N(MeshDS_Cell &theCell,
                                      const MeshDS_Node &theNode1,
                                      const MeshDS_Node &theNode2) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_LinearLine2N, 2);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeLinearPentahedron6N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearPentahedron6N(MeshDS_Cell &theCell,
                                             const MeshDS_Node &theNode1,
                                             const MeshDS_Node &theNode2,
                                             const MeshDS_Node &theNode3,
                                             const MeshDS_Node &theNode4,
                                             const MeshDS_Node &theNode5,
                                             const MeshDS_Node &theNode6) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_LinearPentahedron6N, 6);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeLinearPyramid5N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearPyramid5N(MeshDS_Cell &theCell,
                                         const MeshDS_Node &theNode1,
                                         const MeshDS_Node &theNode2,
                                         const MeshDS_Node &theNode3,
                                         const MeshDS_Node &theNode4,
                                         const MeshDS_Node &theNode5) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_LinearPyramid5N, 5);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeLinearQuadrangle4N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearQuadrangle4N(MeshDS_Cell &theCell,
                                            const MeshDS_Node &theNode1,
                                            const MeshDS_Node &theNode2,
                                            const MeshDS_Node &theNode3,
                                            const MeshDS_Node &theNode4) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_LinearQuadrangle4N, 4);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeLinearTetrahedron4N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearTetrahedron4N(MeshDS_Cell &theCell,
                                             const MeshDS_Node &theNode1,
                                             const MeshDS_Node &theNode2,
                                             const MeshDS_Node &theNode3,
                                             const MeshDS_Node &theNode4) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_LinearTetrahedron4N, 4);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeLinearTriangle3N()
*/
// ============================================================================
void MeshDS_Builder::MakeLinearTriangle3N(MeshDS_Cell &theCell,
                                          const MeshDS_Node &theNode1,
                                          const MeshDS_Node &theNode2,
                                          const MeshDS_Node &theNode3) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_LinearTriangle3N, 3);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeMesh()
 *  Generic mesh construction method.
*/
// ============================================================================
void MeshDS_Builder::MakeMesh(MeshDS_Mesh &theMesh,
                              const Handle(MeshDS_TMesh) &theTMesh) const
{
    theMesh.SetTMesh(theTMesh);
}

// ============================================================================
/*!
 *  \brief MakeNode()
 *  Generic node construction method.
*/
// ============================================================================
void MeshDS_Builder::MakeNode(MeshDS_Node &theNode,
                              const Handle(MeshDS_TNode) &theTNode) const
{
    theNode.SetTNode(theTNode);
}

// ============================================================================
/*!
 *  \brief MakeNode()
 *  Make a node with 1d geometry.
*/
// ============================================================================
void MeshDS_Builder::MakeNode1d(MeshDS_Node &theNode,
                                const Standard_Real theX) const
{
    Handle(MeshDS_TNode1d) aTNode = new MeshDS_TNode1d(theX);
    MakeNode(theNode, aTNode);
}

// ============================================================================
/*!
 *  \brief MakeNode()
 *  Make a node with 2d geometry.
*/
// ============================================================================
void MeshDS_Builder::MakeNode2d(MeshDS_Node &theNode,
                                const gp_Pnt2d& thePoint) const
{
    Handle(MeshDS_TNode2d) aTNode = new MeshDS_TNode2d(thePoint);
    MakeNode(theNode, aTNode);
}

// ============================================================================
/*!
 *  \brief MakeNode()
 *  Make a node with 2d geometry.
*/
// ============================================================================
void MeshDS_Builder::MakeNode2d(MeshDS_Node &theNode,
                                const Standard_Real theX,
                                const Standard_Real theY) const
{
    Handle(MeshDS_TNode2d) aTNode = new MeshDS_TNode2d(gp_Pnt2d(theX, theY));
    MakeNode(theNode, aTNode);
}

// ============================================================================
/*!
 *  \brief MakeNode()
 *  Make a node with 3d geometry.
*/
// ============================================================================
void MeshDS_Builder::MakeNode3d(MeshDS_Node &theNode,
                                const gp_Pnt& thePoint) const
{
    Handle(MeshDS_TNode3d) aTNode = new MeshDS_TNode3d(thePoint);
    MakeNode(theNode, aTNode);
}

// ============================================================================
/*!
 *  \brief MakeNode()
 *  Make a node with 3d geometry.
*/
// ============================================================================
void MeshDS_Builder::MakeNode3d(MeshDS_Node &theNode,
                                const Standard_Real theX,
                                const Standard_Real theY,
                                const Standard_Real theZ) const
{
    Handle(MeshDS_TNode3d) aTNode = new MeshDS_TNode3d(gp_Pnt(theX, theY, theZ));
    MakeNode(theNode, aTNode);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticHexahedron20N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticHexahedron20N(MeshDS_Cell &theCell,
                                                const MeshDS_Node &theNode1,
                                                const MeshDS_Node &theNode2,
                                                const MeshDS_Node &theNode3,
                                                const MeshDS_Node &theNode4,
                                                const MeshDS_Node &theNode5,
                                                const MeshDS_Node &theNode6,
                                                const MeshDS_Node &theNode7,
                                                const MeshDS_Node &theNode8,
                                                const MeshDS_Node &theNode9,
                                                const MeshDS_Node &theNode10,
                                                const MeshDS_Node &theNode11,
                                                const MeshDS_Node &theNode12,
                                                const MeshDS_Node &theNode13,
                                                const MeshDS_Node &theNode14,
                                                const MeshDS_Node &theNode15,
                                                const MeshDS_Node &theNode16,
                                                const MeshDS_Node &theNode17,
                                                const MeshDS_Node &theNode18,
                                                const MeshDS_Node &theNode19,
                                                const MeshDS_Node &theNode20) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticHexahedron20N, 20);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    aTCell->SetNode(8, theNode8);
    aTCell->SetNode(9, theNode9);
    aTCell->SetNode(10, theNode10);
    aTCell->SetNode(11, theNode11);
    aTCell->SetNode(12, theNode12);
    aTCell->SetNode(13, theNode13);
    aTCell->SetNode(14, theNode14);
    aTCell->SetNode(15, theNode15);
    aTCell->SetNode(16, theNode16);
    aTCell->SetNode(17, theNode17);
    aTCell->SetNode(18, theNode18);
    aTCell->SetNode(19, theNode19);
    aTCell->SetNode(20, theNode20);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticHexahedron27N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticHexahedron27N(MeshDS_Cell &theCell,
                                                const MeshDS_Node &theNode1,
                                                const MeshDS_Node &theNode2,
                                                const MeshDS_Node &theNode3,
                                                const MeshDS_Node &theNode4,
                                                const MeshDS_Node &theNode5,
                                                const MeshDS_Node &theNode6,
                                                const MeshDS_Node &theNode7,
                                                const MeshDS_Node &theNode8,
                                                const MeshDS_Node &theNode9,
                                                const MeshDS_Node &theNode10,
                                                const MeshDS_Node &theNode11,
                                                const MeshDS_Node &theNode12,
                                                const MeshDS_Node &theNode13,
                                                const MeshDS_Node &theNode14,
                                                const MeshDS_Node &theNode15,
                                                const MeshDS_Node &theNode16,
                                                const MeshDS_Node &theNode17,
                                                const MeshDS_Node &theNode18,
                                                const MeshDS_Node &theNode19,
                                                const MeshDS_Node &theNode20,
                                                const MeshDS_Node &theNode21,
                                                const MeshDS_Node &theNode22,
                                                const MeshDS_Node &theNode23,
                                                const MeshDS_Node &theNode24,
                                                const MeshDS_Node &theNode25,
                                                const MeshDS_Node &theNode26,
                                                const MeshDS_Node &theNode27) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticHexahedron27N, 27);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    aTCell->SetNode(8, theNode8);
    aTCell->SetNode(9, theNode9);
    aTCell->SetNode(10, theNode10);
    aTCell->SetNode(11, theNode11);
    aTCell->SetNode(12, theNode12);
    aTCell->SetNode(13, theNode13);
    aTCell->SetNode(14, theNode14);
    aTCell->SetNode(15, theNode15);
    aTCell->SetNode(16, theNode16);
    aTCell->SetNode(17, theNode17);
    aTCell->SetNode(18, theNode18);
    aTCell->SetNode(19, theNode19);
    aTCell->SetNode(20, theNode20);
    aTCell->SetNode(21, theNode21);
    aTCell->SetNode(22, theNode22);
    aTCell->SetNode(23, theNode23);
    aTCell->SetNode(24, theNode24);
    aTCell->SetNode(25, theNode25);
    aTCell->SetNode(26, theNode26);
    aTCell->SetNode(27, theNode27);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticLine3N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticLine3N(MeshDS_Cell &theCell,
                                         const MeshDS_Node &theNode1,
                                         const MeshDS_Node &theNode2,
                                         const MeshDS_Node &theNode3) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticLine3N, 3);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticPentahedron15N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticPentahedron15N(MeshDS_Cell &theCell,
                                                 const MeshDS_Node &theNode1,
                                                 const MeshDS_Node &theNode2,
                                                 const MeshDS_Node &theNode3,
                                                 const MeshDS_Node &theNode4,
                                                 const MeshDS_Node &theNode5,
                                                 const MeshDS_Node &theNode6,
                                                 const MeshDS_Node &theNode7,
                                                 const MeshDS_Node &theNode8,
                                                 const MeshDS_Node &theNode9,
                                                 const MeshDS_Node &theNode10,
                                                 const MeshDS_Node &theNode11,
                                                 const MeshDS_Node &theNode12,
                                                 const MeshDS_Node &theNode13,
                                                 const MeshDS_Node &theNode14,
                                                 const MeshDS_Node &theNode15) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticPentahedron15N, 15);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    aTCell->SetNode(8, theNode8);
    aTCell->SetNode(9, theNode9);
    aTCell->SetNode(10, theNode10);
    aTCell->SetNode(11, theNode11);
    aTCell->SetNode(12, theNode12);
    aTCell->SetNode(13, theNode13);
    aTCell->SetNode(14, theNode14);
    aTCell->SetNode(15, theNode15);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticPentahedron18N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticPentahedron18N(MeshDS_Cell &theCell,
                                                 const MeshDS_Node &theNode1,
                                                 const MeshDS_Node &theNode2,
                                                 const MeshDS_Node &theNode3,
                                                 const MeshDS_Node &theNode4,
                                                 const MeshDS_Node &theNode5,
                                                 const MeshDS_Node &theNode6,
                                                 const MeshDS_Node &theNode7,
                                                 const MeshDS_Node &theNode8,
                                                 const MeshDS_Node &theNode9,
                                                 const MeshDS_Node &theNode10,
                                                 const MeshDS_Node &theNode11,
                                                 const MeshDS_Node &theNode12,
                                                 const MeshDS_Node &theNode13,
                                                 const MeshDS_Node &theNode14,
                                                 const MeshDS_Node &theNode15,
                                                 const MeshDS_Node &theNode16,
                                                 const MeshDS_Node &theNode17,
                                                 const MeshDS_Node &theNode18) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticPentahedron18N, 18);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    aTCell->SetNode(8, theNode8);
    aTCell->SetNode(9, theNode9);
    aTCell->SetNode(10, theNode10);
    aTCell->SetNode(11, theNode11);
    aTCell->SetNode(12, theNode12);
    aTCell->SetNode(13, theNode13);
    aTCell->SetNode(14, theNode14);
    aTCell->SetNode(15, theNode15);
    aTCell->SetNode(16, theNode16);
    aTCell->SetNode(17, theNode17);
    aTCell->SetNode(18, theNode18);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticPyramid13N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticPyramid13N(MeshDS_Cell &theCell,
                                            const MeshDS_Node &theNode1,
                                            const MeshDS_Node &theNode2,
                                            const MeshDS_Node &theNode3,
                                            const MeshDS_Node &theNode4,
                                            const MeshDS_Node &theNode5,
                                            const MeshDS_Node &theNode6,
                                            const MeshDS_Node &theNode7,
                                            const MeshDS_Node &theNode8,
                                            const MeshDS_Node &theNode9,
                                            const MeshDS_Node &theNode10,
                                            const MeshDS_Node &theNode11,
                                            const MeshDS_Node &theNode12,
                                            const MeshDS_Node &theNode13) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticPyramid13N, 13);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    aTCell->SetNode(8, theNode8);
    aTCell->SetNode(9, theNode9);
    aTCell->SetNode(10, theNode10);
    aTCell->SetNode(11, theNode11);
    aTCell->SetNode(12, theNode12);
    aTCell->SetNode(13, theNode13);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticPyramid14N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticPyramid14N(MeshDS_Cell &theCell,
                                             const MeshDS_Node &theNode1,
                                             const MeshDS_Node &theNode2,
                                             const MeshDS_Node &theNode3,
                                             const MeshDS_Node &theNode4,
                                             const MeshDS_Node &theNode5,
                                             const MeshDS_Node &theNode6,
                                             const MeshDS_Node &theNode7,
                                             const MeshDS_Node &theNode8,
                                             const MeshDS_Node &theNode9,
                                             const MeshDS_Node &theNode10,
                                             const MeshDS_Node &theNode11,
                                             const MeshDS_Node &theNode12,
                                             const MeshDS_Node &theNode13,
                                             const MeshDS_Node &theNode14) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticPyramid14N, 14);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    aTCell->SetNode(8, theNode8);
    aTCell->SetNode(9, theNode9);
    aTCell->SetNode(10, theNode10);
    aTCell->SetNode(11, theNode11);
    aTCell->SetNode(12, theNode12);
    aTCell->SetNode(13, theNode13);
    aTCell->SetNode(14, theNode14);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticQuadrangle8N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticQuadrangle8N(MeshDS_Cell &theCell,
                                               const MeshDS_Node &theNode1,
                                               const MeshDS_Node &theNode2,
                                               const MeshDS_Node &theNode3,
                                               const MeshDS_Node &theNode4,
                                               const MeshDS_Node &theNode5,
                                               const MeshDS_Node &theNode6,
                                               const MeshDS_Node &theNode7,
                                               const MeshDS_Node &theNode8) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticQuadrangle8N, 8);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    aTCell->SetNode(8, theNode8);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticQuadrangle9N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticQuadrangle9N(MeshDS_Cell &theCell,
                                               const MeshDS_Node &theNode1,
                                               const MeshDS_Node &theNode2,
                                               const MeshDS_Node &theNode3,
                                               const MeshDS_Node &theNode4,
                                               const MeshDS_Node &theNode5,
                                               const MeshDS_Node &theNode6,
                                               const MeshDS_Node &theNode7,
                                               const MeshDS_Node &theNode8,
                                               const MeshDS_Node &theNode9) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticQuadrangle9N, 9);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    aTCell->SetNode(8, theNode8);
    aTCell->SetNode(9, theNode9);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticTetrahedron10N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticTetrahedron10N(MeshDS_Cell &theCell,
                                                 const MeshDS_Node &theNode1,
                                                 const MeshDS_Node &theNode2,
                                                 const MeshDS_Node &theNode3,
                                                 const MeshDS_Node &theNode4,
                                                 const MeshDS_Node &theNode5,
                                                 const MeshDS_Node &theNode6,
                                                 const MeshDS_Node &theNode7,
                                                 const MeshDS_Node &theNode8,
                                                 const MeshDS_Node &theNode9,
                                                 const MeshDS_Node &theNode10) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticTetrahedron10N, 10);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    aTCell->SetNode(8, theNode8);
    aTCell->SetNode(9, theNode9);
    aTCell->SetNode(10, theNode10);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticTriangle6N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticTriangle6N(MeshDS_Cell &theCell,
                                             const MeshDS_Node &theNode1,
                                             const MeshDS_Node &theNode2,
                                             const MeshDS_Node &theNode3,
                                             const MeshDS_Node &theNode4,
                                             const MeshDS_Node &theNode5,
                                             const MeshDS_Node &theNode6) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticTriangle6N, 6);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeQuadraticTriangle7N()
*/
// ============================================================================
void MeshDS_Builder::MakeQuadraticTriangle7N(MeshDS_Cell &theCell,
                                             const MeshDS_Node &theNode1,
                                             const MeshDS_Node &theNode2,
                                             const MeshDS_Node &theNode3,
                                             const MeshDS_Node &theNode4,
                                             const MeshDS_Node &theNode5,
                                             const MeshDS_Node &theNode6,
                                             const MeshDS_Node &theNode7) const
{
    Handle(MeshDS_TCell) aTCell = new MeshDS_TCell(MeshAbs_QuadraticTriangle7N, 7);
    aTCell->SetNode(1, theNode1);
    aTCell->SetNode(2, theNode2);
    aTCell->SetNode(3, theNode3);
    aTCell->SetNode(4, theNode4);
    aTCell->SetNode(5, theNode5);
    aTCell->SetNode(6, theNode6);
    aTCell->SetNode(7, theNode7);
    MakeCell(theCell, aTCell);
}

// ============================================================================
/*!
 *  \brief MakeUnstructuredGrid()
*/
// ============================================================================
void MeshDS_Builder::MakeUnstructuredGrid(MeshDS_Grid &theGrid) const
{
    Handle(MeshDS_TUnstructuredGrid) aTGrid = new MeshDS_TUnstructuredGrid();
    MakeGrid(theGrid, aTGrid);
}

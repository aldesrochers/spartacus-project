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


#ifndef __MeshDS_Builder_hxx__
#define __MeshDS_Builder_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>

// Spartacus
#include <MeshDS_Cell.hxx>
#include <MeshDS_Grid.hxx>
#include <MeshDS_Group.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshDS_Node.hxx>


// ============================================================================
/*!
 *  \brief MeshDS_Builder
*/
// ============================================================================
class MeshDS_Builder
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT MeshDS_Builder();
    // destructors
    Standard_EXPORT ~MeshDS_Builder();

public:

    Standard_EXPORT void    AddInGroup(MeshDS_Group& theGroup,
                                       const MeshDS_Cell& theCell) const;

    Standard_EXPORT void    MakeGroup(MeshDS_Group& theGroup) const;

    Standard_EXPORT void    MakeLinearHexahedron8N(MeshDS_Cell& theCell,
                                                   const MeshDS_Node& theNode1,
                                                   const MeshDS_Node& theNode2,
                                                   const MeshDS_Node& theNode3,
                                                   const MeshDS_Node& theNode4,
                                                   const MeshDS_Node& theNode5,
                                                   const MeshDS_Node& theNode6,
                                                   const MeshDS_Node& theNode7,
                                                   const MeshDS_Node& theNode8) const;

    Standard_EXPORT void    MakeLinearLine2N(MeshDS_Cell& theCell,
                                             const MeshDS_Node& theNode1,
                                             const MeshDS_Node& theNode2) const;

    Standard_EXPORT void    MakeLinearPentahedron6N(MeshDS_Cell& theCell,
                                                    const MeshDS_Node& theNode1,
                                                    const MeshDS_Node& theNode2,
                                                    const MeshDS_Node& theNode3,
                                                    const MeshDS_Node& theNode4,
                                                    const MeshDS_Node& theNode5,
                                                    const MeshDS_Node& theNode6) const;

    Standard_EXPORT void    MakeLinearPyramid5N(MeshDS_Cell& theCell,
                                                const MeshDS_Node& theNode1,
                                                const MeshDS_Node& theNode2,
                                                const MeshDS_Node& theNode3,
                                                const MeshDS_Node& theNode4,
                                                const MeshDS_Node& theNode5) const;

    Standard_EXPORT void    MakeLinearQuadrangle4N(MeshDS_Cell& theCell,
                                                   const MeshDS_Node& theNode1,
                                                   const MeshDS_Node& theNode2,
                                                   const MeshDS_Node& theNode3,
                                                   const MeshDS_Node& theNode4) const;

    Standard_EXPORT void    MakeLinearTetrahedron4N(MeshDS_Cell& theCell,
                                                    const MeshDS_Node& theNode1,
                                                    const MeshDS_Node& theNode2,
                                                    const MeshDS_Node& theNode3,
                                                    const MeshDS_Node& theNode4) const;

    Standard_EXPORT void    MakeLinearTriangle3N(MeshDS_Cell& theCell,
                                                 const MeshDS_Node& theNode1,
                                                 const MeshDS_Node& theNode2,
                                                 const MeshDS_Node& theNode3) const;

    Standard_EXPORT void    MakeNode1d(MeshDS_Node& theNode,
                                       const Standard_Real theX) const;

    Standard_EXPORT void    MakeNode2d(MeshDS_Node& theNode,
                                       const gp_Pnt2d& thePoint) const;
    Standard_EXPORT void    MakeNode2d(MeshDS_Node& theNode,
                                       const Standard_Real theX,
                                       const Standard_Real theY) const;

    Standard_EXPORT void    MakeNode3d(MeshDS_Node& theNode,
                                       const gp_Pnt& thePoint) const;
    Standard_EXPORT void    MakeNode3d(MeshDS_Node& theNode,
                                       const Standard_Real theX,
                                       const Standard_Real theY,
                                       const Standard_Real theZ) const;

    Standard_EXPORT void    MakeQuadraticHexahedron20N(MeshDS_Cell& theCell,
                                                       const MeshDS_Node& theNode1,
                                                       const MeshDS_Node& theNode2,
                                                       const MeshDS_Node& theNode3,
                                                       const MeshDS_Node& theNode4,
                                                       const MeshDS_Node& theNode5,
                                                       const MeshDS_Node& theNode6,
                                                       const MeshDS_Node& theNode7,
                                                       const MeshDS_Node& theNode8,
                                                       const MeshDS_Node& theNode9,
                                                       const MeshDS_Node& theNode10,
                                                       const MeshDS_Node& theNode11,
                                                       const MeshDS_Node& theNode12,
                                                       const MeshDS_Node& theNode13,
                                                       const MeshDS_Node& theNode14,
                                                       const MeshDS_Node& theNode15,
                                                       const MeshDS_Node& theNode16,
                                                       const MeshDS_Node& theNode17,
                                                       const MeshDS_Node& theNode18,
                                                       const MeshDS_Node& theNode19,
                                                       const MeshDS_Node& theNode20) const;

    Standard_EXPORT void    MakeQuadraticHexahedron27N(MeshDS_Cell& theCell,
                                                       const MeshDS_Node& theNode1,
                                                       const MeshDS_Node& theNode2,
                                                       const MeshDS_Node& theNode3,
                                                       const MeshDS_Node& theNode4,
                                                       const MeshDS_Node& theNode5,
                                                       const MeshDS_Node& theNode6,
                                                       const MeshDS_Node& theNode7,
                                                       const MeshDS_Node& theNode8,
                                                       const MeshDS_Node& theNode9,
                                                       const MeshDS_Node& theNode10,
                                                       const MeshDS_Node& theNode11,
                                                       const MeshDS_Node& theNode12,
                                                       const MeshDS_Node& theNode13,
                                                       const MeshDS_Node& theNode14,
                                                       const MeshDS_Node& theNode15,
                                                       const MeshDS_Node& theNode16,
                                                       const MeshDS_Node& theNode17,
                                                       const MeshDS_Node& theNode18,
                                                       const MeshDS_Node& theNode19,
                                                       const MeshDS_Node& theNode20,
                                                       const MeshDS_Node& theNode21,
                                                       const MeshDS_Node& theNode22,
                                                       const MeshDS_Node& theNode23,
                                                       const MeshDS_Node& theNode24,
                                                       const MeshDS_Node& theNode25,
                                                       const MeshDS_Node& theNode26,
                                                       const MeshDS_Node& theNode27) const;

    Standard_EXPORT void    MakeQuadraticLine3N(MeshDS_Cell& theCell,
                                                const MeshDS_Node& theNode1,
                                                const MeshDS_Node& theNode2,
                                                const MeshDS_Node& theNode3) const;

    Standard_EXPORT void    MakeQuadraticPentahedron15N(MeshDS_Cell& theCell,
                                                        const MeshDS_Node& theNode1,
                                                        const MeshDS_Node& theNode2,
                                                        const MeshDS_Node& theNode3,
                                                        const MeshDS_Node& theNode4,
                                                        const MeshDS_Node& theNode5,
                                                        const MeshDS_Node& theNode6,
                                                        const MeshDS_Node& theNode7,
                                                        const MeshDS_Node& theNode8,
                                                        const MeshDS_Node& theNode9,
                                                        const MeshDS_Node& theNode10,
                                                        const MeshDS_Node& theNode11,
                                                        const MeshDS_Node& theNode12,
                                                        const MeshDS_Node& theNode13,
                                                        const MeshDS_Node& theNode14,
                                                        const MeshDS_Node& theNode15) const;

    Standard_EXPORT void    MakeQuadraticPentahedron18N(MeshDS_Cell& theCell,
                                                        const MeshDS_Node& theNode1,
                                                        const MeshDS_Node& theNode2,
                                                        const MeshDS_Node& theNode3,
                                                        const MeshDS_Node& theNode4,
                                                        const MeshDS_Node& theNode5,
                                                        const MeshDS_Node& theNode6,
                                                        const MeshDS_Node& theNode7,
                                                        const MeshDS_Node& theNode8,
                                                        const MeshDS_Node& theNode9,
                                                        const MeshDS_Node& theNode10,
                                                        const MeshDS_Node& theNode11,
                                                        const MeshDS_Node& theNode12,
                                                        const MeshDS_Node& theNode13,
                                                        const MeshDS_Node& theNode14,
                                                        const MeshDS_Node& theNode15,
                                                        const MeshDS_Node& theNode16,
                                                        const MeshDS_Node& theNode17,
                                                        const MeshDS_Node& theNode18) const;

    Standard_EXPORT void    MakeQuadraticPyramid13N(MeshDS_Cell& theCell,
                                                    const MeshDS_Node& theNode1,
                                                    const MeshDS_Node& theNode2,
                                                    const MeshDS_Node& theNode3,
                                                    const MeshDS_Node& theNode4,
                                                    const MeshDS_Node& theNode5,
                                                    const MeshDS_Node& theNode6,
                                                    const MeshDS_Node& theNode7,
                                                    const MeshDS_Node& theNode8,
                                                    const MeshDS_Node& theNode9,
                                                    const MeshDS_Node& theNode10,
                                                    const MeshDS_Node& theNode11,
                                                    const MeshDS_Node& theNode12,
                                                    const MeshDS_Node& theNode13) const;

    Standard_EXPORT void    MakeQuadraticPyramid14N(MeshDS_Cell& theCell,
                                                    const MeshDS_Node& theNode1,
                                                    const MeshDS_Node& theNode2,
                                                    const MeshDS_Node& theNode3,
                                                    const MeshDS_Node& theNode4,
                                                    const MeshDS_Node& theNode5,
                                                    const MeshDS_Node& theNode6,
                                                    const MeshDS_Node& theNode7,
                                                    const MeshDS_Node& theNode8,
                                                    const MeshDS_Node& theNode9,
                                                    const MeshDS_Node& theNode10,
                                                    const MeshDS_Node& theNode11,
                                                    const MeshDS_Node& theNode12,
                                                    const MeshDS_Node& theNode13,
                                                    const MeshDS_Node& theNode14) const;

    Standard_EXPORT void    MakeQuadraticQuadrangle8N(MeshDS_Cell& theCell,
                                                      const MeshDS_Node& theNode1,
                                                      const MeshDS_Node& theNode2,
                                                      const MeshDS_Node& theNode3,
                                                      const MeshDS_Node& theNode4,
                                                      const MeshDS_Node& theNode5,
                                                      const MeshDS_Node& theNode6,
                                                      const MeshDS_Node& theNode7,
                                                      const MeshDS_Node& theNode8) const;

    Standard_EXPORT void    MakeQuadraticQuadrangle9N(MeshDS_Cell& theCell,
                                                      const MeshDS_Node& theNode1,
                                                      const MeshDS_Node& theNode2,
                                                      const MeshDS_Node& theNode3,
                                                      const MeshDS_Node& theNode4,
                                                      const MeshDS_Node& theNode5,
                                                      const MeshDS_Node& theNode6,
                                                      const MeshDS_Node& theNode7,
                                                      const MeshDS_Node& theNode8,
                                                      const MeshDS_Node& theNode9) const;

    Standard_EXPORT void    MakeQuadraticTetrahedron10N(MeshDS_Cell& theCell,
                                                        const MeshDS_Node& theNode1,
                                                        const MeshDS_Node& theNode2,
                                                        const MeshDS_Node& theNode3,
                                                        const MeshDS_Node& theNode4,
                                                        const MeshDS_Node& theNode5,
                                                        const MeshDS_Node& theNode6,
                                                        const MeshDS_Node& theNode7,
                                                        const MeshDS_Node& theNode8,
                                                        const MeshDS_Node& theNode9,
                                                        const MeshDS_Node& theNode10) const;

    Standard_EXPORT void    MakeQuadraticTriangle6N(MeshDS_Cell& theCell,
                                                    const MeshDS_Node& theNode1,
                                                    const MeshDS_Node& theNode2,
                                                    const MeshDS_Node& theNode3,
                                                    const MeshDS_Node& theNode4,
                                                    const MeshDS_Node& theNode5,
                                                    const MeshDS_Node& theNode6) const;

    Standard_EXPORT void    MakeQuadraticTriangle7N(MeshDS_Cell& theCell,
                                                    const MeshDS_Node& theNode1,
                                                    const MeshDS_Node& theNode2,
                                                    const MeshDS_Node& theNode3,
                                                    const MeshDS_Node& theNode4,
                                                    const MeshDS_Node& theNode5,
                                                    const MeshDS_Node& theNode6,
                                                    const MeshDS_Node& theNode7) const;

    Standard_EXPORT void    MakeUnstructuredGrid(MeshDS_Grid& theGrid) const;

protected:

    Standard_EXPORT void    MakeCell(MeshDS_Cell& theCell,
                                     const Handle(MeshDS_TCell)& theTCell) const;

    Standard_EXPORT void    MakeGrid(MeshDS_Grid& theGrid,
                                     const Handle(MeshDS_TGrid)& theTGrid) const;

    Standard_EXPORT void    MakeGroup(MeshDS_Group& theGroup,
                                      const Handle(MeshDS_TGroup)& theTGroup) const;

    Standard_EXPORT void    MakeMesh(MeshDS_Mesh& theMesh,
                                     const Handle(MeshDS_TMesh)& theTMesh) const;

    Standard_EXPORT void    MakeNode(MeshDS_Node& theNode,
                                     const Handle(MeshDS_TNode)& theTNode) const;

};


#endif // __MeshDS_Builder_hxx__

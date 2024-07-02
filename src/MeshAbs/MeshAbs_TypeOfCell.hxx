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


#ifndef __MeshAbs_TypeOfCell_hxx__
#define __MeshAbs_TypeOfCell_hxx__


// ============================================================================
/*!
 *  \brief MeshAbs_TypeOfCell
*/
// ============================================================================
enum MeshAbs_TypeOfCell
{
    MeshAbs_CELL_Invalid,
    MeshAbs_CELL_BiQuadraticHexahedron,
    MeshAbs_CELL_BiQuadraticTetrahedron,
    MeshAbs_CELL_LinearHexahedron,
    MeshAbs_CELL_LinearLine,
    MeshAbs_CELL_LinearLine1d,
    MeshAbs_CELL_LinearLine2d,
    MeshAbs_CELL_LinearPentahedron,
    MeshAbs_CELL_LinearPyramid,
    MeshAbs_CELL_LinearQuadrangle,
    MeshAbs_CELL_LinearTetrahedron,
    MeshAbs_CELL_LinearTriangle,
    MeshAbs_CELL_QuadraticHexahedron,
    MeshAbs_CELL_QuadraticLine,
    MeshAbs_CELL_QuadraticPentahedron,
    MeshAbs_CELL_QuadraticPyramid,
    MeshAbs_CELL_QuadraticQuadrangle,
    MeshAbs_CELL_QuadraticTetrahedron,
    MeshAbs_CELL_QuadraticTriangle
};

#endif // __MeshAbs_TypeOfCell_hxx__

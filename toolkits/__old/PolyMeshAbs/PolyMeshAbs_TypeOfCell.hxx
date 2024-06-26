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


#ifndef __PolyMeshAbs_TypeOfCell_hxx__
#define __PolyMeshAbs_TypeOfCell_hxx__


// ============================================================================
/*!
 *  \brief PolyMeshAbs_TypeOfCell
*/
// ============================================================================
enum PolyMeshAbs_TypeOfCell
{
    PolyMeshAbs_Invalid,
    PolyMeshAbs_BiQuadraticHexahedron,
    PolyMeshAbs_BiQuadraticQuadrangle,
    PolyMeshAbs_BiQuadraticTriangle,
    PolyMeshAbs_LinearHexahedron,
    PolyMeshAbs_LinearLine,
    PolyMeshAbs_LinearPentahedron,
    PolyMeshAbs_LinearPyramid,
    PolyMeshAbs_LinearQuadrangle,
    PolyMeshAbs_LinearTetrahedron,
    PolyMeshAbs_LinearTriangle,
    PolyMeshAbs_QuadraticHexahedron,
    PolyMeshAbs_QuadraticLine,
    PolyMeshAbs_QuadraticPentahedron,
    PolyMeshAbs_QuadraticPyramid,
    PolyMeshAbs_QuadraticQuadrangle,
    PolyMeshAbs_QuadraticTetrahedron,
    PolyMeshAbs_QuadraticTriangle
};


#endif // __PolyMeshAbs_TypeOfCell_hxx__

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
    MeshAbs_Invalid,
    MeshAbs_LinearHexahedron8N,
    MeshAbs_LinearLine2N,
    MeshAbs_LinearPentahedron6N,
    MeshAbs_LinearPyramid5N,
    MeshAbs_LinearQuadrangle4N,
    MeshAbs_LinearTetrahedron4N,
    MeshAbs_LinearTriangle3N,
    MeshAbs_QuadraticHexahedron20N,
    MeshAbs_QuadraticHexahedron27N,
    MeshAbs_QuadraticLine3N,
    MeshAbs_QuadraticPentahedron15N,
    MeshAbs_QuadraticPentahedron18N,
    MeshAbs_QuadraticPyramid13N,
    MeshAbs_QuadraticPyramid14N,
    MeshAbs_QuadraticQuadrangle8N,
    MeshAbs_QuadraticQuadrangle9N,
    MeshAbs_QuadraticTetrahedron10N,
    MeshAbs_QuadraticTriangle6N,
    MeshAbs_QuadraticTriangle7N
};


#endif // __MeshAbs_TypeOfCell_hxx__

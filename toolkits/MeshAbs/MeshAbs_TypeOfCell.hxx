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
    MeshAbs_CT_LinearLine,

    MeshAbs_CT_LinearLine1d,
    MeshAbs_CT_QuadraticLine1d,

    MeshAbs_CT_LinearHexahedron8N,
    MeshAbs_CT_LinearLine2N,
    MeshAbs_CT_LinearLine2N1d,
    MeshAbs_CT_LinearLine2N2d,
    MeshAbs_CT_LinearPentahedron6N,
    MeshAbs_CT_LinearPyramid5N,
    MeshAbs_CT_LinearQuadrangle4N,
    MeshAbs_CT_LinearQuadrangle4N2d,
    MeshAbs_CT_LinearTetrahedron4N,
    MeshAbs_CT_LinearTriangle3N,
    MeshAbs_CT_LinearTriangle3N2d,
    MeshAbs_CT_QuadraticHexahedron20N,
    MeshAbs_CT_QuadraticHexahedron27N,
    MeshAbs_CT_QuadraticLine3N,
    MeshAbs_CT_QuadraticLine3N1d,
    MeshAbs_CT_QuadraticLine3N2d,
    MeshAbs_CT_QuadraticPentahedron15N,
    MeshAbs_CT_QuadraticPentahedron18N,
    MeshAbs_CT_QuadraticPyramid13N,
    MeshAbs_CT_QuadraticPyramid14N,
    MeshAbs_CT_QuadraticQuadrangle8N,
    MeshAbs_CT_QuadraticQuadrangle8N2d,
    MeshAbs_CT_QuadraticQuadrangle9N,
    MeshAbs_CT_QuadraticQuadrangle9N2d,
    MeshAbs_CT_QuadraticTetrahedron10N,
    MeshAbs_CT_QuadraticTriangle6N,
    MeshAbs_CT_QuadraticTriangle6N2d,
    MeshAbs_CT_QuadraticTriangle7N,
    MeshAbs_CT_QuadraticTriangle7N2d,
    MeshAbs_CT_Undefined
};


#endif // __MeshAbs_TypeOfCell_hxx__

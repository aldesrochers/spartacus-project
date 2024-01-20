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


#ifndef __Mesh_TypeOfCell_hxx__
#define __Mesh_TypeOfCell_hxx__


// ============================================================================
/*!
 *  \brief Mesh_TypeOfCell
*/
// ============================================================================
enum Mesh_TypeOfCell
{
    Mesh_CT_LinearHexahedron8N,
    Mesh_CT_LinearLine2N,
    Mesh_CT_LinearPentahedron6N,
    Mesh_CT_LinearPyramid5N,
    Mesh_CT_LinearQuadrangle4N,
    Mesh_CT_LinearTetrahedron4N,
    Mesh_CT_LinearTriangle3N,
    Mesh_CT_QuadraticHexahedron20N,
    Mesh_CT_QuadraticHexahedron27N,
    Mesh_CT_QuadraticLine3N,
    Mesh_CT_QuadraticPentahedron15N,
    Mesh_CT_QuadraticPentahedron18N,
    Mesh_CT_QuadraticPyramid13N,
    Mesh_CT_QuadraticPyramid14N,
    Mesh_CT_QuadraticQuadrangle8N,
    Mesh_CT_QuadraticQuadrangle9N,
    Mesh_CT_QuadraticTetrahedron10N,
    Mesh_CT_QuadraticTriangle6N,
    Mesh_CT_QuadraticTriangle7N
};


#endif // __Mesh_TypeOfCell_hxx__

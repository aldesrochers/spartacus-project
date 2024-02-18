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
    Mesh_TOC_BiQuadraticHexahedron,
    Mesh_TOC_BiQuadraticQuadrangle,
    Mesh_TOC_BiQuadraticTriangle,
    Mesh_TOC_LinearHexahedron,
    Mesh_TOC_LinearLine,
    Mesh_TOC_LinearPenthedron,
    Mesh_TOC_LinearPyramid,
    Mesh_TOC_LinearQuadrangle,
    Mesh_TOC_LinearTetrahedron,
    Mesh_TOC_LinearTriangle,
    Mesh_TOC_QuadraticHexahedron,
    Mesh_TOC_QuadraticLine,
    Mesh_TOC_QuadraticPenthedron,
    Mesh_TOC_QuadraticPyramid,
    Mesh_TOC_QuadraticQuadrangle,
    Mesh_TOC_QuadraticTetrahedron,
    Mesh_TOC_QuadraticTriangle
};

#endif // __Mesh_TypeOfCell_hxx__

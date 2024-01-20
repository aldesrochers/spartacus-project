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


#ifndef __MeshAbs_TypeOfElement_hxx__
#define __MeshAbs_TypeOfElement_hxx__


// ============================================================================
/*!
 *  \brief MeshAbs_TypeOfElement
*/
// ============================================================================
enum MeshAbs_TypeOfElement
{
    MeshAbs_ELE_LinearQuadrangle4N,
    MeshAbs_ELE_LinearLine2N,
    MeshAbs_ELE_LinearTriangle3N,
    MeshAbs_ELE_Null,
    MeshAbs_ELE_QuadraticQuadrangle8N,
    MeshAbs_ELE_QuadraticLine3N,
    MeshAbs_ELE_QuadraticTriangle6N,
    MeshAbs_ELE_QuadraticTriangle7N,
    MeshAbs_ELE_CubicLine4N,
    MeshAbs_ELE_QuarticLine5N
};

#endif // __MeshAbs_TypeOfElement_hxx__

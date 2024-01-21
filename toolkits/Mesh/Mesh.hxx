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


#ifndef __Mesh_hxx__
#define __Mesh_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <Mesh_LinearHexahedron8N.hxx>
#include <Mesh_LinearLine2N.hxx>
#include <Mesh_LinearPentahedron6N.hxx>
#include <Mesh_LinearPyramid5N.hxx>
#include <Mesh_LinearQuadrangle4N.hxx>
#include <Mesh_LinearTetrahedron4N.hxx>
#include <Mesh_LinearTriangle3N.hxx>
#include <Mesh_Node1d.hxx>
#include <Mesh_Node2d.hxx>
#include <Mesh_Node3d.hxx>
#include <Mesh_QuadraticHexahedron20N.hxx>
#include <Mesh_QuadraticHexahedron27N.hxx>
#include <Mesh_QuadraticLine3N.hxx>
#include <Mesh_QuadraticPentahedron15N.hxx>
#include <Mesh_QuadraticPentahedron18N.hxx>
#include <Mesh_QuadraticPyramid13N.hxx>
#include <Mesh_QuadraticPyramid14N.hxx>
#include <Mesh_QuadraticQuadrangle8N.hxx>
#include <Mesh_QuadraticQuadrangle9N.hxx>
#include <Mesh_QuadraticTetrahedron10N.hxx>
#include <Mesh_QuadraticTriangle6N.hxx>
#include <Mesh_QuadraticTriangle7N.hxx>


// ============================================================================
/*!
 *  \brief Mesh
*/
// ============================================================================
class Mesh
{

public:

    DEFINE_STANDARD_ALLOC;

public:

    static Standard_EXPORT Standard_Boolean     TypeMismatch(const Mesh_Cell& theCell,
                                                             const MeshAbs_TypeOfCell theType);

    static Standard_EXPORT Standard_Boolean     TypeMismatch(const Mesh_Node& theNode,
                                                             const MeshAbs_TypeOfNode theType);

public:

    static Standard_EXPORT const Mesh_Node1d&   Node1d(const Mesh_Node& theNode);
    static Standard_EXPORT Mesh_Node1d&         Node1d(Mesh_Node& theNode);

    static Standard_EXPORT const Mesh_Node2d&   Node2d(const Mesh_Node& theNode);
    static Standard_EXPORT Mesh_Node2d&         Node2d(Mesh_Node& theNode);

    static Standard_EXPORT const Mesh_Node3d&   Node3d(const Mesh_Node& theNode);
    static Standard_EXPORT Mesh_Node3d&         Node3d(Mesh_Node& theNode);

public:

    static Standard_EXPORT const Mesh_LinearHexahedron8N&       LinearHexahedron8N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_LinearHexahedron8N&             LinearHexahedron8N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_LinearLine2N&             LinearLine2N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_LinearLine2N&                   LinearLine2N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_LinearPentahedron6N&      LinearPentahedron6N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_LinearPentahedron6N&            LinearPentahedron6N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_LinearPyramid5N&          LinearPyramid5N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_LinearPyramid5N&                LinearPyramid5N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_LinearQuadrangle4N&       LinearQuadrangle4N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_LinearQuadrangle4N&             LinearQuadrangle4N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_LinearTetrahedron4N&      LinearTetrahedron4N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_LinearTetrahedron4N&            LinearTetrahedron4N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_LinearTriangle3N&         LinearTriangle3N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_LinearTriangle3N&               LinearTriangle3N(Mesh_Cell& theCell);

public:

    static Standard_EXPORT const Mesh_QuadraticHexahedron20N&   QuadraticHexahedron20N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticHexahedron20N&         QuadraticHexahedron20N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticHexahedron27N&   QuadraticHexahedron27N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticHexahedron27N&         QuadraticHexahedron27N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticLine3N&          QuadraticLine3N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticLine3N&                QuadraticLine3N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticPentahedron15N&  QuadraticPentahedron15N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticPentahedron15N&        QuadraticPentahedron15N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticPentahedron18N&  QuadraticPentahedron18N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticPentahedron18N&        QuadraticPentahedron18N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticPyramid13N&      QuadraticPyramid13N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticPyramid13N&            QuadraticPyramid13N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticPyramid14N&      QuadraticPyramid14N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticPyramid14N&            QuadraticPyramid14N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticQuadrangle8N&    QuadraticQuadrangle8N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticQuadrangle8N&          QuadraticQuadrangle8N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticQuadrangle9N&    QuadraticQuadrangle9N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticQuadrangle9N&          QuadraticQuadrangle9N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticTetrahedron10N&  QuadraticTetrahedron10N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticTetrahedron10N&        QuadraticTetrahedron10N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticTriangle6N&      QuadraticTriangle6N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticTriangle6N&            QuadraticTriangle6N(Mesh_Cell& theCell);

    static Standard_EXPORT const Mesh_QuadraticTriangle7N&      QuadraticTriangle7N(const Mesh_Cell& theCell);
    static Standard_EXPORT Mesh_QuadraticTriangle7N&            QuadraticTriangle7N(Mesh_Cell& theCell);

};


#endif // __Mesh_hxx__

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
#include <Mesh.hxx>

// OpenCascade
#include <Standard_TypeMismatch.hxx>


// ============================================================================
/*!
 *  \brief LinearHexahedron8N()
*/
// ============================================================================
const Mesh_LinearHexahedron8N& Mesh::LinearHexahedron8N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearHexahedron8N),
                                   "Mesh::LinearHexahedron8N()");
    return *(Mesh_LinearHexahedron8N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearHexahedron8N()
*/
// ============================================================================
Mesh_LinearHexahedron8N& Mesh::LinearHexahedron8N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearHexahedron8N),
                                   "Mesh::LinearHexahedron8N()");
    return *(Mesh_LinearHexahedron8N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearLine2N()
*/
// ============================================================================
const Mesh_LinearLine2N& Mesh::LinearLine2N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearLine2N),
                                   "Mesh::LinearLine2N()");
    return *(Mesh_LinearLine2N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearLine2N()
*/
// ============================================================================
Mesh_LinearLine2N& Mesh::LinearLine2N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearLine2N),
                                   "Mesh::LinearLine2N()");
    return *(Mesh_LinearLine2N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearPentahedron6N()
*/
// ============================================================================
const Mesh_LinearPentahedron6N& Mesh::LinearPentahedron6N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearPentahedron6N),
                                   "Mesh::LinearPentahedron6N()");
    return *(Mesh_LinearPentahedron6N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearPentahedron6N()
*/
// ============================================================================
Mesh_LinearPentahedron6N& Mesh::LinearPentahedron6N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearPentahedron6N),
                                   "Mesh::LinearPentahedron6N()");
    return *(Mesh_LinearPentahedron6N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearPyramid5N()
*/
// ============================================================================
const Mesh_LinearPyramid5N& Mesh::LinearPyramid5N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearPyramid5N),
                                   "Mesh::LinearPyramid5N()");
    return *(Mesh_LinearPyramid5N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearPyramid5N()
*/
// ============================================================================
Mesh_LinearPyramid5N& Mesh::LinearPyramid5N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearPyramid5N),
                                   "Mesh::LinearPyramid5N()");
    return *(Mesh_LinearPyramid5N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearQuadrangle4N()
*/
// ============================================================================
const Mesh_LinearQuadrangle4N& Mesh::LinearQuadrangle4N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearQuadrangle4N),
                                   "Mesh::LinearQuadrangle4N()");
    return *(Mesh_LinearQuadrangle4N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearQuadrangle4N()
*/
// ============================================================================
Mesh_LinearQuadrangle4N& Mesh::LinearQuadrangle4N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearQuadrangle4N),
                                   "Mesh::LinearQuadrangle4N()");
    return *(Mesh_LinearQuadrangle4N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearTetrahedron4N()
*/
// ============================================================================
const Mesh_LinearTetrahedron4N& Mesh::LinearTetrahedron4N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearTetrahedron4N),
                                   "Mesh::LinearTetrahedron4N()");
    return *(Mesh_LinearTetrahedron4N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearTetrahedron4N()
*/
// ============================================================================
Mesh_LinearTetrahedron4N& Mesh::LinearTetrahedron4N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearTetrahedron4N),
                                   "Mesh::LinearTetrahedron4N()");
    return *(Mesh_LinearTetrahedron4N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearTriangle3N()
*/
// ============================================================================
const Mesh_LinearTriangle3N& Mesh::LinearTriangle3N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearTriangle3N),
                                   "Mesh::LinearTriangle3N()");
    return *(Mesh_LinearTriangle3N*) &theCell;
}

// ============================================================================
/*!
 *  \brief LinearTriangle3N()
*/
// ============================================================================
Mesh_LinearTriangle3N& Mesh::LinearTriangle3N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_LinearTriangle3N),
                                   "Mesh::LinearTriangle3N()");
    return *(Mesh_LinearTriangle3N*) &theCell;
}

// ============================================================================
/*!
 *  \brief Node1d()
*/
// ============================================================================
const Mesh_Node1d& Mesh::Node1d(const Mesh_Node &theNode)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theNode, MeshAbs_Node1d),
                                   "Mesh::Node1d()");
    return *(Mesh_Node1d*) &theNode;
}

// ============================================================================
/*!
 *  \brief Node1d()
*/
// ============================================================================
Mesh_Node1d& Mesh::Node1d(Mesh_Node &theNode)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theNode, MeshAbs_Node1d),
                                   "Mesh::Node1d()");
    return *(Mesh_Node1d*) &theNode;
}

// ============================================================================
/*!
 *  \brief Node2d()
*/
// ============================================================================
const Mesh_Node2d& Mesh::Node2d(const Mesh_Node &theNode)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theNode, MeshAbs_Node2d),
                                   "Mesh::Node2d()");
    return *(Mesh_Node2d*) &theNode;
}

// ============================================================================
/*!
 *  \brief Node2d()
*/
// ============================================================================
Mesh_Node2d& Mesh::Node2d(Mesh_Node &theNode)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theNode, MeshAbs_Node2d),
                                   "Mesh::Node2d()");
    return *(Mesh_Node2d*) &theNode;
}

// ============================================================================
/*!
 *  \brief Node3d()
*/
// ============================================================================
const Mesh_Node3d& Mesh::Node3d(const Mesh_Node &theNode)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theNode, MeshAbs_Node3d),
                                   "Mesh::Node3d()");
    return *(Mesh_Node3d*) &theNode;
}

// ============================================================================
/*!
 *  \brief Node3d()
*/
// ============================================================================
Mesh_Node3d& Mesh::Node3d(Mesh_Node &theNode)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theNode, MeshAbs_Node3d),
                                   "Mesh::Node3d()");
    return *(Mesh_Node3d*) &theNode;
}

// ============================================================================
/*!
 *  \brief QuadraticHexahedron20N()
*/
// ============================================================================
const Mesh_QuadraticHexahedron20N& Mesh::QuadraticHexahedron20N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticHexahedron20N),
                                   "Mesh::QuadraticHexahedron20N()");
    return *(Mesh_QuadraticHexahedron20N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticHexahedron20N()
*/
// ============================================================================
Mesh_QuadraticHexahedron20N& Mesh::QuadraticHexahedron20N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticHexahedron20N),
                                   "Mesh::QuadraticHexahedron20N()");
    return *(Mesh_QuadraticHexahedron20N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticHexahedron27N()
*/
// ============================================================================
const Mesh_QuadraticHexahedron27N& Mesh::QuadraticHexahedron27N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticHexahedron27N),
                                   "Mesh::QuadraticHexahedron27N()");
    return *(Mesh_QuadraticHexahedron27N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticHexahedron27N()
*/
// ============================================================================
Mesh_QuadraticHexahedron27N& Mesh::QuadraticHexahedron27N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticHexahedron27N),
                                   "Mesh::QuadraticHexahedron27N()");
    return *(Mesh_QuadraticHexahedron27N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticLine3N()
*/
// ============================================================================
const Mesh_QuadraticLine3N& Mesh::QuadraticLine3N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticLine3N),
                                   "Mesh::QuadraticLine3N()");
    return *(Mesh_QuadraticLine3N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticLine3N()
*/
// ============================================================================
Mesh_QuadraticLine3N& Mesh::QuadraticLine3N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticLine3N),
                                   "Mesh::QuadraticLine3N()");
    return *(Mesh_QuadraticLine3N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticPentahedron15N()
*/
// ============================================================================
const Mesh_QuadraticPentahedron15N& Mesh::QuadraticPentahedron15N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticPentahedron15N),
                                   "Mesh::QuadraticPentahedron15N()");
    return *(Mesh_QuadraticPentahedron15N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticPentahedron15N()
*/
// ============================================================================
Mesh_QuadraticPentahedron15N& Mesh::QuadraticPentahedron15N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticPentahedron15N),
                                   "Mesh::QuadraticPentahedron15N()");
    return *(Mesh_QuadraticPentahedron15N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticPentahedron18N()
*/
// ============================================================================
const Mesh_QuadraticPentahedron18N& Mesh::QuadraticPentahedron18N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticPentahedron18N),
                                   "Mesh::QuadraticPentahedron18N()");
    return *(Mesh_QuadraticPentahedron18N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticPentahedron18N()
*/
// ============================================================================
Mesh_QuadraticPentahedron18N& Mesh::QuadraticPentahedron18N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticPentahedron18N),
                                   "Mesh::QuadraticPentahedron18N()");
    return *(Mesh_QuadraticPentahedron18N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticPyramid13N()
*/
// ============================================================================
const Mesh_QuadraticPyramid13N& Mesh::QuadraticPyramid13N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticPyramid13N),
                                   "Mesh::QuadraticPyramid13N()");
    return *(Mesh_QuadraticPyramid13N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticPyramid13N()
*/
// ============================================================================
Mesh_QuadraticPyramid13N& Mesh::QuadraticPyramid13N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticPyramid13N),
                                   "Mesh::QuadraticPyramid13N()");
    return *(Mesh_QuadraticPyramid13N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticPyramid14N()
*/
// ============================================================================
const Mesh_QuadraticPyramid14N& Mesh::QuadraticPyramid14N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticPyramid14N),
                                   "Mesh::QuadraticPyramid14N()");
    return *(Mesh_QuadraticPyramid14N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticPyramid14N()
*/
// ============================================================================
Mesh_QuadraticPyramid14N& Mesh::QuadraticPyramid14N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticPyramid14N),
                                   "Mesh::QuadraticPyramid14N()");
    return *(Mesh_QuadraticPyramid14N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticQuadrangle8N()
*/
// ============================================================================
const Mesh_QuadraticQuadrangle8N& Mesh::QuadraticQuadrangle8N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticQuadrangle8N),
                                   "Mesh::QuadraticQuadrangle8N()");
    return *(Mesh_QuadraticQuadrangle8N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticQuadrangle8N()
*/
// ============================================================================
Mesh_QuadraticQuadrangle8N& Mesh::QuadraticQuadrangle8N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticQuadrangle8N),
                                   "Mesh::QuadraticQuadrangle8N()");
    return *(Mesh_QuadraticQuadrangle8N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticQuadrangle9N()
*/
// ============================================================================
const Mesh_QuadraticQuadrangle9N& Mesh::QuadraticQuadrangle9N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticQuadrangle9N),
                                   "Mesh::QuadraticQuadrangle9N()");
    return *(Mesh_QuadraticQuadrangle9N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticQuadrangle9N()
*/
// ============================================================================
Mesh_QuadraticQuadrangle9N& Mesh::QuadraticQuadrangle9N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticQuadrangle9N),
                                   "Mesh::QuadraticQuadrangle9N()");
    return *(Mesh_QuadraticQuadrangle9N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticTetrahedron10N()
*/
// ============================================================================
const Mesh_QuadraticTetrahedron10N& Mesh::QuadraticTetrahedron10N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticTetrahedron10N),
                                   "Mesh::QuadraticTetrahedron10N()");
    return *(Mesh_QuadraticTetrahedron10N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticTetrahedron10N()
*/
// ============================================================================
Mesh_QuadraticTetrahedron10N& Mesh::QuadraticTetrahedron10N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticTetrahedron10N),
                                   "Mesh::QuadraticTetrahedron10N()");
    return *(Mesh_QuadraticTetrahedron10N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticTriangle6N()
*/
// ============================================================================
const Mesh_QuadraticTriangle6N& Mesh::QuadraticTriangle6N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticTriangle6N),
                                   "Mesh::QuadraticTriangle6N()");
    return *(Mesh_QuadraticTriangle6N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticTriangle6N()
*/
// ============================================================================
Mesh_QuadraticTriangle6N& Mesh::QuadraticTriangle6N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticTriangle6N),
                                   "Mesh::QuadraticTriangle6N()");
    return *(Mesh_QuadraticTriangle6N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticTriangle7N()
*/
// ============================================================================
const Mesh_QuadraticTriangle7N& Mesh::QuadraticTriangle7N(const Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticTriangle7N),
                                   "Mesh::QuadraticTriangle7N()");
    return *(Mesh_QuadraticTriangle7N*) &theCell;
}

// ============================================================================
/*!
 *  \brief QuadraticTriangle7N()
*/
// ============================================================================
Mesh_QuadraticTriangle7N& Mesh::QuadraticTriangle7N(Mesh_Cell &theCell)
{
    Standard_TypeMismatch_Raise_if(TypeMismatch(theCell, MeshAbs_QuadraticTriangle7N),
                                   "Mesh::QuadraticTriangle7N()");
    return *(Mesh_QuadraticTriangle7N*) &theCell;
}

// ============================================================================
/*!
 *  \brief TypeMismatch()
*/
// ============================================================================
Standard_Boolean Mesh::TypeMismatch(const Mesh_Cell &theCell,
                                    const MeshAbs_TypeOfCell theType)
{
    return theCell.Type() != theType;
}

// ============================================================================
/*!
 *  \brief TypeMismatch()
*/
// ============================================================================
Standard_Boolean Mesh::TypeMismatch(const Mesh_Node &theNode,
                                    const MeshAbs_TypeOfNode theType)
{
    return theNode.Type() != theType;
}

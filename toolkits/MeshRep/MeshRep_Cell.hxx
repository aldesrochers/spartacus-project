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


#ifndef __MeshRep_Cell_hxx__
#define __MeshRep_Cell_hxx__

// Spartacus
#include <MeshRep_Representation.hxx>
#include <Mesh_LinearHexahedron8N.hxx>
#include <Mesh_LinearLine2N.hxx>
#include <Mesh_LinearPentahedron6N.hxx>
#include <Mesh_LinearPyramid5N.hxx>
#include <Mesh_LinearQuadrangle4N.hxx>
#include <Mesh_LinearTetrahedron4N.hxx>
#include <Mesh_LinearTriangle3N.hxx>
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
#include <Mesh1d_LinearLine2N.hxx>
#include <Mesh1d_QuadraticLine3N.hxx>
#include <Mesh2d_LinearLine2N.hxx>
#include <Mesh2d_LinearQuadrangle4N.hxx>
#include <Mesh2d_LinearTriangle3N.hxx>
#include <Mesh2d_QuadraticLine3N.hxx>
#include <Mesh2d_QuadraticQuadrangle8N.hxx>
#include <Mesh2d_QuadraticQuadrangle9N.hxx>
#include <Mesh2d_QuadraticTriangle6N.hxx>
#include <Mesh2d_QuadraticTriangle7N.hxx>

// Forward declarations
class MeshRep_Cell;

// Handles
DEFINE_STANDARD_HANDLE(MeshRep_Cell, MeshRep_Representation);


// ============================================================================
/*!
 *  \brief MeshRep_Cell
*/
// ============================================================================
class MeshRep_Cell : public MeshRep_Representation
{

public:
    // constructors
    Standard_EXPORT MeshRep_Cell();
    // destructors
    Standard_EXPORT ~MeshRep_Cell();

public:

    Standard_EXPORT virtual Standard_Boolean    IsLinearHexahedron8N() const;
    Standard_EXPORT virtual Standard_Boolean    IsLinearLine2N() const;
    Standard_EXPORT virtual Standard_Boolean    IsLinearLine2N1d() const;
    Standard_EXPORT virtual Standard_Boolean    IsLinearLine2N2d() const;
    Standard_EXPORT virtual Standard_Boolean    IsLinearPentahedron6N() const;
    Standard_EXPORT virtual Standard_Boolean    IsLinearPyramid5N() const;
    Standard_EXPORT virtual Standard_Boolean    IsLinearQuadrangle4N() const;
    Standard_EXPORT virtual Standard_Boolean    IsLinearQuadrangle4N2d() const;
    Standard_EXPORT virtual Standard_Boolean    IsLinearTetrahedron4N() const;
    Standard_EXPORT virtual Standard_Boolean    IsLinearTriangle3N() const;
    Standard_EXPORT virtual Standard_Boolean    IsLinearTriangle3N2d() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticHexahedron20N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticHexahedron27N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticLine3N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticLine3N1d() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticLine3N2d() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticPentahedron15N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticPentahedron18N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticPyramid13N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticPyramid14N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticQuadrangle8N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticQuadrangle8N2d() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticQuadrangle9N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticQuadrangle9N2d() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticTetrahedron10N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticTriangle6N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticTriangle6N2d() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticTriangle7N() const;
    Standard_EXPORT virtual Standard_Boolean    IsQuadraticTriangle7N2d() const;



public:

    DEFINE_STANDARD_RTTIEXT(MeshRep_Cell, MeshRep_Representation);

};


#endif // __MeshRep_Cell_hxx__

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


#ifndef __MeshDS_CellRepresentation_hxx__
#define __MeshDS_CellRepresentation_hxx__

// Spartacus
#include <MeshDS_Node.hxx>
#include <MeshDS_Representation.hxx>

// Forward declarations
class MeshDS_CellRepresentation;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_CellRepresentation, MeshDS_Representation);


// ============================================================================
/*!
 *  \brief MeshDS_CellRepresentation
*/
// ============================================================================
class MeshDS_CellRepresentation : public MeshDS_Representation
{

public:
    // constructors
    Standard_EXPORT MeshDS_CellRepresentation();
    // destructors
    Standard_EXPORT ~MeshDS_CellRepresentation();

public:

    //virtual Standard_EXPORT Standard_Boolean    IsLinearHexahedron8N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsLinearLine2N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsLinearPentahedron6N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsLinearPyramid5N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsLinearQuadrangle4N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsLinearTetrahedron4N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsLinearTriangle3N() const;

    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticHexahedron20N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticHexahedron27N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticLine3N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticPentahedron15N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticPentahedron18N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticPyramid13N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticPyramid14N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticQuadrangle8N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticQuadrangle9N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticTetrahedron10N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticTriangle6N() const;
    //virtual Standard_EXPORT Standard_Boolean    IsQuadraticTriangle7N() const;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_CellRepresentation, MeshDS_Representation);

};


#endif // __MeshDS_CellRepresentation_hxx__

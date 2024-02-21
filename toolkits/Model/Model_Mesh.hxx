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


#ifndef __Model_Mesh_hxx__
#define __Model_Mesh_hxx__

// Spartacus
#include <Model_Object.hxx>
#include <PolyMesh_Mesh.hxx>
#include <PolyMesh1d_Mesh.hxx>
#include <PolyMesh2d_Mesh.hxx>
#include <Poly_Triangulation.hxx>

// Forward declarations
class Model_Mesh;

// Handles
DEFINE_STANDARD_HANDLE(Model_Mesh, Model_Object)


// ============================================================================
/*!
 *  \brief Model_Mesh
*/
// ============================================================================
class Model_Mesh : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_Mesh();
    // destructors
    Standard_EXPORT ~Model_Mesh();

public:

    virtual Standard_EXPORT Standard_Boolean                    IsPolyMesh1d() const;
    virtual Standard_EXPORT Standard_Boolean                    IsPolyMesh2d() const;
    virtual Standard_EXPORT Standard_Boolean                    IsPolyMesh3d() const;
    virtual Standard_EXPORT Standard_Boolean                    IsTriangulation() const;
    virtual Standard_EXPORT const Handle(PolyMesh1d_Mesh)&      PolyMesh1d() const;
    virtual Standard_EXPORT const Handle(PolyMesh2d_Mesh)&      PolyMesh2d() const;
    virtual Standard_EXPORT const Handle(PolyMesh_Mesh)&        PolyMesh3d() const;
    virtual Standard_EXPORT const Handle(Poly_Triangulation)&   Triangulation() const;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Mesh, Model_Object)

};


#endif // __Model_Mesh_hxx__

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


#ifndef __ModelBuilder_MakeMesh_hxx__
#define __ModelBuilder_MakeMesh_hxx__

// Spartacus
#include <ModelBuilder_Command.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Mesh.hxx>
#include <PolyMesh_Mesh.hxx>
#include <PolyMesh1d_Mesh.hxx>
#include <PolyMesh2d_Mesh.hxx>
#include <Poly_Triangulation.hxx>

// ============================================================================
/*!
 *  \brief ModelBuilder_MakeMesh
*/
// ============================================================================
class ModelBuilder_MakeMesh : public ModelBuilder_Command
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ModelBuilder_MakeMesh(const Handle(PolyMesh1d_Mesh)& thePolyMesh);
    Standard_EXPORT ModelBuilder_MakeMesh(const Handle(PolyMesh2d_Mesh)& thePolyMesh);
    Standard_EXPORT ModelBuilder_MakeMesh(const Handle(PolyMesh_Mesh)& thePolyMesh);
    Standard_EXPORT ModelBuilder_MakeMesh(const Handle(Poly_Triangulation)& theTriangulation);
    // destructors
    Standard_EXPORT ~ModelBuilder_MakeMesh();

public:

    Standard_EXPORT void    Initialize(const Handle(PolyMesh1d_Mesh)& thePolyMesh);
    Standard_EXPORT void    Initialize(const Handle(PolyMesh2d_Mesh)& thePolyMesh);
    Standard_EXPORT void    Initialize(const Handle(PolyMesh_Mesh)& thePolyMesh);
    Standard_EXPORT void    Initialize(const Handle(Poly_Triangulation)& theTriangulation);

public:

    Standard_EXPORT const ModelDS_Mesh&     Mesh() const;
    Standard_EXPORT operator                ModelDS_Mesh() const;

private:

    ModelDS_Builder     myBuilder;
    ModelDS_Mesh        myMesh;

};


#endif // __ModelBuilder_MakeMesh_hxx__

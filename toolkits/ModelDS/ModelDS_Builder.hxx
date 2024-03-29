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


#ifndef __ModelDS_Builder_hxx__
#define __ModelDS_Builder_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <ModelDS_Mesh.hxx>
#include <ModelDS_Object.hxx>
#include <ModelDS_TObject.hxx>
#include <PolyMesh_Mesh.hxx>
#include <PolyMesh1d_Mesh.hxx>
#include <PolyMesh2d_Mesh.hxx>
#include <Poly_Triangulation.hxx>


// ============================================================================
/*!
 *  \brief ModelDS_Builder
*/
// ============================================================================
class ModelDS_Builder
{

public:
    // constructors
    Standard_EXPORT ModelDS_Builder();
    // destructors
    Standard_EXPORT ~ModelDS_Builder();

public:

    Standard_EXPORT void    MakeMesh(ModelDS_Mesh& theMesh) const;
    Standard_EXPORT void    MakeMesh(ModelDS_Mesh& theMesh,
                                     const Handle(PolyMesh1d_Mesh)& thePolyMesh) const;
    Standard_EXPORT void    MakeMesh(ModelDS_Mesh& theMesh,
                                     const Handle(PolyMesh2d_Mesh)& thePolyMesh) const;
    Standard_EXPORT void    MakeMesh(ModelDS_Mesh& theMesh,
                                     const Handle(PolyMesh_Mesh)& thePolyMesh) const;
    Standard_EXPORT void    MakeMesh(ModelDS_Mesh& theMesh,
                                     const Handle(Poly_Triangulation)& theTriangulation) const;

    Standard_EXPORT void    UpdateMesh(const ModelDS_Mesh& theMesh,
                                       const Handle(PolyMesh1d_Mesh)& thePolyMesh) const;
    Standard_EXPORT void    UpdateMesh(const ModelDS_Mesh& theMesh,
                                       const Handle(PolyMesh2d_Mesh)& thePolyMesh) const;
    Standard_EXPORT void    UpdateMesh(const ModelDS_Mesh& theMesh,
                                       const Handle(PolyMesh_Mesh)& thePolyMesh) const;
    Standard_EXPORT void    UpdateMesh(const ModelDS_Mesh& theMesh,
                                       const Handle(Poly_Triangulation)& theTriangulation) const;

protected:

    Standard_EXPORT void    MakeObject(ModelDS_Object& theObject,
                                       const Handle(ModelDS_TObject)& theTObject) const;

};


#endif // __ModelDS_Builder_hxx__

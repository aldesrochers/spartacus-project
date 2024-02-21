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
#include <Model_PolyMesh.hxx>
#include <Model_PolyMesh1d.hxx>
#include <Model_PolyMesh2d.hxx>
#include <Model_Triangulation.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_TMesh.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_Builder::ModelDS_Builder()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_Builder::~ModelDS_Builder()
{

}

// ============================================================================
/*!
 *  \brief MakeMesh()
*/
// ============================================================================
void ModelDS_Builder::MakeMesh(ModelDS_Mesh &theMesh) const
{
    Handle(ModelDS_TMesh) aTMesh = new ModelDS_TMesh();
    MakeObject(theMesh, aTMesh);
}

// ============================================================================
/*!
 *  \brief MakeMesh()
*/
// ============================================================================
void ModelDS_Builder::MakeMesh(ModelDS_Mesh &theMesh,
                               const Handle(PolyMesh1d_Mesh) &thePolyMesh) const
{
    MakeMesh(theMesh);
    UpdateMesh(theMesh, thePolyMesh);
}

// ============================================================================
/*!
 *  \brief MakeMesh()
*/
// ============================================================================
void ModelDS_Builder::MakeMesh(ModelDS_Mesh &theMesh,
                               const Handle(PolyMesh2d_Mesh) &thePolyMesh) const
{
    MakeMesh(theMesh);
    UpdateMesh(theMesh, thePolyMesh);
}

// ============================================================================
/*!
 *  \brief MakeMesh()
*/
// ============================================================================
void ModelDS_Builder::MakeMesh(ModelDS_Mesh &theMesh,
                               const Handle(PolyMesh_Mesh) &thePolyMesh) const
{
    MakeMesh(theMesh);
    UpdateMesh(theMesh, thePolyMesh);
}

// ============================================================================
/*!
 *  \brief MakeMesh()
*/
// ============================================================================
void ModelDS_Builder::MakeMesh(ModelDS_Mesh &theMesh,
                               const Handle(Poly_Triangulation) &theTriangulation) const
{
    MakeMesh(theMesh);
    UpdateMesh(theMesh, theTriangulation);
}

// ============================================================================
/*!
 *  \brief MakeObject()
*/
// ============================================================================
void ModelDS_Builder::MakeObject(ModelDS_Object &theObject,
                                 const Handle(ModelDS_TObject) &theTObject) const
{
    theObject.SetTObject(theTObject);
}

// ============================================================================
/*!
 *  \brief UpdateMesh()
*/
// ============================================================================
void ModelDS_Builder::UpdateMesh(const ModelDS_Mesh &theMesh,
                                 const Handle(PolyMesh1d_Mesh)& thePolyMesh) const
{
    const Handle(ModelDS_TMesh)& aTMesh = *((Handle(ModelDS_TMesh)*) &theMesh.TObject());
    Handle(Model_PolyMesh1d) aRepresentation = new Model_PolyMesh1d(thePolyMesh);
    aTMesh->SetRepresentation(aRepresentation);
}

// ============================================================================
/*!
 *  \brief UpdateMesh()
*/
// ============================================================================
void ModelDS_Builder::UpdateMesh(const ModelDS_Mesh &theMesh,
                                 const Handle(PolyMesh2d_Mesh)& thePolyMesh) const
{
    const Handle(ModelDS_TMesh)& aTMesh = *((Handle(ModelDS_TMesh)*) &theMesh.TObject());
    Handle(Model_PolyMesh2d) aRepresentation = new Model_PolyMesh2d(thePolyMesh);
    aTMesh->SetRepresentation(aRepresentation);
}

// ============================================================================
/*!
 *  \brief UpdateMesh()
*/
// ============================================================================
void ModelDS_Builder::UpdateMesh(const ModelDS_Mesh &theMesh,
                                 const Handle(PolyMesh_Mesh)& thePolyMesh) const
{
    const Handle(ModelDS_TMesh)& aTMesh = *((Handle(ModelDS_TMesh)*) &theMesh.TObject());
    Handle(Model_PolyMesh) aRepresentation = new Model_PolyMesh(thePolyMesh);
    aTMesh->SetRepresentation(aRepresentation);
}

// ============================================================================
/*!
 *  \brief UpdateMesh()
*/
// ============================================================================
void ModelDS_Builder::UpdateMesh(const ModelDS_Mesh &theMesh,
                                 const Handle(Poly_Triangulation)& theTriangulation) const
{
    const Handle(ModelDS_TMesh)& aTMesh = *((Handle(ModelDS_TMesh)*) &theMesh.TObject());
    Handle(Model_Triangulation) aRepresentation = new Model_Triangulation(theTriangulation);
    aTMesh->SetRepresentation(aRepresentation);
}

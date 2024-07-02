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


#ifndef __ModelBuilder_MakeModel_hxx__
#define __ModelBuilder_MakeModel_hxx__

// Spartacus
#include <MeshDS_Mesh.hxx>
#include <MeshTools_IndexedMapOfObject.hxx>
#include <ModelBuilder_MakeObject.hxx>
#include <ModelBuilder_ModelError.hxx>
#include <ModelDS_Model.hxx>
#include <ModelDS_Node.hxx>
#include <ModelTools_DataMapOfIntegerObject.hxx>



// ============================================================================
/*!
 *  \brief ModelBuilder_MakeModel
*/
// ============================================================================
class ModelBuilder_MakeModel : public ModelBuilder_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT ModelBuilder_MakeModel();
    // destructors
    Standard_EXPORT ~ModelBuilder_MakeModel();

public:

    Standard_EXPORT const ModelDS_Model&    Model() const;
    Standard_EXPORT operator                ModelDS_Model() const;

public:

    Standard_EXPORT void                AddNode(const ModelDS_Node& theNode);
    Standard_EXPORT Standard_Integer    NbCells() const;
    Standard_EXPORT Standard_Integer    NbElements() const;
    Standard_EXPORT Standard_Integer    NbNodes() const;
    Standard_EXPORT Standard_Integer    NbVertices() const;
    Standard_EXPORT const MeshDS_Mesh&  Mesh() const;
    Standard_EXPORT void                SetMesh(const MeshDS_Mesh& theMesh);

private:

    MeshTools_IndexedMapOfObject        myCells;
    ModelTools_DataMapOfIntegerObject   myElements;
    ModelBuilder_ModelError             myError;
    MeshDS_Mesh                         myMesh;
    ModelTools_DataMapOfIntegerObject   myNodes;
    MeshTools_IndexedMapOfObject        myVertices;

};


#endif // __ModelBuilder_MakeModel_hxx__

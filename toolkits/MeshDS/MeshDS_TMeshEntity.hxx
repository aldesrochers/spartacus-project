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


#ifndef __MeshDS_TMeshEntity_hxx__
#define __MeshDS_TMeshEntity_hxx__

// Spartacus
#include <MeshDS_Mesh.hxx>
#include <MeshDS_TObject.hxx>

// Forward declarations
class MeshDS_TMeshEntity;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TMeshEntity, MeshDS_TObject)


// ============================================================================
/*!
 *  \brief MeshDS_TMeshEntity
*/
// ============================================================================
class MeshDS_TMeshEntity : public MeshDS_TObject
{

public:
    // constructors
    Standard_EXPORT MeshDS_TMeshEntity();
    // destructors
    Standard_EXPORT ~MeshDS_TMeshEntity();

public:

    Standard_EXPORT const MeshDS_Mesh&  Mesh() const;
    Standard_EXPORT void                SetMesh(const MeshDS_Mesh& theMesh);

private:

    MeshDS_Mesh     myMesh;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TMeshEntity, MeshDS_TObject)

};


#endif // __MeshDS_TMeshEntity_hxx__

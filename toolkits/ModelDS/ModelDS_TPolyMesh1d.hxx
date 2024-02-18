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


#ifndef __ModelDS_TPolyMesh1d_hxx__
#define __ModelDS_TPolyMesh1d_hxx__

// Spartacus
#include <ModelDS_TMesh.hxx>

// Forward declarations
class ModelDS_TPolyMesh1d;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TPolyMesh1d, ModelDS_TMesh);


// ============================================================================
/*!
 *  \brief ModelDS_TPolyMesh1d
*/
// ============================================================================
class ModelDS_TPolyMesh1d : public ModelDS_TMesh
{

public:
    // constructors
    Standard_EXPORT ModelDS_TPolyMesh1d(const Handle(PolyMesh1d_Mesh)& theMesh);
    // destructors
    Standard_EXPORT ~ModelDS_TPolyMesh1d();

public:

    Standard_EXPORT Standard_Boolean                IsPolyMesh1d() const Standard_OVERRIDE;
    Standard_EXPORT const Handle(PolyMesh1d_Mesh)&  PolyMesh1d() const Standard_OVERRIDE;

private:

    Handle(PolyMesh1d_Mesh)     myMesh;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TPolyMesh1d, ModelDS_TMesh);

};


#endif // __ModelDS_TPolyMesh1d_hxx__

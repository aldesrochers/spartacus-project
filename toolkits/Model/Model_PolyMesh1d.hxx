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


#ifndef __Model_PolyMesh1d_hxx__
#define __Model_PolyMesh1d_hxx__

// Spartacus
#include <Model_Mesh.hxx>

// Forward declarations
class Model_PolyMesh1d;

// Handles
DEFINE_STANDARD_HANDLE(Model_PolyMesh1d, Model_Mesh)


// ============================================================================
/*!
 *  \brief Model_PolyMesh1d
*/
// ============================================================================
class Model_PolyMesh1d : public Model_Mesh
{

public:
    // constructors
    Standard_EXPORT Model_PolyMesh1d(const Handle(PolyMesh1d_Mesh)& theMesh);
    // destructors
    Standard_EXPORT ~Model_PolyMesh1d();

public:

    Standard_EXPORT Standard_Boolean                IsPolyMesh1d() const Standard_OVERRIDE;
    Standard_EXPORT const Handle(PolyMesh1d_Mesh)&  PolyMesh1d() const Standard_OVERRIDE;

private:

    Handle(PolyMesh1d_Mesh)     myMesh;

public:

    DEFINE_STANDARD_RTTIEXT(Model_PolyMesh1d, Model_Mesh)

};


#endif // __Model_PolyMesh1d_hxx__

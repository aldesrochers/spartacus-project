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
#include <Model_PolyMesh1d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_PolyMesh1d::Model_PolyMesh1d(const Handle(PolyMesh1d_Mesh)& theMesh)
    : myMesh(theMesh)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_PolyMesh1d::~Model_PolyMesh1d()
{

}

// ============================================================================
/*!
 *  \brief IsPolyMesh1d()
*/
// ============================================================================
Standard_Boolean Model_PolyMesh1d::IsPolyMesh1d() const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief PolyMesh1d()
*/
// ============================================================================
const Handle(PolyMesh1d_Mesh)& Model_PolyMesh1d::PolyMesh1d() const
{
    return myMesh;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_PolyMesh1d, Model_Mesh);
IMPLEMENT_STANDARD_RTTIEXT(Model_PolyMesh1d, Model_Mesh);

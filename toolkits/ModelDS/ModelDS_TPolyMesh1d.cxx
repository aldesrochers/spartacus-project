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
#include <ModelDS_TPolyMesh1d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TPolyMesh1d::ModelDS_TPolyMesh1d(const Handle(PolyMesh1d_Mesh)& theMesh)
    : myMesh(theMesh)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TPolyMesh1d::~ModelDS_TPolyMesh1d()
{

}

// ============================================================================
/*!
 *  \brief IsPolyMesh1d()
*/
// ============================================================================
Standard_Boolean ModelDS_TPolyMesh1d::IsPolyMesh1d() const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief PolyMesh1d()
*/
// ============================================================================
const Handle(PolyMesh1d_Mesh)& ModelDS_TPolyMesh1d::PolyMesh1d() const
{
    return myMesh;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TPolyMesh1d, ModelDS_TMesh);
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TPolyMesh1d, ModelDS_TMesh);

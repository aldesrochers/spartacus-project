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
#include <MeshDS_TriangulationRepresentation.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TriangulationRepresentation::MeshDS_TriangulationRepresentation(const Handle(Poly_Triangulation)& theTriangulation)
    : myTriangulation(theTriangulation)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TriangulationRepresentation::~MeshDS_TriangulationRepresentation()
{

}

// ============================================================================
/*!
 *  \brief IsTriangulation()
*/
// ============================================================================
Standard_Boolean MeshDS_TriangulationRepresentation::IsTriangulation() const
{
    return Standard_True;
}


// ============================================================================
/*!
 *  \brief Triangulation()
*/
// ============================================================================
const Handle(Poly_Triangulation)& MeshDS_TriangulationRepresentation::Triangulation() const
{
    return myTriangulation;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TriangulationRepresentation, MeshDS_GridRepresentation);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TriangulationRepresentation, MeshDS_GridRepresentation);

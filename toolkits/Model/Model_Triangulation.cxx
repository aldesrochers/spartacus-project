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
#include <Model_Triangulation.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Triangulation::Model_Triangulation(const Handle(Poly_Triangulation)& theTriangulation)
    : myTriangulation(theTriangulation)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Triangulation::~Model_Triangulation()
{

}

// ============================================================================
/*!
 *  \brief IsTriangulation()
*/
// ============================================================================
Standard_Boolean Model_Triangulation::IsTriangulation() const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Triangulation()
*/
// ============================================================================
const Handle(Poly_Triangulation)& Model_Triangulation::Triangulation() const
{
    return myTriangulation;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Triangulation, Model_Mesh);
IMPLEMENT_STANDARD_RTTIEXT(Model_Triangulation, Model_Mesh);

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
#include <Mesh1d_QuadraticLine.hxx>

// OpenCascade
#include <Standard_RangeError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_QuadraticLine::Mesh1d_QuadraticLine(const Handle(Mesh1d_Vertex)& theVertex1,
                                           const Handle(Mesh1d_Vertex)& theVertex2,
                                           const Handle(Mesh1d_Vertex)& theVertex3)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh1d_QuadraticLine::~Mesh1d_QuadraticLine()
{

}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh1d_QuadraticLine, Mesh1d_Cell)
IMPLEMENT_STANDARD_RTTIEXT(Mesh1d_QuadraticLine, Mesh1d_Cell)

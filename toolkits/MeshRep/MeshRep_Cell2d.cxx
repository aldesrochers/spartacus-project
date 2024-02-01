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
#include <MeshRep_Cell2d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshRep_Cell2d::MeshRep_Cell2d(const Handle(Mesh2d_Cell)& theCell2d)
    : myCell2d(theCell2d)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshRep_Cell2d::~MeshRep_Cell2d()
{

}

// ============================================================================
/*!
 *  \brief IsCell2d()
*/
// ============================================================================
Standard_Boolean MeshRep_Cell2d::IsCell2d() const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Cell2d()
*/
// ============================================================================
const Handle(Mesh2d_Cell)& MeshRep_Cell2d::Cell2d() const
{
    return myCell2d;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshRep_Cell2d, MeshRep_Cell);
IMPLEMENT_STANDARD_RTTIEXT(MeshRep_Cell2d, MeshRep_Cell);

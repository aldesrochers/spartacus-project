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
#include <MeshRep_Cell1d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshRep_Cell1d::MeshRep_Cell1d(const Handle(Mesh1d_Cell)& theCell1d)
    : myCell1d(theCell1d)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshRep_Cell1d::~MeshRep_Cell1d()
{

}

// ============================================================================
/*!
 *  \brief IsCell1d()
*/
// ============================================================================
Standard_Boolean MeshRep_Cell1d::IsCell1d() const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Cell1d()
*/
// ============================================================================
const Handle(Mesh1d_Cell)& MeshRep_Cell1d::Cell1d() const
{
    return myCell1d;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshRep_Cell1d, MeshRep_Cell);
IMPLEMENT_STANDARD_RTTIEXT(MeshRep_Cell1d, MeshRep_Cell);

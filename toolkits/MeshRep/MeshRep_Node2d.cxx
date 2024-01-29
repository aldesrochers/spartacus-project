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
#include <MeshRep_Node2d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshRep_Node2d::MeshRep_Node2d(const Handle(Mesh2d_Node)& theNode2d)
    : myNode2d(theNode2d)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshRep_Node2d::~MeshRep_Node2d()
{

}

// ============================================================================
/*!
 *  \brief IsNode2d()
*/
// ============================================================================
Standard_Boolean MeshRep_Node2d::IsNode2d() const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Node2d()
*/
// ============================================================================
const Handle(Mesh2d_Node)& MeshRep_Node2d::Node2d() const
{
    return myNode2d;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshRep_Node2d, MeshRep_Node);
IMPLEMENT_STANDARD_RTTIEXT(MeshRep_Node2d, MeshRep_Node);

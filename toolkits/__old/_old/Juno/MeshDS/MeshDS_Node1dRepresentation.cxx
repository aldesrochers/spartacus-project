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
#include <MeshDS_Node1dRepresentation.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_Node1dRepresentation::MeshDS_Node1dRepresentation(const Handle(Mesh1d_Node)& theNode)
    : myNode(theNode)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_Node1dRepresentation::~MeshDS_Node1dRepresentation()
{

}

// ============================================================================
/*!
 *  \brief IsNode1d()
*/
// ============================================================================
Standard_Boolean MeshDS_Node1dRepresentation::IsNode1d() const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Node1d()
*/
// ============================================================================
const Handle(Mesh1d_Node)& MeshDS_Node1dRepresentation::Node1d() const
{
    return myNode;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_Node1dRepresentation, MeshDS_NodeRepresentation);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_Node1dRepresentation, MeshDS_NodeRepresentation);

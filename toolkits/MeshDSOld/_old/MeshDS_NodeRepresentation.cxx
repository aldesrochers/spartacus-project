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
#include <MeshDS_NodeRepresentation.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_NodeRepresentation::MeshDS_NodeRepresentation()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_NodeRepresentation::~MeshDS_NodeRepresentation()
{

}

// ============================================================================
/*!
 *  \brief IsNode1d()
*/
// ============================================================================
Standard_Boolean MeshDS_NodeRepresentation::IsNode1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsNode2d()
*/
// ============================================================================
Standard_Boolean MeshDS_NodeRepresentation::IsNode2d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsNode3d()
*/
// ============================================================================
Standard_Boolean MeshDS_NodeRepresentation::IsNode3d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Node1d()
*/
// ============================================================================
const mp_Node1d& MeshDS_NodeRepresentation::Node1d() const
{
    throw Standard_DomainError("MeshDS_NodeRepresentation::Node1d()");
}

// ============================================================================
/*!
 *  \brief Node2d()
*/
// ============================================================================
const mp_Node2d& MeshDS_NodeRepresentation::Node2d() const
{
    throw Standard_DomainError("MeshDS_NodeRepresentation::Node2d()");
}

// ============================================================================
/*!
 *  \brief Node3d()
*/
// ============================================================================
const mp_Node& MeshDS_NodeRepresentation::Node3d() const
{
    throw Standard_DomainError("MeshDS_NodeRepresentation::Node3d()");
}





// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_NodeRepresentation, MeshDS_Representation);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_NodeRepresentation, MeshDS_Representation);

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
#include <MeshDS_Object.hxx>
#include <MeshDS_TNode.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TNode::MeshDS_TNode()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TNode::~MeshDS_TNode()
{

}

// ============================================================================
/*!
 *  \brief LinkedCells()
*/
// ============================================================================
const MeshDS_ListOfObject& MeshDS_TNode::LinkedCells() const
{
    return myLinkedCells;
}

// ============================================================================
/*!
 *  \brief LinkedCells()
*/
// ============================================================================
MeshDS_ListOfObject& MeshDS_TNode::LinkedCells()
{
    return myLinkedCells;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TNode, MeshDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TNode, MeshDS_TObject);

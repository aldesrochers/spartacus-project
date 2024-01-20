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
#include <VVM_Cell.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Cell::VVM_Cell()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Cell::VVM_Cell(const Standard_Integer theNbNodes,
                   const Standard_Integer theType)
{
    ResizeNodes(theNbNodes);
    SetType(theType);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Cell::VVM_Cell(const TColStd_Array1OfInteger &theNodeIds,
                   const Standard_Integer theType)
{
    SetNodeIds(theNodeIds);
    SetType(theType);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
VVM_Cell::~VVM_Cell()
{

}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer VVM_Cell::NbNodes() const
{
    return myNodeIds.Size();
}

// ============================================================================
/*!
 *  \brief NodeId()
*/
// ============================================================================
Standard_Integer VVM_Cell::NodeId(const Standard_Integer theIndex) const
{
    return myNodeIds.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief NodeIds()
*/
// ============================================================================
const TColStd_Array1OfInteger& VVM_Cell::NodeIds() const
{
    return myNodeIds;
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void VVM_Cell::ResizeNodes(const Standard_Integer theNbNodes,
                           const Standard_Boolean theCopyOld)
{
    myNodeIds.Resize(1, theNbNodes, theCopyOld);
}

// ============================================================================
/*!
 *  \brief SetNodeId()
*/
// ============================================================================
void VVM_Cell::SetNodeId(const Standard_Integer theIndex,
                         const Standard_Integer theNodeId)
{
    myNodeIds.SetValue(theIndex, theNodeId);
}

// ============================================================================
/*!
 *  \brief SetNodeIds()
*/
// ============================================================================
void VVM_Cell::SetNodeIds(const TColStd_Array1OfInteger &theNodeIds)
{
    myNodeIds = theNodeIds;
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void VVM_Cell::SetType(const Standard_Integer theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
Standard_Integer VVM_Cell::Type() const
{
    return myType;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(VVM_Cell, VVM_Object);
IMPLEMENT_STANDARD_RTTIEXT(VVM_Cell, VVM_Object);

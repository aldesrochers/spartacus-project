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
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Standard_Integer VVM_Cell::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const TColStd_Array1OfInteger& VVM_Cell::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void VVM_Cell::ResizeNodes(const Standard_Integer theNbNodes,
                           const Standard_Boolean theCopyOld)
{
    myNodes.Resize(1, theNbNodes, theCopyOld);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void VVM_Cell::SetNode(const Standard_Integer theIndex,
                       const Standard_Integer theNode)
{
    myNodes.SetValue(theIndex, theNode);
}

// ============================================================================
/*!
 *  \brief SetNodes()
*/
// ============================================================================
void VVM_Cell::SetNodes(const TColStd_Array1OfInteger &theNodes)
{
    myNodes = theNodes;
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

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
#include <MeshDS_TCell.hxx>


// ============================================================================
/*!
 *  \brief Constructor
 *  Creates an invalid cell.
*/
// ============================================================================
MeshDS_TCell::MeshDS_TCell()
    : myType(MeshAbs_Invalid)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TCell::MeshDS_TCell(const MeshAbs_TypeOfCell theType,
                           const Standard_Integer theNbNodes)
    : myType(theType)
{
    myNodes.Resize(1, theNbNodes, Standard_False);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TCell::~MeshDS_TCell()
{

}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer MeshDS_TCell::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const MeshDS_Node& MeshDS_TCell::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void MeshDS_TCell::SetNode(const Standard_Integer theIndex,
                           const MeshDS_Node &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
MeshAbs_TypeOfCell MeshDS_TCell::Type() const
{
    return myType;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TCell, MeshDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TCell, MeshDS_TObject);

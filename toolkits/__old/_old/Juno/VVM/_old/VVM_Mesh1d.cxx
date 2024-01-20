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
#include <VVM_Mesh1d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Mesh1d::VVM_Mesh1d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Mesh1d::VVM_Mesh1d(const Standard_Integer theNbNodes,
                       const Standard_Integer theNbCells,
                       const Standard_Integer theNbNodeGroups,
                       const Standard_Integer theNbCellGroups)
{
    ResizeCellGroups(theNbCellGroups);
    ResizeCells(theNbCells);
    ResizeNodeGroups(theNbNodeGroups);
    ResizeNodes(theNbNodes);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Mesh1d::VVM_Mesh1d(const VVM_Array1OfNode1d &theNodes,
                       const VVM_Array1OfCell &theCells,
                       const VVM_Array1OfGroup &theNodeGroups,
                       const VVM_Array1OfGroup &theCellGroups)
{
    SetCellGroups(theCellGroups);
    SetCells(theCells);
    SetNodeGroups(theNodeGroups);
    SetNodes(theNodes);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
VVM_Mesh1d::~VVM_Mesh1d()
{

}

// ============================================================================
/*!
 *  \brief Dimension()
*/
// ============================================================================
VVM_MeshDimension VVM_Mesh1d::Dimension() const
{
    return VVM_MD_1D;
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer VVM_Mesh1d::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const VVM_Node1d& VVM_Mesh1d::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const VVM_Array1OfNode1d& VVM_Mesh1d::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void VVM_Mesh1d::ResizeNodes(const Standard_Integer theNbNodes,
                             const Standard_Boolean theCopyOld)
{
    myNodes.Resize(1, theNbNodes, theCopyOld);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void VVM_Mesh1d::SetNode(const Standard_Integer theIndex,
                         const VVM_Node1d &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}

// ============================================================================
/*!
 *  \brief SetNodes()
*/
// ============================================================================
void VVM_Mesh1d::SetNodes(const VVM_Array1OfNode1d &theNodes)
{
    myNodes = theNodes;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(VVM_Mesh1d, VVM_BaseMesh);
IMPLEMENT_STANDARD_RTTIEXT(VVM_Mesh1d, VVM_BaseMesh);

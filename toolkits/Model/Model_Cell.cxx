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
#include <Model_Cell.hxx>
#include <Model_MeshNode.hxx>
#include <Model_Mesh.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Cell::Model_Cell()
    : myType(ModelAbs_CELL_Invalid)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Cell::Model_Cell(const ModelAbs_TypeOfCell theType,
                               const Standard_Integer theNbNodes)
    : myType(theType)
{
    myNodes.Resize(1, theNbNodes, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Cell::Model_Cell(const ModelAbs_TypeOfCell theType,
                               const TColStd_Array1OfInteger& theNodes)
    : myNodes(theNodes),
    myType(theType)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Cell::~Model_Cell()
{

}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Model_Cell::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Standard_Integer Model_Cell::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Model_Cell::ResizeNodes(const Standard_Integer theNbNodes,
                             const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Model_Cell::SetNode(const Standard_Integer theIndex,
                         const Standard_Integer theNodeId)
{
    myNodes.SetValue(theIndex, theNodeId);
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void Model_Cell::SetType(const ModelAbs_TypeOfCell theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
ModelAbs_TypeOfCell Model_Cell::Type() const
{
    return myType;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Cell, Model_Object);
IMPLEMENT_STANDARD_RTTIEXT(Model_Cell, Model_Object);

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
#include <Model_MeshCell.hxx>
#include <Model_MeshNode.hxx>
#include <Model_Mesh.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_MeshCell::Model_MeshCell()
    : myType(ModelAbs_CELL_Invalid)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_MeshCell::Model_MeshCell(const ModelAbs_TypeOfCell theType,
                               const Standard_Integer theNbNodes)
    : myType(theType)
{
    myConnectivity.Resize(1, theNbNodes, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_MeshCell::Model_MeshCell(const ModelAbs_TypeOfCell theType,
                               const TColStd_Array1OfInteger& theConnectivity)
    : myConnectivity(theConnectivity),
    myType(theType)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_MeshCell::~Model_MeshCell()
{

}

// ============================================================================
/*!
 *  \brief Connectivity()
*/
// ============================================================================
const TColStd_Array1OfInteger& Model_MeshCell::Connectivity() const
{
    return myConnectivity;
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Model_MeshCell::NbNodes() const
{
    return myConnectivity.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Handle(Model_MeshNode) Model_MeshCell::Node(const Standard_Integer theIndex) const
{
    return myMesh->Node(myConnectivity.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief NodeId()
*/
// ============================================================================
Standard_Integer Model_MeshCell::NodeId(const Standard_Integer theIndex) const
{
    return myConnectivity.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief SetConnectivity()
*/
// ============================================================================
void Model_MeshCell::SetConnectivity(const TColStd_Array1OfInteger &theConnectivity)
{
    myConnectivity = theConnectivity;
}

// ============================================================================
/*!
 *  \brief SetNodeId()
*/
// ============================================================================
void Model_MeshCell::SetNodeId(const Standard_Integer theIndex,
                               const Standard_Integer theNodeId)
{
    myConnectivity.SetValue(theIndex, theNodeId);
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void Model_MeshCell::SetType(const ModelAbs_TypeOfCell theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
ModelAbs_TypeOfCell Model_MeshCell::Type() const
{
    return myType;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_MeshCell, Model_MeshComponent);
IMPLEMENT_STANDARD_RTTIEXT(Model_MeshCell, Model_MeshComponent);

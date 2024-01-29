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
#include <Model_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Node::Model_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Node::Model_Node(const Standard_Integer theMeshNode,
                       const TColStd_ListOfInteger &theDegreesOfFreedom)
    : myMeshNode(theMeshNode),
    myDegreesOfFreedom(theDegreesOfFreedom)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Node::~Model_Node()
{

}

// ============================================================================
/*!
 *  \brief DegreesOfFreedom()
 *  Get the degrees of freedom associated to node.
*/
// ============================================================================
const TColStd_ListOfInteger& Model_Node::DegreesOfFreedom() const
{
    return myDegreesOfFreedom;
}

// ============================================================================
/*!
 *  \brief DegreesOfFreedom()
 *  Get the degrees of freedom associated to node.
*/
// ============================================================================
TColStd_ListOfInteger& Model_Node::DegreesOfFreedom()
{
    return myDegreesOfFreedom;
}

// ============================================================================
/*!
 *  \brief NbDegreesOfFreedom()
*/
// ============================================================================
Standard_Integer Model_Node::NbDegreesOfFreedom() const
{
    return myDegreesOfFreedom.Size();
}

// ============================================================================
/*!
 *  \brief MeshNode()
 *  Get the id of the node in mesh.
*/
// ============================================================================
Standard_Integer Model_Node::MeshNode() const
{
    return myMeshNode;
}

// ============================================================================
/*!
 *  \brief SetMeshNode()
 *  Set the id of the node in mesh.
*/
// ============================================================================
void Model_Node::SetMeshNode(const Standard_Integer theMeshNode)
{
    myMeshNode = theMeshNode;
}



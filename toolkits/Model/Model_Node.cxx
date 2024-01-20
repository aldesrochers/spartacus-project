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
                       const Standard_Integer theNbDegreesOfFreedom)
    : myMeshNode(theMeshNode)
{
    myDegreesOfFreedom.Resize(1, theNbDegreesOfFreedom, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Node::Model_Node(const Standard_Integer theMeshNode,
                       const Model_Array1OfTypeOfDOF &theDegreesOfFreedom)
    : myMeshNode(theMeshNode), myDegreesOfFreedom(theDegreesOfFreedom)
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
 *  \brief DegreeOfFreedom()
*/
// ============================================================================
Model_TypeOfDOF Model_Node::DegreeOfFreedom(const Standard_Integer theIndex) const
{
    return (Model_TypeOfDOF) myDegreesOfFreedom.Size();
}

// ============================================================================
/*!
 *  \brief DegreesOfFreedom()
 *  Get the degrees of freedom associated to node.
*/
// ============================================================================
const Model_Array1OfTypeOfDOF& Model_Node::DegreesOfFreedom() const
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
 *  \brief ResizeDegreesOfFreedom()
*/
// ============================================================================
void Model_Node::ResizeDegreesOfFreedom(const Standard_Integer theNbDegreesOfFreedom,
                                        const Standard_Boolean toCopyData)
{
    myDegreesOfFreedom.Resize(1, theNbDegreesOfFreedom, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetDegreeOfFreedom()
*/
// ============================================================================
void Model_Node::SetDegreeOfFreedom(const Standard_Integer theIndex,
                                    const Model_TypeOfDOF theDegreeOfFreedom)
{
    myDegreesOfFreedom.SetValue(theIndex, theDegreeOfFreedom);
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



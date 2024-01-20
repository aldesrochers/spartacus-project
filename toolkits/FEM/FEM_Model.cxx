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
#include <FEM_Model.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEM_Model::FEM_Model()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEM_Model::FEM_Model(const Standard_Integer theNbNodes,
                     const Standard_Integer theNbElements)
{
    myNodes.Resize(1, theNbNodes, Standard_False);
    myElements.Resize(1, theNbElements, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEM_Model::FEM_Model(const FEM_Array1OfNode &theNodes,
                     const FEM_Array1OfElement &theElements)
    : myNodes(theNodes),
    myElements(theElements)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FEM_Model::~FEM_Model()
{

}

// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
const FEM_Element& FEM_Model::Element(const Standard_Integer theIndex) const
{
    return myElements.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief NbElements()
*/
// ============================================================================
Standard_Integer FEM_Model::NbElements() const
{
    return myElements.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer FEM_Model::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const FEM_Node& FEM_Model::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief ResizeElements()
*/
// ============================================================================
void FEM_Model::ResizeElements(const Standard_Integer theNbElements,
                            const Standard_Boolean toCopyOld)
{
    myElements.Resize(1, theNbElements, toCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void FEM_Model::ResizeNodes(const Standard_Integer theNbNodes,
                            const Standard_Boolean toCopyOld)
{
    myNodes.Resize(1, theNbNodes, toCopyOld);
}

// ============================================================================
/*!
 *  \brief SetElement()
*/
// ============================================================================
void FEM_Model::SetElement(const Standard_Integer theIndex,
                           const FEM_Element &theElement)
{
    myElements.SetValue(theIndex, theElement);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void FEM_Model::SetNode(const Standard_Integer theIndex,
                        const FEM_Node &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FEM_Model, Standard_Transient)
IMPLEMENT_STANDARD_RTTIEXT(FEM_Model, Standard_Transient)

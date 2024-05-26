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
#include <ModelDS.hxx>
#include <ModelDS_TDomain.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TDomain::ModelDS_TDomain()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TDomain::~ModelDS_TDomain()
{

}

// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
const ModelDS_Element& ModelDS_TDomain::Element(const Standard_Integer theIndex) const
{
    return ModelDS::Element(myElements.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief NbElements()
*/
// ============================================================================
Standard_Integer ModelDS_TDomain::NbElements() const
{
    return myElements.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer ModelDS_TDomain::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const ModelDS_Node& ModelDS_TDomain::Node(const Standard_Integer theIndex) const
{
    return ModelDS::Node(myNodes.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TDomain::ObjectType() const
{
    return ModelAbs_OBJ_Domain;
}

// ============================================================================
/*!
 *  \brief ResizeElements()
*/
// ============================================================================
void ModelDS_TDomain::ResizeElements(const Standard_Integer theNbElements,
                                     const Standard_Boolean toCopyData)
{
    myElements.Resize(1, theNbElements, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void ModelDS_TDomain::ResizeNodes(const Standard_Integer theNbNodes,
                                  const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetElement()
*/
// ============================================================================
void ModelDS_TDomain::SetElement(const Standard_Integer theIndex,
                                 const ModelDS_Element &theElement)
{
    myElements.SetValue(theIndex, theElement);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void ModelDS_TDomain::SetNode(const Standard_Integer theIndex,
                              const ModelDS_Node &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TDomain, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TDomain, ModelDS_TObject)

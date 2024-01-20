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
#include <ModelDS_TElement.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TElement::ModelDS_TElement()
    : myElementType(ModelAbs_ELE_Null)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TElement::~ModelDS_TElement()
{

}

// ============================================================================
/*!
 *  \brief ElementType()
*/
// ============================================================================
ModelAbs_TypeOfElement ModelDS_TElement::ElementType() const
{
    return myElementType;
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
ModelDS_Array1OfObject& ModelDS_TElement::Nodes()
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TElement::ObjectType() const
{
    return ModelAbs_OBJ_Element;
}

// ============================================================================
/*!
 *  \brief SetElementType()
*/
// ============================================================================
void ModelDS_TElement::SetElementType(const ModelAbs_TypeOfElement theElementType)
{
    myElementType = theElementType;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TElement, ModelDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TElement, ModelDS_TObject);

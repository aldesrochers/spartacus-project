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
 *  \brief DOFs()
*/
// ============================================================================
const ModelDS_SequenceOfObject& ModelDS_TElement::DOFs() const
{
    return myDOFs;
}

// ============================================================================
/*!
 *  \brief DOFs()
*/
// ============================================================================
ModelDS_SequenceOfObject& ModelDS_TElement::DOFs()
{
    return myDOFs;
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
 *  \brief Representation()
*/
// ============================================================================
const Handle(ModelRep_Element)& ModelDS_TElement::Representation() const
{
    return myRepresentation;
}

// ============================================================================
/*!
 *  \brief SetRepresentation()
*/
// ============================================================================
void ModelDS_TElement::SetRepresentation(const Handle(ModelRep_Element) &theRepresentation)
{
    myRepresentation = theRepresentation;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TElement, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TElement, ModelDS_TObject)

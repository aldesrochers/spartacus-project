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
 *  \brief Cell()
*/
// ============================================================================
const MeshDS_Cell& ModelDS_TElement::Cell() const
{
    return myCell;
}

// ============================================================================
/*!
 *  \brief Modelizations()
*/
// ============================================================================
const ModelDS_ListOfObject& ModelDS_TElement::Modelizations() const
{
    return myModelizations;
}

// ============================================================================
/*!
 *  \brief Modelizations()
*/
// ============================================================================
ModelDS_ListOfObject& ModelDS_TElement::Modelizations()
{
    return myModelizations;
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const ModelDS_SequenceOfObject& ModelDS_TElement::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
ModelDS_SequenceOfObject& ModelDS_TElement::Nodes()
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
 *  \brief SetCell()
*/
// ============================================================================
void ModelDS_TElement::SetCell(const MeshDS_Cell &theCell)
{
    myCell = theCell;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TElement, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TElement, ModelDS_TObject)

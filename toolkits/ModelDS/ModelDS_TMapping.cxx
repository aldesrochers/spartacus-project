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
#include <ModelDS_TMapping.hxx>
#include <ModelDS_SequenceOfObject.hxx>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TMapping::ModelDS_TMapping()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TMapping::~ModelDS_TMapping()
{

}

// ============================================================================
/*!
 *  \brief Equations()
*/
// ============================================================================
const ModelDS_SequenceOfObject& ModelDS_TMapping::Equations() const
{
    return myEquations;
}

// ============================================================================
/*!
 *  \brief Equations()
*/
// ============================================================================
ModelDS_SequenceOfObject& ModelDS_TMapping::Equations()
{
    return myEquations;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TMapping::ObjectType() const
{
    return ModelAbs_OBJ_Mapping;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TMapping, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TMapping, ModelDS_TObject)

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
#include <ModelDS_TModelization.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TModelization::ModelDS_TModelization()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TModelization::~ModelDS_TModelization()
{

}

// ============================================================================
/*!
 *  \brief DOFs()
*/
// ============================================================================
const ModelDS_SequenceOfObject& ModelDS_TModelization::DOFs() const
{
    return myDOFs;
}

// ============================================================================
/*!
 *  \brief DOFs()
*/
// ============================================================================
ModelDS_SequenceOfObject& ModelDS_TModelization::DOFs()
{
    return myDOFs;
}

// ============================================================================
/*!
 *  \brief Model()
*/
// ============================================================================
const Handle(Model_Element)& ModelDS_TModelization::Model() const
{
    return myModel;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TModelization::ObjectType() const
{
    return ModelAbs_OBJ_Modelization;
}

// ============================================================================
/*!
 *  \brief SetModel()
*/
// ============================================================================
void ModelDS_TModelization::SetModel(const Handle(Model_Element) &theModel)
{
    myModel = theModel;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TModelization, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TModelization, ModelDS_TObject)

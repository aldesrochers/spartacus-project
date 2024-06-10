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
#include <ModelDS_TBoundary.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TBoundary::ModelDS_TBoundary()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TBoundary::~ModelDS_TBoundary()
{

}

// ============================================================================
/*!
 *  \brief DOFs()
*/
// ============================================================================
const ModelDS_ListOfObject& ModelDS_TBoundary::DOFs() const
{
    return myDOFs;
}

// ============================================================================
/*!
 *  \brief DOFs()
*/
// ============================================================================
ModelDS_ListOfObject& ModelDS_TBoundary::DOFs()
{
    return myDOFs;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TBoundary::ObjectType() const
{
    return ModelAbs_OBJ_Boundary;
}

// ============================================================================
/*!
 *  \brief SetValue()
*/
// ============================================================================
void ModelDS_TBoundary::SetValue(const Standard_Real theValue)
{
    myValue = theValue;
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
Standard_Real ModelDS_TBoundary::Value() const
{
    return myValue;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TBoundary, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TBoundary, ModelDS_TObject)

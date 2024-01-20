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
#include <ModelDS_TDegreeOfFreedom.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TDegreeOfFreedom::ModelDS_TDegreeOfFreedom()
    : myDOFType(ModelAbs_DOF_Null),
      myIsFree(Standard_True)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TDegreeOfFreedom::~ModelDS_TDegreeOfFreedom()
{

}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TDegreeOfFreedom::ObjectType() const
{
    return ModelAbs_OBJ_DegreeOfFreedom;
}

// ============================================================================
/*!
 *  \brief DOFType()
*/
// ============================================================================
ModelAbs_TypeOfDOF ModelDS_TDegreeOfFreedom::DOFType() const
{
    return myDOFType;
}

// ============================================================================
/*!
 *  \brief IsFixed()
 *  Check if DOF value is fixed.
*/
// ============================================================================
Standard_Boolean ModelDS_TDegreeOfFreedom::IsFixed() const
{
    return !myIsFree;
}

// ============================================================================
/*!
 *  \brief IsFree()
 *  Check if DOF value is free.
*/
// ============================================================================
Standard_Boolean ModelDS_TDegreeOfFreedom::IsFree() const
{
    return myIsFree;
}

// ============================================================================
/*!
 *  \brief SetDOFType()
*/
// ============================================================================
void ModelDS_TDegreeOfFreedom::SetDOFType(const ModelAbs_TypeOfDOF theType)
{
    myDOFType = theType;
}

// ============================================================================
/*!
 *  \brief SetFixed()
*/
// ============================================================================
void ModelDS_TDegreeOfFreedom::SetFixed()
{
    myIsFree = Standard_False;
}

// ============================================================================
/*!
 *  \brief SetFree()
*/
// ============================================================================
void ModelDS_TDegreeOfFreedom::SetFree()
{
    myIsFree = Standard_True;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TDegreeOfFreedom, ModelDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TDegreeOfFreedom, ModelDS_TObject);

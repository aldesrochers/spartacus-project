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
#include <ModelDS_TMaterial.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TMaterial::ModelDS_TMaterial()
    : myMaterialType(ModelAbs_Mat_Null)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TMaterial::~ModelDS_TMaterial()
{

}

// ============================================================================
/*!
 *  \brief AttributeValue()
*/
// ============================================================================
Standard_Real ModelDS_TMaterial::AttributeValue(const ModelAbs_TypeOfMaterialAttribute theAttribute,
                                                const Standard_Real theDefaultValue) const
{
    if(myAttributes.IsBound(theAttribute))
        return myAttributes(theAttribute);
    return theDefaultValue;
}

// ============================================================================
/*!
 *  \brief HasAttribute()
*/
// ============================================================================
Standard_Boolean ModelDS_TMaterial::HasAttribute(const ModelAbs_TypeOfMaterialAttribute theType) const
{
    return myAttributes.IsBound(theType);
}

// ============================================================================
/*!
 *  \brief MaterialType()
*/
// ============================================================================
ModelAbs_TypeOfMaterial ModelDS_TMaterial::MaterialType() const
{
    return myMaterialType;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TMaterial::ObjectType() const
{
    return ModelAbs_OBJ_Material;
}

// ============================================================================
/*!
 *  \brief SetAttributeValue()
*/
// ============================================================================
void ModelDS_TMaterial::SetAttributeValue(const ModelAbs_TypeOfMaterialAttribute theAttribute,
                                          const Standard_Real theValue)
{
    if(myAttributes.IsBound(theAttribute))
        myAttributes.UnBind(theAttribute);
    myAttributes.Bind(theAttribute, theValue);
}

// ============================================================================
/*!
 *  \brief SetMaterialType()
*/
// ============================================================================
void ModelDS_TMaterial::SetMaterialType(const ModelAbs_TypeOfMaterial theMaterialType)
{
    myMaterialType = theMaterialType;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TMaterial, ModelDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TMaterial, ModelDS_TObject);

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


#ifndef __ModelDS_TMaterial_hxx__
#define __ModelDS_TMaterial_hxx__

// Spartacus
#include <ModelAbs_TypeOfMaterial.hxx>
#include <ModelAbs_TypeOfMaterialAttribute.hxx>
#include <ModelDS_TObject.hxx>

// OpenCascade
#include <TColStd_DataMapOfIntegerReal.hxx>

// Forward declarations
class ModelDS_TMaterial;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TMaterial, ModelDS_TObject);


// ============================================================================
/*!
 *  \brief ModelDS_TMaterial
*/
// ============================================================================
class ModelDS_TMaterial : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TMaterial();
    // destructors
    Standard_EXPORT ~ModelDS_TMaterial();

public:

    Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real           AttributeValue(const ModelAbs_TypeOfMaterialAttribute theAttribute,
                                                           const Standard_Real theDefaultValue = 0.) const;
    Standard_EXPORT Standard_Boolean        HasAttribute(const ModelAbs_TypeOfMaterialAttribute theType) const;
    Standard_EXPORT ModelAbs_TypeOfMaterial MaterialType() const;
    Standard_EXPORT void                    SetAttributeValue(const ModelAbs_TypeOfMaterialAttribute theAttribute,
                                                              const Standard_Real theValue);
    Standard_EXPORT void                    SetMaterialType(const ModelAbs_TypeOfMaterial theMaterialType);


protected:

    TColStd_DataMapOfIntegerReal    myAttributes;
    ModelAbs_TypeOfMaterial         myMaterialType;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TMaterial, ModelDS_TObject);

};

#endif // __ModelDS_TMaterial_hxx__

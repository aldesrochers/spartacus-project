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


#ifndef __Model_Material_hxx__
#define __Model_Material_hxx__

// Spartacus
#include <Model_Attribute.hxx>
#include <Model_Object.hxx>
#include <ModelAbs_Material.hxx>
#include <ModelAbs_MaterialAttribute.hxx>

// OpenCascade
#include <TColStd_DataMapOfIntegerTransient.hxx>

// Forward declarations
class Model_Material;

// Handles
DEFINE_STANDARD_HANDLE(Model_Material, Model_Object)


// ============================================================================
/*!
 *  \brief Model_Material
*/
// ============================================================================
class Model_Material : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_Material();
    Standard_EXPORT Model_Material(const ModelAbs_Material theType);
    // destructors
    Standard_EXPORT ~Model_Material();

public:

    Standard_EXPORT Handle(Model_Attribute) Attribute(const ModelAbs_MaterialAttribute theType) const;
    Standard_EXPORT Standard_Boolean        IsAttribute(const ModelAbs_MaterialAttribute theType) const;
    Standard_EXPORT Standard_Integer        NbAttributes() const;
    Standard_EXPORT void                    SetAttribute(const ModelAbs_MaterialAttribute theType,
                                                         const Handle(Model_Attribute)& theAttribute);
    Standard_EXPORT void                    SetType(const ModelAbs_Material theType);
    Standard_EXPORT ModelAbs_Material       Type() const;

private:

    TColStd_DataMapOfIntegerTransient   myAttributes;
    ModelAbs_Material                   myType;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Material, Model_Object)

};


#endif // __Model_Material_hxx__

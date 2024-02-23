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


#ifndef __Model_Element_hxx__
#define __Model_Element_hxx__

// Spartacus
#include <Model_Attribute.hxx>
#include <Model_Object.hxx>
#include <ModelAbs_Element.hxx>
#include <ModelAbs_ElementAttribute.hxx>

// OpenCascade
#include <TColStd_DataMapOfIntegerTransient.hxx>

// Forward declarations
class Model_Element;

// Handles
DEFINE_STANDARD_HANDLE(Model_Element, Model_Object)


// ============================================================================
/*!
 *  \brief Model_Element
*/
// ============================================================================
class Model_Element : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_Element();
    Standard_EXPORT Model_Element(const ModelAbs_Element theType);
    // destructors
    Standard_EXPORT ~Model_Element();

public:

    Standard_EXPORT Handle(Model_Attribute) Attribute(const ModelAbs_ElementAttribute theType) const;
    Standard_EXPORT Standard_Boolean        IsAttribute(const ModelAbs_ElementAttribute theType) const;
    Standard_EXPORT Standard_Integer        NbAttributes() const;
    Standard_EXPORT void                    SetAttribute(const ModelAbs_ElementAttribute theType,
                                                         const Handle(Model_Attribute)& theAttribute);
    Standard_EXPORT void                    SetType(const ModelAbs_Element theType);
    Standard_EXPORT ModelAbs_Element        Type() const;

private:

    TColStd_DataMapOfIntegerTransient   myAttributes;
    ModelAbs_Element                   myType;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Element, Model_Object)

};


#endif // __Model_Element_hxx__

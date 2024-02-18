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


#ifndef __Model_Section_hxx__
#define __Model_Section_hxx__

// Spartacus
#include <Model_Object.hxx>
#include <ModelAbs_Section.hxx>
#include <ModelAbs_SectionAttribute.hxx>

// OpenCascade
#include <TColStd_DataMapOfIntegerReal.hxx>

// Forward declarations
class Model_Section;

// Handles
DEFINE_STANDARD_HANDLE(Model_Section, Model_Object);


// ============================================================================
/*!
 *  \brief Model_Section
*/
// ============================================================================
class Model_Section : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_Section();
    Standard_EXPORT Model_Section(const ModelAbs_Section theType);
    // destructors
    Standard_EXPORT ~Model_Section();

public:

    Standard_EXPORT Standard_Real       Attribute(const ModelAbs_SectionAttribute theAttribute) const;
    Standard_EXPORT Standard_Integer    NbAttributes() const;
    Standard_EXPORT void                SetAttribute(const ModelAbs_SectionAttribute theAttribute,
                                                     const Standard_Real theValue);
    Standard_EXPORT void                SetType(const ModelAbs_Section theType);
    Standard_EXPORT ModelAbs_Section    Type() const;

private:

    TColStd_DataMapOfIntegerReal    myAttributes;
    ModelAbs_Section                myType;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Section, Model_Object);

};


#endif // __Model_Section_hxx__

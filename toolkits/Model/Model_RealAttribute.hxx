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


#ifndef __Model_RealAttribute_hxx__
#define __Model_RealAttribute_hxx__

// Spartacus
#include <Model_Attribute.hxx>

// Forward declarations
class Model_RealAttribute;

// Handles
DEFINE_STANDARD_HANDLE(Model_RealAttribute, Model_Attribute)


// ============================================================================
/*!
 *  \brief Model_RealAttribute
*/
// ============================================================================
class Model_RealAttribute : public Model_Attribute
{

public:
    // constructors
    Standard_EXPORT Model_RealAttribute();
    Standard_EXPORT Model_RealAttribute(const Standard_Real theValue);
    // destructors
    Standard_EXPORT ~Model_RealAttribute();

public:

    Standard_EXPORT void            SetValue(const Standard_Real theValue);
    Standard_EXPORT Standard_Real   Value() const;

private:

    Standard_Real       myValue;

public:

    DEFINE_STANDARD_RTTIEXT(Model_RealAttribute, Model_Attribute)

};


#endif // __Model_RealAttribute_hxx__

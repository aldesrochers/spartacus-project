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


#ifndef __FEP_BooleanAttribute_hxx__
#define __FEP_BooleanAttribute_hxx__

// Spartacus
#include <FEP_Attribute.hxx>

// Forward declarations
class FEP_BooleanAttribute;

// Handles
DEFINE_STANDARD_HANDLE(FEP_BooleanAttribute, FEP_Attribute)


// ============================================================================
/*!
 *  \brief FEP_BooleanAttribute
*/
// ============================================================================
class FEP_BooleanAttribute : public FEP_Attribute
{

public:
    // constructors
    Standard_EXPORT FEP_BooleanAttribute();
    Standard_EXPORT FEP_BooleanAttribute(const Standard_Boolean theValue);
    // destructors
    Standard_EXPORT ~FEP_BooleanAttribute();

public:

    Standard_EXPORT void                SetValue(const Standard_Boolean theValue);
    Standard_EXPORT Standard_Boolean    Value() const;

private:

    Standard_Boolean        myValue;

public:

    DEFINE_STANDARD_RTTIEXT(FEP_BooleanAttribute, FEP_Attribute)

};


#endif // __FEP_BooleanAttribute_hxx__
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
#include <Model_Element.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Element::Model_Element()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Element::Model_Element(const ModelAbs_Element theType)
    : myType(theType)
{

}


// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Element::~Model_Element()
{

}

// ============================================================================
/*!
 *  \brief Attribute()
*/
// ============================================================================
Handle(Model_Attribute) Model_Element::Attribute(const ModelAbs_ElementAttribute theType) const
{
    return Handle(Model_Attribute)::DownCast(myAttributes.Find(theType));
}

// ============================================================================
/*!
 *  \brief IsAttribute()
*/
// ============================================================================
Standard_Boolean Model_Element::IsAttribute(const ModelAbs_ElementAttribute theType) const
{
    return myAttributes.IsBound(theType);
}

// ============================================================================
/*!
 *  \brief NbAttributes()
*/
// ============================================================================
Standard_Integer Model_Element::NbAttributes() const
{
    return myAttributes.Size();
}

// ============================================================================
/*!
 *  \brief SetAttribute()
*/
// ============================================================================
void Model_Element::SetAttribute(const ModelAbs_ElementAttribute theType,
                                  const Handle(Model_Attribute) &theAttribute)
{
    myAttributes.Bind(theType, theAttribute);
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void Model_Element::SetType(const ModelAbs_Element theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
ModelAbs_Element Model_Element::Type() const
{
    return myType;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Element, Model_Object)
IMPLEMENT_STANDARD_RTTIEXT(Model_Element, Model_Object)

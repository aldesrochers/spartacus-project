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
#include <EleProp_TrussElement.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
EleProp_TrussElement::EleProp_TrussElement()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
EleProp_TrussElement::EleProp_TrussElement(const EleProp_TypeOfSection theType,
                                           const TColStd_DataMapOfIntegerReal &theProperties)
    : mySection(theType),
    myProperties(theProperties)
{

}
// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
EleProp_TrussElement::~EleProp_TrussElement()
{

}

// ============================================================================
/*!
 *  \brief HasProperty()
*/
// ============================================================================
Standard_Boolean EleProp_TrussElement::HasProperty(const EleProp_TypeOfProperty theType) const
{
    return myProperties.IsBound(theType);
}

// ============================================================================
/*!
 *  \brief NbProperties()
*/
// ============================================================================
Standard_Integer EleProp_TrussElement::NbProperties() const
{
    return myProperties.Size();
}

// ============================================================================
/*!
 *  \brief Property()
*/
// ============================================================================
Standard_Real EleProp_TrussElement::Property(const EleProp_TypeOfProperty theType) const
{
    return myProperties.Find(theType);
}

// ============================================================================
/*!
 *  \brief Section()
*/
// ============================================================================
EleProp_TypeOfSection EleProp_TrussElement::Section() const
{
    return mySection;
}

// ============================================================================
/*!
 *  \brief SetProperty()
*/
// ============================================================================
void EleProp_TrussElement::SetProperty(const EleProp_TypeOfProperty theType,
                                       const Standard_Real theValue)
{
    myProperties.Bind(theType, theValue);
}

// ============================================================================
/*!
 *  \brief SetSection()
*/
// ============================================================================
void EleProp_TrussElement::SetSection(const EleProp_TypeOfSection theType)
{
    mySection = theType;
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(EleProp_TrussElement, EleProp_Element);
IMPLEMENT_STANDARD_RTTIEXT(EleProp_TrussElement, EleProp_Element);

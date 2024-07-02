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
#include <Mech1dAdaptor_Element.hxx>
#include <Mech1d_ElasticTruss.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mech1dAdaptor_Element::Mech1dAdaptor_Element()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mech1dAdaptor_Element::Mech1dAdaptor_Element(const Handle(Mech1d_Model)& theElement)
    : myElement(theElement)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mech1dAdaptor_Element::~Mech1dAdaptor_Element()
{

}

// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
const Handle(Mech1d_Model)& Mech1dAdaptor_Element::Element() const
{
    return myElement;
}

// ============================================================================
/*!
 *  \brief ElementType()
*/
// ============================================================================
MechAbs_TypeOfElement Mech1dAdaptor_Element::ElementType() const
{
    Handle(Standard_Type) aType = myElement->DynamicType();
    if(aType == STANDARD_TYPE(Mech1d_ElasticTruss)) {
        return MechAbs_ELE_ElasticTruss;
    }
    return MechAbs_ELE_Invalid;
}

// ============================================================================
/*!
 *  \brief SetElement()
*/
// ============================================================================
void Mech1dAdaptor_Element::SetElement(const Handle(Mech1d_Model) &theElement)
{
    myElement = theElement;
}



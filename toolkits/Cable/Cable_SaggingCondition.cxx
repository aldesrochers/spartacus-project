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
#include <Cable_SaggingCondition.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cable_SaggingCondition::Cable_SaggingCondition()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cable_SaggingCondition::Cable_SaggingCondition(const Cable_TypeOfSaggingCondition theType, const Standard_Real theLimit)
    : myLimit(theLimit),
    myType(theType)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Cable_SaggingCondition::~Cable_SaggingCondition()
{

}

// ============================================================================
/*!
 *  \brief Limit()
*/
// ============================================================================
Standard_Real Cable_SaggingCondition::Limit() const
{
    return myLimit;
}

// ============================================================================
/*!
 *  \brief SetLimit()
*/
// ============================================================================
void Cable_SaggingCondition::SetLimit(const Standard_Real theLimit)
{
    myLimit = theLimit;
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void Cable_SaggingCondition::SetType(const Cable_TypeOfSaggingCondition theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
Cable_TypeOfSaggingCondition Cable_SaggingCondition::Type() const
{
    return myType;
}

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
#include <FE1d_TrussElement.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_TrussElement::FE1d_TrussElement(const Standard_Real theX1,
                                     const Standard_Real theX2)
    : myX1(theX1),
      myX2(theX2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE1d_TrussElement::~FE1d_TrussElement()
{

}

// ============================================================================
/*!
 *  \brief InitialLength()
*/
// ============================================================================
Standard_Real FE1d_TrussElement::InitialLength() const
{
    return Abs(myX2 - myX1);
}

// ============================================================================
/*!
 *  \brief X1()
*/
// ============================================================================
Standard_Real FE1d_TrussElement::X1() const
{
    return myX1;
}

// ============================================================================
/*!
 *  \brief X2()
*/
// ============================================================================
Standard_Real FE1d_TrussElement::X2() const
{
    return myX2;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE1d_TrussElement, FE1d_Element);
IMPLEMENT_STANDARD_RTTIEXT(FE1d_TrussElement, FE1d_Element);

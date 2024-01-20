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
#include <mp_LinearLine2N.hxx>

// ***
// Cell description
// ***
//
// Line defined by two end nodes.
//
// N1      N2
// + ----- +



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_LinearLine2N::mp_LinearLine2N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_LinearLine2N::mp_LinearLine2N(const Standard_Integer theNode1,
                                 const Standard_Integer theNode2)
    : myNode1(theNode1),
      myNode2(theNode2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_LinearLine2N::~mp_LinearLine2N()
{

}

// ============================================================================
/*!
 *  \brief Get()
*/
// ============================================================================
void mp_LinearLine2N::Get(Standard_Integer &theNode1,
                          Standard_Integer &theNode2) const
{
    theNode1 = myNode1;
    theNode2 = myNode2;
}

// ============================================================================
/*!
 *  \brief Set()
*/
// ============================================================================
void mp_LinearLine2N::Set(const Standard_Integer theNode1,
                          const Standard_Integer theNode2)
{
    myNode1 = theNode1;
    myNode2 = theNode2;
}


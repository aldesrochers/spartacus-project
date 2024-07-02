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
#include <CableLib_Function.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
CableLib_Function::CableLib_Function(const Standard_Real A,
                                     const Standard_Real B,
                                     const Standard_Real W)
    : myA(A), myB(B), myW(W)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
CableLib_Function::~CableLib_Function()
{

}

// ============================================================================
/*!
 *  \brief A()
*/
// ============================================================================
Standard_Real CableLib_Function::A() const
{
    return myA;
}

// ============================================================================
/*!
 *  \brief B()
*/
// ============================================================================
Standard_Real CableLib_Function::B() const
{
    return myB;
}

// ============================================================================
/*!
 *  \brief W()
*/
// ============================================================================
Standard_Real CableLib_Function::W() const
{
    return myW;
}

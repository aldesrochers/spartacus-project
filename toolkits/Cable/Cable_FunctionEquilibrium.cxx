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
#include <Cable_FunctionEquilibrium.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cable_FunctionEquilibrium::Cable_FunctionEquilibrium(const Handle(UXSM_Section)& theSection,
                                                     const Standard_Real A,
                                                     const Standard_Real B,
                                                     const Standard_Real S0)
    : myA(A), myB(B), myS0(S0), mySection(theSection)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Cable_FunctionEquilibrium::~Cable_FunctionEquilibrium()
{

}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
//Standard_Integer Cable_FunctionEquilibrium::NbEquations() const
//{
//    return 2;
//}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
//Standard_Integer Cable_FunctionEquilibrium::NbVariables() const
//{
//    return 2;
//}

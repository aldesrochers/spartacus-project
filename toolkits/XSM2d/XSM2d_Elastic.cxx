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
#include <XSM2d_Elastic.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XSM2d_Elastic::XSM2d_Elastic()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XSM2d_Elastic::XSM2d_Elastic(const Standard_Real E,
                             const Standard_Real A,
                             const Standard_Real I)
    : myA(A), myE(E), myI(I)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
XSM2d_Elastic::~XSM2d_Elastic()
{

}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(XSM2d_Elastic, XSM2d_Section);
IMPLEMENT_STANDARD_RTTIEXT(XSM2d_Elastic, XSM2d_Section);

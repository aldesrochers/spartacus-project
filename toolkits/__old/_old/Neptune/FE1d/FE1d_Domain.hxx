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


#ifndef __FE1d_Domain_hxx__
#define __FE1d_Domain_hxx__

// Spartacus
#include <FE1d_Object.hxx>

// Forward declarations
class FE1d_Domain;

// Handles
DEFINE_STANDARD_HANDLE(FE1d_Domain, FE1d_Object);


// ============================================================================
/*!
 *  \brief FE1d_Domain
 *  Class implementation of a 1d finite element domain.
*/
// ============================================================================
class FE1d_Domain : public FE1d_Object
{

public:
    // constructors
    Standard_EXPORT FE1d_Domain();
    // destructors
    Standard_EXPORT ~FE1d_Domain();

public:

    DEFINE_STANDARD_RTTIEXT(FE1d_Domain, FE1d_Object);

};

#endif // __FE1d_Domain_hxx__

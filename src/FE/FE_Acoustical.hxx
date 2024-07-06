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


#ifndef __FE_Acoustical_hxx__
#define __FE_Acoustical_hxx__


// Spartacus
#include <FE_Element.hxx>

// Forward declarations
class FE_Acoustical;

// Handles
DEFINE_STANDARD_HANDLE(FE_Acoustical, FE_Element)


// ============================================================================
/*!
 *  \brief FE_Acoustical
*/
// ============================================================================
class FE_Acoustical : public FE_Element
{

public:
    // constructors
    Standard_EXPORT FE_Acoustical();
    // destructors
    Standard_EXPORT ~FE_Acoustical();

public:

    DEFINE_STANDARD_RTTIEXT(FE_Acoustical, FE_Element)

};


#endif // __FE_Acoustical_hxx__

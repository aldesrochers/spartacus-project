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


#ifndef __UCM_Elastic_hxx__
#define __UCM_Elastic_hxx__

// Spartacus
#include <cmp_Elastic.hxx>
#include <UCM_Material.hxx>

// Forward declarations
class UCM_Elastic;

// Handles
DEFINE_STANDARD_HANDLE(UCM_Elastic, UCM_Material);


// ============================================================================
/*!
 *  \brief UCM_Elastic
 *  Implementation of an elastic constitutive model with given equation :
 *  Sig = E * (Eps - Alpha * (T - T0))
 *
 *  Variables are T, Eps
 *  Values are Sig
*/
// ============================================================================
class UCM_Elastic : public UCM_Material
{

public:
    // constructors
    Standard_EXPORT UCM_Elastic();
    // destructors
    Standard_EXPORT ~UCM_Elastic();

public:

    DEFINE_STANDARD_RTTIEXT(UCM_Elastic, UCM_Material);

};


#endif // __UCM_Elastic_hxx__

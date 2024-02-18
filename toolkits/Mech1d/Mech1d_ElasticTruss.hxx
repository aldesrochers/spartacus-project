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


#ifndef __Mech1d_ElasticTruss_hxx__
#define __Mech1d_ElasticTruss_hxx__

// Spartacus
#include <Mech1d_Truss.hxx>

// Forward declarations
class Mech1d_ElasticTruss;

// Handles
DEFINE_STANDARD_HANDLE(Mech1d_ElasticTruss, Mech1d_Truss)


// ============================================================================
/*!
 *  \brief Mech1d_ElasticTruss
*/
// ============================================================================
class Mech1d_ElasticTruss : public Mech1d_Truss
{

public:
    // constructors
    Standard_EXPORT Mech1d_ElasticTruss();
    // destructors
    Standard_EXPORT ~Mech1d_ElasticTruss();

public:

    DEFINE_STANDARD_RTTIEXT(Mech1d_ElasticTruss, Mech1d_Truss);

};


#endif // __Mech1d_ElasticTruss_hxx__

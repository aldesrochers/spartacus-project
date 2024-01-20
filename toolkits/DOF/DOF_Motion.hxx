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


#ifndef __DOF_Motion_hxx__
#define __DOF_Motion_hxx__

// Spartacus
#include <DOF_DegreeOfFreedom.hxx>

// Forward declarations
class DOF_Motion;

// Handles
DEFINE_STANDARD_HANDLE(DOF_Motion, DOF_DegreeOfFreedom)


// ============================================================================
/*!
 *  \brief DOF_Motion
*/
// ============================================================================
class DOF_Motion : public DOF_DegreeOfFreedom
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT DOF_Motion();
    // destructors
    Standard_EXPORT ~DOF_Motion();

public:

    DEFINE_STANDARD_RTTIEXT(DOF_Motion, DOF_DegreeOfFreedom);

};


#endif // __DOF_Motion_hxx__

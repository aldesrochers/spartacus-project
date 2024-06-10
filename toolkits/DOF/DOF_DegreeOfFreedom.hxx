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


#ifndef __DOF_DegreeOfFreedom_hxx__
#define __DOF_DegreeOfFreedom_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Forward declarations
class DOF_DegreeOfFreedom;

// Handles
DEFINE_STANDARD_HANDLE(DOF_DegreeOfFreedom, Standard_Transient)


// ============================================================================
/*!
 *  \brief DOF_DegreeOfFreedom
 *  Class implementation of a base object for the package.
*/
// ============================================================================
class DOF_DegreeOfFreedom : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT DOF_DegreeOfFreedom();
    // destructors
    Standard_EXPORT ~DOF_DegreeOfFreedom();

public:

    virtual Standard_EXPORT void                CommitState() = 0;
    virtual Standard_EXPORT void                RevertToCommitState() = 0;
    virtual Standard_EXPORT void                RevertToInitialState() = 0;

public:

    DEFINE_STANDARD_RTTIEXT(DOF_DegreeOfFreedom, Standard_Transient)

};


#endif // __DOF_DegreeOfFreedom_hxx__

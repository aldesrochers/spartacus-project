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


#ifndef __DOF_Object_hxx__
#define __DOF_Object_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Spartacus
#include <DOFAbs_TypeOfDOF.hxx>

// Forward declarations
class DOF_Object;

// Handles
DEFINE_STANDARD_HANDLE(DOF_Object, Standard_Transient);


// ============================================================================
/*!
 *  \brief DOF_Object
 *  Base class implementation of a degree of freedom.
*/
// ============================================================================
class DOF_Object : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT DOF_Object();
    // destructors
    Standard_EXPORT ~DOF_Object();

public:

    virtual Standard_EXPORT DOFAbs_TypeOfDOF    Type() const = 0;

public:

    virtual Standard_EXPORT void    CommitState() = 0;
    virtual Standard_EXPORT void    RevertToInitialState() = 0;
    virtual Standard_EXPORT void    RevertToPreviousState() = 0;

public:

    Standard_EXPORT Standard_Boolean    MustBeUpdate() const;
    Standard_EXPORT Standard_Boolean    StateChanged() const;

protected:

    Standard_EXPORT void    SetChanged();
    Standard_EXPORT void    SetNotChanged();

protected:

    Standard_Boolean        myStateChanged;

public:

    DEFINE_STANDARD_RTTIEXT(DOF_Object, Standard_Transient);

};

#endif // __DOF_Object_hxx__

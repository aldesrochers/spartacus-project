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


#ifndef __dof_Translation_hxx__
#define __dof_Translation_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>




// ============================================================================
/*!
 *  \brief dof_Translation
*/
// ============================================================================
class dof_Translation
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT dof_Translation();
    // destructors
    Standard_EXPORT ~dof_Translation();

public:

    Standard_EXPORT Standard_Real   Acceleration() const;
    Standard_EXPORT Standard_Real   Displacement() const;
    Standard_EXPORT void            SetAcceleration(const Standard_Real theAcceleration);
    Standard_EXPORT void            SetDisplacement(const Standard_Real theDisplacement);
    Standard_EXPORT void            SetVelocity(const Standard_Real theVelocity);
    Standard_EXPORT Standard_Real   Velocity() const;

private:

    Standard_Real   myAcceleration;
    Standard_Real   myDisplacement;
    Standard_Real   myVelocity;

};


#endif // __dof_Translation_hxx__

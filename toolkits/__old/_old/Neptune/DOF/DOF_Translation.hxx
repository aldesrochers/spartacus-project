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


#ifndef __DOF_Translation_hxx__
#define __DOF_Translation_hxx__

// Spartacus
#include <DOF_Motion.hxx>

// Forward declarations
class DOF_Translation;

// Handles
DEFINE_STANDARD_HANDLE(DOF_Translation, DOF_Motion);


// ============================================================================
/*!
 *  \brief DOF_Translation
*/
// ============================================================================
class DOF_Translation : public DOF_Motion
{

public:
    // constructors
    Standard_EXPORT DOF_Translation();
    // destructors
    Standard_EXPORT ~DOF_Translation();

public:

    Standard_EXPORT void    CommitState() Standard_OVERRIDE;
    Standard_EXPORT void    RevertToInitialState() Standard_OVERRIDE;
    Standard_EXPORT void    RevertToPreviousState() Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real   CurrentAcceleration() const;
    Standard_EXPORT Standard_Real   CurrentDisplacement() const;
    Standard_EXPORT Standard_Real   CurrentVelocity() const;
    Standard_EXPORT Standard_Real   InitialAcceleration() const;
    Standard_EXPORT Standard_Real   InitialDisplacement() const;
    Standard_EXPORT Standard_Real   InitialVelocity() const;
    Standard_EXPORT Standard_Real   PreviousAcceleration() const;
    Standard_EXPORT Standard_Real   PreviousDisplacement() const;
    Standard_EXPORT Standard_Real   PreviousVelocity() const;

public:

    Standard_EXPORT void    SetCurrentAcceleration(const Standard_Real theAcceleration);
    Standard_EXPORT void    SetCurrentDisplacement(const Standard_Real theDisplacement);
    Standard_EXPORT void    SetCurrentVelocity(const Standard_Real theVelocity);

private:

    Standard_Real       myCurrentAcceleration;
    Standard_Real       myCurrentDisplacement;
    Standard_Real       myCurrentVelocity;
    Standard_Real       myInitialAcceleration;
    Standard_Real       myInitialDisplacement;
    Standard_Real       myInitialVelocity;
    Standard_Real       myPreviousAcceleration;
    Standard_Real       myPreviousDisplacement;
    Standard_Real       myPreviousVelocity;
public:

    DEFINE_STANDARD_RTTIEXT(DOF_Translation, DOF_Motion);

};

#endif // __DOF_Translation_hxx__

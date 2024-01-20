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
DEFINE_STANDARD_HANDLE(DOF_Translation, DOF_Motion)


// ============================================================================
/*!
 *  \brief DOF_Translation
*/
// ============================================================================
class DOF_Translation : public DOF_Motion
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT DOF_Translation();
    // destructors
    Standard_EXPORT ~DOF_Translation();

public:

    Standard_EXPORT void                CommitState() Standard_OVERRIDE;
    Standard_EXPORT void                RevertToInitialState() Standard_OVERRIDE;
    Standard_EXPORT void                RevertToPreviousState() Standard_OVERRIDE;
    Standard_EXPORT DOFAbs_TypeOfDOF    Type() const Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real   CurrentAcceleration() const;
    Standard_EXPORT Standard_Real   CurrentForce() const;
    Standard_EXPORT Standard_Real   CurrentTranslation() const;
    Standard_EXPORT Standard_Real   CurrentVelocity() const;

    Standard_EXPORT Standard_Real   InitialAcceleration() const;
    Standard_EXPORT Standard_Real   InitialForce() const;
    Standard_EXPORT Standard_Real   InitialTranslation() const;
    Standard_EXPORT Standard_Real   InitialVelocity() const;

    Standard_EXPORT Standard_Real   PreviousAcceleration() const;
    Standard_EXPORT Standard_Real   PreviousForce() const;
    Standard_EXPORT Standard_Real   PreviousTranslation() const;
    Standard_EXPORT Standard_Real   PreviousVelocity() const;

    Standard_EXPORT void            SetCurrentAcceleration(const Standard_Real theAcceleration);
    Standard_EXPORT void            SetCurrentForce(const Standard_Real theForce);
    Standard_EXPORT void            SetCurrentTranslation(const Standard_Real theTranslation);
    Standard_EXPORT void            SetCurrentVelocity(const Standard_Real theVelocity);

private:

    Standard_Real       myCurrentAcceleration;
    Standard_Real       myCurrentForce;
    Standard_Real       myCurrentTranslation;
    Standard_Real       myCurrentVelocity;

    Standard_Real       myInitialAcceleration;

    Standard_Real       myInitialForce;
    Standard_Real       myInitialTranslation;
    Standard_Real       myInitialVelocity;

    Standard_Real       myPreviousAcceleration;
    Standard_Real       myPreviousForce;
    Standard_Real       myPreviousTranslation;
    Standard_Real       myPreviousVelocity;

public:

    DEFINE_STANDARD_RTTIEXT(DOF_Translation, DOF_Motion);

};


#endif // __DOF_Translation_hxx__

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


#ifndef __DOF_Rotation_hxx__
#define __DOF_Rotation_hxx__

// Spartacus
#include <DOF_Motion.hxx>

// Forward declarations
class DOF_Rotation;

// Handles
DEFINE_STANDARD_HANDLE(DOF_Rotation, DOF_Motion)


// ============================================================================
/*!
 *  \brief DOF_Rotation
*/
// ============================================================================
class DOF_Rotation : public DOF_Motion
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT DOF_Rotation();
    // destructors
    Standard_EXPORT ~DOF_Rotation();

public:

    Standard_EXPORT void                CommitState() Standard_OVERRIDE;
    Standard_EXPORT void                RevertToInitialState() Standard_OVERRIDE;
    Standard_EXPORT void                RevertToPreviousState() Standard_OVERRIDE;
    Standard_EXPORT DOFAbs_TypeOfDOF    Type() const Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real   CurrentAngularAcceleration() const;
    Standard_EXPORT Standard_Real   CurrentAngularVelocity() const;
    Standard_EXPORT Standard_Real   CurrentMoment() const;
    Standard_EXPORT Standard_Real   CurrentRotation() const;

    Standard_EXPORT Standard_Real   InitialAngularAcceleration() const;
    Standard_EXPORT Standard_Real   InitialAngularVelocity() const;
    Standard_EXPORT Standard_Real   InitialMoment() const;
    Standard_EXPORT Standard_Real   InitialRotation() const;

    Standard_EXPORT Standard_Real   PreviousAngularAcceleration() const;
    Standard_EXPORT Standard_Real   PreviousAngularVelocity() const;
    Standard_EXPORT Standard_Real   PreviousMoment() const;
    Standard_EXPORT Standard_Real   PreviousRotation() const;

    Standard_EXPORT void            SetCurrentAngularAcceleration(const Standard_Real theAngularAcceleration);
    Standard_EXPORT void            SetCurrentRotation(const Standard_Real theRotation);
    Standard_EXPORT void            SetCurrentMoment(const Standard_Real theMoment);
    Standard_EXPORT void            SetCurrentAngularVelocity(const Standard_Real theAngularVelocity);

private:

    Standard_Real       myCurrentAngularAcceleration;
    Standard_Real       myCurrentAngularVelocity;
    Standard_Real       myCurrentMoment;
    Standard_Real       myCurrentRotation;

    Standard_Real       myInitialAngularAcceleration;
    Standard_Real       myInitialAngularVelocity;
    Standard_Real       myInitialMoment;
    Standard_Real       myInitialRotation;

    Standard_Real       myPreviousAngularAcceleration;
    Standard_Real       myPreviousAngularVelocity;
    Standard_Real       myPreviousMoment;
    Standard_Real       myPreviousRotation;

public:

    DEFINE_STANDARD_RTTIEXT(DOF_Rotation, DOF_Motion);

};


#endif // __DOF_Rotation_hxx__

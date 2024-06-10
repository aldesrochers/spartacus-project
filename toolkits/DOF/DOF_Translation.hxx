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
    // constructors
    Standard_EXPORT DOF_Translation();
    Standard_EXPORT DOF_Translation(const DOFAbs_TypeOfAxis theAxisType);
    // destructors
    Standard_EXPORT ~DOF_Translation();

public:

    Standard_EXPORT void                    CommitState() Standard_OVERRIDE;
    Standard_EXPORT DOFAbs_TypeOfMotion     MotionType() const Standard_OVERRIDE;
    Standard_EXPORT void                    RevertToInitialState() Standard_OVERRIDE;
    Standard_EXPORT void                    RevertToCommitState() Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real   CommitedAcceleration() const;
    Standard_EXPORT Standard_Real   CommitedDisplacement() const;
    Standard_EXPORT Standard_Real   CommitedForce() const;
    Standard_EXPORT Standard_Real   CommitedVelocity() const;

    Standard_EXPORT Standard_Real   InitialAcceleration() const;
    Standard_EXPORT Standard_Real   InitialDisplacement() const;
    Standard_EXPORT Standard_Real   InitialForce() const;
    Standard_EXPORT Standard_Real   InitialVelocity() const;

    Standard_EXPORT Standard_Real   TrialAcceleration() const;
    Standard_EXPORT Standard_Real   TrialDisplacement() const;
    Standard_EXPORT Standard_Real   TrialForce() const;
    Standard_EXPORT Standard_Real   TrialVelocity() const;

private:

    Standard_Real       myCommitedAcceleration;
    Standard_Real       myCommitedDisplacement;
    Standard_Real       myCommitedForce;
    Standard_Real       myCommitedVelocity;
    Standard_Real       myInitialAcceleration;
    Standard_Real       myInitialDisplacement;
    Standard_Real       myInitialForce;
    Standard_Real       myInitialVelocity;
    Standard_Real       myTrialAcceleration;
    Standard_Real       myTrialDisplacement;
    Standard_Real       myTrialForce;
    Standard_Real       myTrialVelocity;

public:

    DEFINE_STANDARD_RTTIEXT(DOF_Translation, DOF_Motion)

};


#endif // __DOF_Translation_hxx__

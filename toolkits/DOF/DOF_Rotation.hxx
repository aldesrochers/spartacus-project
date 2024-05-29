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
#include <DOF_RotationState.hxx>

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
    // constructors
    Standard_EXPORT DOF_Rotation();
    Standard_EXPORT DOF_Rotation(const DOF_RotationState& theInitialState);
    // destructors
    Standard_EXPORT ~DOF_Rotation();

public:

    Standard_EXPORT DOFAbs_TypeOfMotion     MotionType() const Standard_OVERRIDE;

public:

    Standard_EXPORT void            CommitState() Standard_OVERRIDE;
    Standard_EXPORT void            RevertToInitialState() Standard_OVERRIDE;
    Standard_EXPORT void            RevertToCommitState() Standard_OVERRIDE;

public:

    Standard_EXPORT const DOF_RotationState&    CommitedState() const;
    Standard_EXPORT const DOF_RotationState&    InitialState() const;
    Standard_EXPORT void                        SetTrialState(const DOF_RotationState& theTrialState);
    Standard_EXPORT const DOF_RotationState&    TrialState() const;

private:

    DOF_RotationState    myCommitedState;
    DOF_RotationState    myInitialState;
    DOF_RotationState    myTrialState;

public:

    DEFINE_STANDARD_RTTIEXT(DOF_Rotation, DOF_Motion)

};


#endif // __DOF_Rotation_hxx__

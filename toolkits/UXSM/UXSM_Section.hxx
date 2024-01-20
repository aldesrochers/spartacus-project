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


#ifndef __UXSM_Section_hxx__
#define __UXSM_Section_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Forward declarations
class UXSM_Section;

// Handles
DEFINE_STANDARD_HANDLE(UXSM_Section, Standard_Transient);


// ============================================================================
/*!
 *  \brief UXSM_Section
 *  Base class implementation of all uniaxial section models.
*/
// ============================================================================
class UXSM_Section : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT UXSM_Section();
    // destructors
    Standard_EXPORT ~UXSM_Section();

public:

    virtual Standard_EXPORT Standard_Boolean    CommitState();
    virtual Standard_EXPORT Standard_Boolean    RevertToPreviousState();
    virtual Standard_EXPORT Standard_Boolean    UpdateState() = 0;


public:

    Standard_EXPORT Standard_Real   CurrentForce() const;
    Standard_EXPORT Standard_Real   CurrentStiffness() const;
    Standard_EXPORT Standard_Real   CurrentStrain() const;
    Standard_EXPORT Standard_Real   CurrentTemperature() const;
    Standard_EXPORT Standard_Real   CurrentTime() const;
    Standard_EXPORT Standard_Real   PreviousForce() const;
    Standard_EXPORT Standard_Real   PreviousStiffness() const;
    Standard_EXPORT Standard_Real   PreviousStrain() const;
    Standard_EXPORT Standard_Real   PreviousTemperature() const;
    Standard_EXPORT Standard_Real   PreviousTime() const;
    Standard_EXPORT void            SetCurrentStrain(const Standard_Real theStrain);
    Standard_EXPORT void            SetCurrentTemperature(const Standard_Real theTemperature);
    Standard_EXPORT void            SetCurrentTime(const Standard_Real theTime);

protected:

    Standard_EXPORT void            SetCurrentForce(const Standard_Real theForce);
    Standard_EXPORT void            SetCurrentStiffness(const Standard_Real theStiffness);
    Standard_EXPORT void            SetPreviousForce(const Standard_Real theForce);
    Standard_EXPORT void            SetPreviousStiffness(const Standard_Real theStiffness);
    Standard_EXPORT void            SetPreviousStrain(const Standard_Real theStrain);
    Standard_EXPORT void            SetPreviousTemperature(const Standard_Real theTemperature);
    Standard_EXPORT void            SetPreviousTime(const Standard_Real theTime);

protected:

    Standard_Real       myCurrentStiffness;
    Standard_Real       myCurrentStrain;
    Standard_Real       myCurrentForce;
    Standard_Real       myCurrentTemperature;
    Standard_Real       myCurrentTime;
    Standard_Real       myPreviousStiffness;
    Standard_Real       myPreviousStrain;
    Standard_Real       myPreviousForce;
    Standard_Real       myPreviousTemperature;
    Standard_Real       myPreviousTime;

public:

    DEFINE_STANDARD_RTTIEXT(UXSM_Section, Standard_Transient);

};


#endif // __UXSM_Section_hxx__

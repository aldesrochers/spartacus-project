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


// Spartacus
#include <UXSM_Section.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
UXSM_Section::UXSM_Section()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
UXSM_Section::~UXSM_Section()
{

}

// ============================================================================
/*!
 *  \brief CommitState()
*/
// ============================================================================
Standard_Boolean UXSM_Section::CommitState()
{
    myPreviousStiffness = myCurrentStiffness;
    myPreviousStrain = myCurrentStrain;
    myPreviousForce = myCurrentForce;
    myPreviousTemperature = myCurrentTemperature;
    myPreviousTime = myCurrentTime;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief CurrentForce()
*/
// ============================================================================
Standard_Real UXSM_Section::CurrentForce() const
{
    return myCurrentForce;
}

// ============================================================================
/*!
 *  \brief CurrentStiffness()
*/
// ============================================================================
Standard_Real UXSM_Section::CurrentStiffness() const
{
    return myCurrentStiffness;
}

// ============================================================================
/*!
 *  \brief CurrentStrain()
*/
// ============================================================================
Standard_Real UXSM_Section::CurrentStrain() const
{
    return myCurrentStrain;
}

// ============================================================================
/*!
 *  \brief CurrentTemperature()
*/
// ============================================================================
Standard_Real UXSM_Section::CurrentTemperature() const
{
    return myCurrentTemperature;
}

// ============================================================================
/*!
 *  \brief CurrentTime()
*/
// ============================================================================
Standard_Real UXSM_Section::CurrentTime() const
{
    return myCurrentTime;
}

// ============================================================================
/*!
 *  \brief PreviousForce()
*/
// ============================================================================
Standard_Real UXSM_Section::PreviousForce() const
{
    return myPreviousForce;
}

// ============================================================================
/*!
 *  \brief PreviousStiffness()
*/
// ============================================================================
Standard_Real UXSM_Section::PreviousStiffness() const
{
    return myPreviousStiffness;
}

// ============================================================================
/*!
 *  \brief PreviousStrain()
*/
// ============================================================================
Standard_Real UXSM_Section::PreviousStrain() const
{
    return myPreviousStrain;
}

// ============================================================================
/*!
 *  \brief PreviousTemperature()
*/
// ============================================================================
Standard_Real UXSM_Section::PreviousTemperature() const
{
    return myPreviousTemperature;
}

// ============================================================================
/*!
 *  \brief PreviousTime()
*/
// ============================================================================
Standard_Real UXSM_Section::PreviousTime() const
{
    return myPreviousTime;
}

// ============================================================================
/*!
 *  \brief RevertToPreviousState()
*/
// ============================================================================
Standard_Boolean UXSM_Section::RevertToPreviousState()
{
    myCurrentStiffness = myPreviousStiffness;
    myCurrentStrain = myPreviousStrain;
    myCurrentForce = myPreviousForce;
    myCurrentTemperature = myPreviousTemperature;
    myCurrentTime = myPreviousTime;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief SetCurrentForce()
*/
// ============================================================================
void UXSM_Section::SetCurrentForce(const Standard_Real theForce)
{
    myCurrentForce = theForce;
}

// ============================================================================
/*!
 *  \brief SetCurrentStiffness()
*/
// ============================================================================
void UXSM_Section::SetCurrentStiffness(const Standard_Real theStiffness)
{
    myCurrentStiffness = theStiffness;
}

// ============================================================================
/*!
 *  \brief SetCurrentStrain()
*/
// ============================================================================
void UXSM_Section::SetCurrentStrain(const Standard_Real theStrain)
{
    myCurrentStrain = theStrain;
}

// ============================================================================
/*!
 *  \brief SetCurrentTemperature()
*/
// ============================================================================
void UXSM_Section::SetCurrentTemperature(const Standard_Real theTemperature)
{
    myCurrentTemperature = theTemperature;
}

// ============================================================================
/*!
 *  \brief SetCurrentTime()
*/
// ============================================================================
void UXSM_Section::SetCurrentTime(const Standard_Real theTime)
{
    myCurrentTime = theTime;
}

// ============================================================================
/*!
 *  \brief SetPreviousForce()
*/
// ============================================================================
void UXSM_Section::SetPreviousForce(const Standard_Real theForce)
{
    myPreviousForce = theForce;
}

// ============================================================================
/*!
 *  \brief SetPreviousStiffness()
*/
// ============================================================================
void UXSM_Section::SetPreviousStiffness(const Standard_Real theStiffness)
{
    myPreviousStiffness = theStiffness;
}

// ============================================================================
/*!
 *  \brief SetPreviousStrain()
*/
// ============================================================================
void UXSM_Section::SetPreviousStrain(const Standard_Real theStrain)
{
    myPreviousStrain = theStrain;
}

// ============================================================================
/*!
 *  \brief SetPreviousTemperature()
*/
// ============================================================================
void UXSM_Section::SetPreviousTemperature(const Standard_Real theTemperature)
{
    myPreviousTemperature = theTemperature;
}

// ============================================================================
/*!
 *  \brief SetPreviousTime()
*/
// ============================================================================
void UXSM_Section::SetPreviousTime(const Standard_Real theTime)
{
    myPreviousTime = theTime;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(UXSM_Section, Standard_Transient);
IMPLEMENT_STANDARD_RTTIEXT(UXSM_Section, Standard_Transient);

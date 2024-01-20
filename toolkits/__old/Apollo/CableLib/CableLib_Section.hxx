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


#ifndef __CableLib_Section_hxx__
#define __CableLib_Section_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Forward declarations
class CableLib_Section;

// Handles
DEFINE_STANDARD_HANDLE(CableLib_Section, Standard_Transient);


// ============================================================================
/*!
 *  \brief CableLib_Section
*/
// ============================================================================
class CableLib_Section : public Standard_Transient
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT CableLib_Section();
    // destructors
    Standard_EXPORT ~CableLib_Section();

public:

    Standard_EXPORT void        SetCurrentStrain(const Standard_Real theStrain);
    Standard_EXPORT void        SetCurrentTemperature(const Standard_Real theTemperature);
    Standard_EXPORT void        SetCurrentTime(const Standard_Real theTime);

private:

    Standard_Real       myCurrentStrain;
    Standard_Real       myCurrentStress;
    Standard_Real       myCurrentTemperature;
    Standard_Real       myCurrentTime;
    Standard_Real       myInitialStrain;
    Standard_Real       myInitialStress;
    Standard_Real       myInitialTemperature;
    Standard_Real       myInitialTime;
    Standard_Real       myPreviousStrain;
    Standard_Real       myPreviousStress;
    Standard_Real       myPreviousTemperature;
    Standard_Real       myPreviousTime;
    Standard_Boolean    myStateChanged;

public:

    DEFINE_STANDARD_RTTIEXT(CableLib_Section, Standard_Transient);

};


#endif // __CableLib_Section_hxx__

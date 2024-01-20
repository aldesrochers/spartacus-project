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
#include <CableLib_Section.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
CableLib_Section::CableLib_Section()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
CableLib_Section::~CableLib_Section()
{

}

// ============================================================================
/*!
 *  \brief SetCurrentStrain()
*/
// ============================================================================
void CableLib_Section::SetCurrentStrain(const Standard_Real theStrain)
{
    myCurrentStrain = theStrain;
}

// ============================================================================
/*!
 *  \brief SetCurrentTemperature()
*/
// ============================================================================
void CableLib_Section::SetCurrentTemperature(const Standard_Real theTemperature)
{
    myCurrentTemperature = theTemperature;
}

// ============================================================================
/*!
 *  \brief SetCurrentTime()
*/
// ============================================================================
void CableLib_Section::SetCurrentTime(const Standard_Real theTime)
{
    myCurrentTime;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(CableLib_Section, Standard_Transient);
IMPLEMENT_STANDARD_RTTIEXT(CableLib_Section, Standard_Transient);

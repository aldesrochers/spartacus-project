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

#include <iostream>
using namespace std;

// Huygens
#include <Huygens_Engine.hxx>

// OpenCascade
#include <BinDrivers_DocumentRetrievalDriver.hxx>
#include <BinDrivers_DocumentStorageDriver.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Huygens_Engine::Huygens_Engine()
{

    // initialize an ocaf application
    myApplication = new TDocStd_Application();

    // define document format
    myApplication->DefineFormat("Huygens_FORMAT",
                                "Binary document format for spartacus huygens.",
                                ".shf",
                                new BinDrivers_DocumentRetrievalDriver(),
                                new BinDrivers_DocumentStorageDriver());

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Huygens_Engine::~Huygens_Engine()
{

}

// ============================================================================
/*!
 *  \brief Application()
 *  Get a reference to the OCAF application.
*/
// ============================================================================
Handle(TDocStd_Application) Huygens_Engine::Application() const
{
    return myApplication;
}

// ============================================================================


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Huygens_Engine, Standard_Transient);
IMPLEMENT_STANDARD_RTTIEXT(Huygens_Engine, Standard_Transient);

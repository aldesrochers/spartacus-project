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


#ifndef __Huygens_Engine_hxx__
#define __Huygens_Engine_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <TDocStd_Application.hxx>

// Forward declarations
class Huygens_Engine;

// Handles
DEFINE_STANDARD_HANDLE(Huygens_Engine, Standard_Transient);


// ============================================================================
/*!
 *  \brief Huygens_Engine
*/
// ============================================================================
class Huygens_Engine : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT Huygens_Engine();
    // destructors
    Standard_EXPORT ~Huygens_Engine();

public:

    Standard_EXPORT Handle(TDocStd_Application)     Application() const;
    Standard_EXPORT Handle(TDocStd_Document)        Document(const Standard_Integer theDocumentId,
                                                             const Standard_Boolean theForce = Standard_True);

private:

    Handle(TDocStd_Application)     myApplication;

public:

    DEFINE_STANDARD_RTTIEXT(Huygens_Engine, Standard_Transient);

};

#endif  // __Huygens_Engine_hxx__

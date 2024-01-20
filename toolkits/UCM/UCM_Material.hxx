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


#ifndef __UCM_Material_hxx__
#define __UCM_Material_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Forward declarations
class UCM_Material;

// Handles
DEFINE_STANDARD_HANDLE(UCM_Material, Standard_Transient);


// ============================================================================
/*!
 *  \brief UCM_Material
*/
// ============================================================================
class UCM_Material : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT UCM_Material();
    // destructors
    Standard_EXPORT ~UCM_Material();

public:

    virtual Standard_EXPORT     CurrentStress() const = 0;
    virtual Standard_EXPORT     CurrentStrain() const = 0;

public:

    DEFINE_STANDARD_RTTIEXT(UCM_Material, Standard_Transient);

};


#endif // __UCM_Material_hxx__

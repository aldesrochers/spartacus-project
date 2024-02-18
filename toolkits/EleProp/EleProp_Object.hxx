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


#ifndef __EleProp_Object_hxx__
#define __EleProp_Object_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Forward declarations
class EleProp_Object;

// Handles
DEFINE_STANDARD_HANDLE(EleProp_Object, Standard_Transient);


// ============================================================================
/*!
 *  \brief EleProp_Object
*/
// ============================================================================
class EleProp_Object : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT EleProp_Object();
    // destructors
    Standard_EXPORT ~EleProp_Object();

public:

    DEFINE_STANDARD_RTTIEXT(EleProp_Object, Standard_Transient);

};


#endif // __EleProp_Object_hxx__

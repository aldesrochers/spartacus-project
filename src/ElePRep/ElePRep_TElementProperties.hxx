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


#ifndef __ElePRep_TElementProperties_hxx__
#define __ElePRep_TElementProperties_hxx__

// Spartacus
#include <ModelDS_TElementProperties.hxx>

// Forward declarations
class ElePRep_TElementProperties;

// Handles
DEFINE_STANDARD_HANDLE(ElePRep_TElementProperties, ModelDS_TElementProperties)


// ============================================================================
/*!
 *  \brief ElePRep_TElementProperties
*/
// ============================================================================
class ElePRep_TElementProperties : public ModelDS_TElementProperties
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ElePRep_TElementProperties();
    // destructors
    Standard_EXPORT ~ElePRep_TElementProperties();

public:

    DEFINE_STANDARD_RTTIEXT(ElePRep_TElementProperties, ModelDS_TElementProperties);

};


#endif // __ElePRep_TElementProperties_hxx__

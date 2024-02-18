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


#ifndef __Model_DomainComponent_hxx__
#define __Model_DomainComponent_hxx__

// Spartacus
#include <Model_Object.hxx>

// Forward declarations
class Model_Domain;
class Model_DomainComponent;

// Handles
DEFINE_STANDARD_HANDLE(Model_DomainComponent, Model_Object);


// ============================================================================
/*!
 *  \brief Model_DomainComponent
*/
// ============================================================================
class Model_DomainComponent : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_DomainComponent();
    // destructors
    Standard_EXPORT ~Model_DomainComponent();

public:

    Standard_EXPORT const Handle(Model_Domain)& Domain() const;
    Standard_EXPORT void                        SetDomain(const Handle(Model_Domain)& theDomain);

protected:

    Handle(Model_Domain)    myDomain;

public:

    DEFINE_STANDARD_RTTIEXT(Model_DomainComponent, Model_Object);

};


#endif // __Model_DomainComponent_hxx__

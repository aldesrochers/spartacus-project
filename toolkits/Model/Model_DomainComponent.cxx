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
#include <Model_Domain.hxx>
#include <Model_DomainComponent.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_DomainComponent::Model_DomainComponent()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_DomainComponent::~Model_DomainComponent()
{

}

// ============================================================================
/*!
 *  \brief Domain()
*/
// ============================================================================
const Handle(Model_Domain)& Model_DomainComponent::Domain() const
{
    return myDomain;
}

// ============================================================================
/*!
 *  \brief SetDomain()
*/
// ============================================================================
void Model_DomainComponent::SetDomain(const Handle(Model_Domain) &theDomain)
{
    myDomain = theDomain;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_DomainComponent, Model_Object);
IMPLEMENT_STANDARD_RTTIEXT(Model_DomainComponent, Model_Object);

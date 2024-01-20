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


#ifndef __FE_DegreeOfFreedom_hxx__
#define __FE_DegreeOfFreedom_hxx__

// Spartacus
#include <FE_Component.hxx>
#include <FE_TypeOfDegreeOfFreedom.hxx>

// Forward declarations
class FE_DegreeOfFreedom;

// Handles
DEFINE_STANDARD_HANDLE(FE_DegreeOfFreedom, FE_Component)


// ============================================================================
/*!
 *  \brief FE_DegreeOfFreedom
*/
// ============================================================================
class FE_DegreeOfFreedom : public FE_Component
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT FE_DegreeOfFreedom();
    // destructors
    Standard_EXPORT ~FE_DegreeOfFreedom();

public:

    Standard_EXPORT Standard_Boolean            IsValid() const;
    Standard_EXPORT void                        SetType(const FE_TypeOfDegreeOfFreedom theType);
    Standard_EXPORT FE_TypeOfDegreeOfFreedom    Type() const;

private:

    FE_TypeOfDegreeOfFreedom        myType;

public:

    DEFINE_STANDARD_RTTIEXT(FE_DegreeOfFreedom, FE_Component);

};


#endif // __FE_DegreeOfFreedom_hxx__

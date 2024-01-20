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


#ifndef __Cable_SaggingCondition_hxx__
#define __Cable_SaggingCondition_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <Cable_TypeOfSaggingCondition.hxx>


// ============================================================================
/*!
 *  \brief Cable_SaggingCondition
*/
// ============================================================================
class Cable_SaggingCondition
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Cable_SaggingCondition();
    Standard_EXPORT Cable_SaggingCondition(const Cable_TypeOfSaggingCondition theType,
                                           const Standard_Real theLimit);
    // destructors
    Standard_EXPORT ~Cable_SaggingCondition();

public:

    Standard_EXPORT Standard_Real                   Limit() const;
    Standard_EXPORT void                            SetLimit(const Standard_Real theLimit);
    Standard_EXPORT void                            SetType(const Cable_TypeOfSaggingCondition theType);
    Standard_EXPORT Cable_TypeOfSaggingCondition    Type() const;

private:

    Standard_Real                   myLimit;
    Cable_TypeOfSaggingCondition    myType;

};

#endif // __Cable_SaggingCondition_hxx__

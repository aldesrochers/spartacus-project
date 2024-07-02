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


#ifndef __Mech1dAdaptor_Element_hxx__
#define __Mech1dAdaptor_Element_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <Mech1d_Model.hxx>
#include <MechAbs_TypeOfElement.hxx>

// Forward declarations
class Mech1dAdaptor_Element;


// ============================================================================
/*!
 *  \brief Mech1dAdaptor_Element
*/
// ============================================================================
class Mech1dAdaptor_Element
{

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT Mech1dAdaptor_Element();
    Standard_EXPORT Mech1dAdaptor_Element(const Handle(Mech1d_Model)& theElement);
    // destructors
    Standard_EXPORT ~Mech1dAdaptor_Element();

public:

    Standard_EXPORT const Handle(Mech1d_Model)&   Element() const;
    Standard_EXPORT MechAbs_TypeOfElement           ElementType() const;
    Standard_EXPORT void                            SetElement(const Handle(Mech1d_Model)& theElement);

private:

    Handle(Mech1d_Model)  myElement;

};


#endif // __Mech1dAdaptor_Element_hxx__

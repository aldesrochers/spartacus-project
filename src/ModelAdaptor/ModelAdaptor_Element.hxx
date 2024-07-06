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


#ifndef __ModelAdaptor_Element_hxx__
#define __ModelAdaptor_Element_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <Model_Element.hxx>
#include <ModelAbs_TypeOfDimensionality.hxx>
#include <ModelAbs_TypeOfPhenomenon.hxx>


// ============================================================================
/*!
 *  \brief ModelAdaptor_Element
*/
// ============================================================================
class ModelAdaptor_Element
{

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT ModelAdaptor_Element(const Handle(Model_Element)& theElement);
    // destructors
    Standard_EXPORT ~ModelAdaptor_Element();

public:

    Standard_EXPORT ModelAbs_TypeOfDimensionality   Dimensionality() const;
    Standard_EXPORT ModelAbs_TypeOfPhenomenon       Phenomenon() const;


private:

    Handle(Model_Element)   myElement;

};


#endif // __ModelAdaptor_Element_hxx__

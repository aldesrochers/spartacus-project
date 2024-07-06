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


#ifndef __FEAdaptor_Model_hxx__
#define __FEAdaptor_Model_hxx__


// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <FEAbs_TypeOfDimensionality.hxx>
#include <FEAbs_TypeOfModelization.hxx>
#include <FEAbs_TypeOfPhenomenon.hxx>
#include <FE_Element.hxx>

// ============================================================================
/*!
 *  \brief FEAdaptor_Model
*/
// ============================================================================
class FEAdaptor_Model
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT FEAdaptor_Model(const Handle(FE_Element)& theModel);
    // destructors
    Standard_EXPORT ~FEAdaptor_Model();

public:

    Standard_EXPORT const Handle(FE_Element)&   Model() const;

public:

    Standard_EXPORT FEAbs_TypeOfDimensionality  Dimensionality() const;
    Standard_EXPORT FEAbs_TypeOfModelization    Modelization() const;
    Standard_EXPORT FEAbs_TypeOfPhenomenon      Phenomenon() const;

private:

    Handle(FE_Element)      myModel;

};


#endif // __FEAdaptor_Model_hxx__

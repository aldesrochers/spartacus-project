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
#include <FE_Mechanical1d.hxx>
#include <FE_Mechanical2d.hxx>
#include <FE_Mechanical3d.hxx>
#include <FEAdaptor_Model.hxx>

// OpenCascade
#include <Standard_NotImplemented.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEAdaptor_Model::FEAdaptor_Model(const Handle(FE_Element)& theModel)
    : myModel(theModel)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FEAdaptor_Model::~FEAdaptor_Model()
{

}

// ============================================================================
/*!
 *  \brief Dimensionality()
*/
// ============================================================================
FEAbs_TypeOfDimensionality FEAdaptor_Model::Dimensionality() const
{
    const Handle(Standard_Type)& aType = myModel->DynamicType();
    if(aType == STANDARD_TYPE(FE_Mechanical1d)) {
        return FEAbs_DIM_1d;
    } else if(aType == STANDARD_TYPE(FE_Mechanical2d)) {
        return FEAbs_DIM_2d;
    } else if(aType == STANDARD_TYPE(FE_Mechanical3d)) {
        return FEAbs_DIM_3d;
    }

    throw Standard_NotImplemented("FEAdaptor_Model::Dimensionality()");
}

// ============================================================================
/*!
 *  \brief Phenomenon()
*/
// ============================================================================
FEAbs_TypeOfPhenomenon FEAdaptor_Model::Phenomenon() const
{
    const Handle(Standard_Type)& aType = myModel->DynamicType();
    if(aType == STANDARD_TYPE(FE_Mechanical1d)) {
        return FEAbs_PHE_Mechanical;
    }

    throw Standard_NotImplemented("FEAdaptor_Model::Phenomenon()");
}

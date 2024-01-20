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
#include <FEM_Element.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEM_Element::FEM_Element()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEM_Element::FEM_Element(const Standard_Integer theCellId, const FEAbs_TypeOfPhenomenon thePhenomenon, const FEAbs_TypeOfModelization theModelization)
    : myCellId(theCellId),
    myModelization(theModelization),
    myPhenomenon(thePhenomenon)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FEM_Element::~FEM_Element()
{

}

// ============================================================================
/*!
 *  \brief CellId()
*/
// ============================================================================
Standard_Integer FEM_Element::CellId() const
{
    return myCellId;
}

// ============================================================================
/*!
 *  \brief Modelization()
*/
// ============================================================================
FEAbs_TypeOfModelization FEM_Element::Modelization() const
{
    return myModelization;
}

// ============================================================================
/*!
 *  \brief Phenomenon()
*/
// ============================================================================
FEAbs_TypeOfPhenomenon FEM_Element::Phenomenon() const
{
    return myPhenomenon;
}

// ============================================================================
/*!
 *  \brief SetCellId()
*/
// ============================================================================
void FEM_Element::SetCellId(const Standard_Integer theCellId)
{
    myCellId = theCellId;
}

// ============================================================================
/*!
 *  \brief SetModelization()
*/
// ============================================================================
void FEM_Element::SetModelization(FEAbs_TypeOfModelization theModelization)
{
    myModelization = theModelization;
}

// ============================================================================
/*!
 *  \brief SetPhenomenon()
*/
// ============================================================================
void FEM_Element::SetPhenomenon(FEAbs_TypeOfPhenomenon thePhenomenon)
{
    myPhenomenon = thePhenomenon;
}


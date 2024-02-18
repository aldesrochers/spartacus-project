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
#include <Model_Element.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Element::Model_Element()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Element::Model_Element(const Standard_Integer theCellId,
                             const Model_TypeOfPhenomenon thePhenomenon,
                             const Model_TypeOfModelisation theModelisation)
    : myCellId(theCellId),
    myModelisation(theModelisation),
    myPhenomenon(thePhenomenon)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Element::~Model_Element()
{

}

// ============================================================================
/*!
 *  \brief CellId()
*/
// ============================================================================
Standard_Integer Model_Element::CellId() const
{
    return myCellId;
}

// ============================================================================
/*!
 *  \brief Modelisation()
*/
// ============================================================================
Model_TypeOfModelisation Model_Element::Modelisation() const
{
    return myModelisation;
}

// ============================================================================
/*!
 *  \brief Phenomenon()
*/
// ============================================================================
Model_TypeOfPhenomenon Model_Element::Phenomenon() const
{
    return myPhenomenon;
}

// ============================================================================
/*!
 *  \brief SetCellId()
*/
// ============================================================================
void Model_Element::SetCellId(const Standard_Integer theCellId)
{
    myCellId = theCellId;
}

// ============================================================================
/*!
 *  \brief SetModelisation()
*/
// ============================================================================
void Model_Element::SetModelisation(const Model_TypeOfModelisation theModelisation)
{
    myModelisation = theModelisation;
}

// ============================================================================
/*!
 *  \brief SetPhenomenon()
*/
// ============================================================================
void Model_Element::SetPhenomenon(const Model_TypeOfPhenomenon thePhenomenon)
{
    myPhenomenon = thePhenomenon;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Element, Model_Object);
IMPLEMENT_STANDARD_RTTIEXT(Model_Element, Model_Object);

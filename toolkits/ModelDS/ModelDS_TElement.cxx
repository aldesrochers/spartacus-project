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
#include <ModelDS_TElement.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TElement::ModelDS_TElement()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TElement::~ModelDS_TElement()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const MeshDS_Cell& ModelDS_TElement::Cell() const
{
    return myCell;
}

// ============================================================================
/*!
 *  \brief Modelisation()
*/
// ============================================================================
ModelAbs_TypeOfModelisation ModelDS_TElement::Modelisation() const
{
    return myModelisation;
}

// ============================================================================
/*!
 *  \brief Phenomenon()
*/
// ============================================================================
ModelAbs_TypeOfPhenomenon ModelDS_TElement::Phenomenon() const
{
    return myPhenomenon;
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void ModelDS_TElement::SetCell(const MeshDS_Cell &theCell)
{
    myCell = theCell;
}

// ============================================================================
/*!
 *  \brief SetModelisation()
*/
// ============================================================================
void ModelDS_TElement::SetModelisation(const ModelAbs_TypeOfModelisation theModelisation)
{
    myModelisation = theModelisation;
}

// ============================================================================
/*!
 *  \brief SetPhenomenon()
*/
// ============================================================================
void ModelDS_TElement::SetPhenomenon(const ModelAbs_TypeOfPhenomenon thePhenomenon)
{
    myPhenomenon = thePhenomenon;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TElement, ModelDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TElement, ModelDS_TObject);

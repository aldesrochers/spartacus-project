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
#include <ModelDS_Builder.hxx>
#include <ModelDS_TElement.hxx>
#include <ModelDS_TModel.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_Builder::ModelDS_Builder()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_Builder::~ModelDS_Builder()
{

}

// ============================================================================
/*!
 *  \brief MakeElement()
*/
// ============================================================================
void ModelDS_Builder::MakeElement(ModelDS_Element& theElement) const
{
    Handle(ModelDS_TElement) aTElement = new ModelDS_TElement();
    MakeObject(theElement, aTElement);
}

// ============================================================================
/*!
 *  \brief MakeElement()
*/
// ============================================================================
void ModelDS_Builder::MakeElement(ModelDS_Element &theElement,
                                  const MeshDS_Cell &theCell,
                                  const ModelAbs_TypeOfPhenomenon thePhenomenon,
                                  const ModelAbs_TypeOfModelisation theModelisation) const
{
    MakeElement(theElement);
    UpdateElement(theElement, theCell, thePhenomenon, theModelisation);
}

// ============================================================================
/*!
 *  \brief MakeModel()
*/
// ============================================================================
void ModelDS_Builder::MakeModel(ModelDS_Model &theModel) const
{
    Handle(ModelDS_TModel) aTModel = new ModelDS_TModel();
    MakeObject(theModel, aTModel);
}

// ============================================================================
/*!
 *  \brief MakeObject()
*/
// ============================================================================
void ModelDS_Builder::MakeObject(ModelDS_Object &theObject,
                                 const Handle(ModelDS_TObject) &theTObject) const
{
    theObject.SetTObject(theTObject);
}

// ============================================================================
/*!
 *  \brief UpdateElement()
*/
// ============================================================================
void ModelDS_Builder::UpdateElement(const ModelDS_Element &theElement,
                                    const MeshDS_Cell &theCell,
                                    const ModelAbs_TypeOfPhenomenon thePhenomenon,
                                    const ModelAbs_TypeOfModelisation theModelisation) const
{
    const Handle(ModelDS_TElement)& aTElement = *((Handle(ModelDS_TElement)*) &theElement.TObject());
    aTElement->SetCell(theCell);
    aTElement->SetModelisation(theModelisation);
    aTElement->SetPhenomenon(thePhenomenon);
}

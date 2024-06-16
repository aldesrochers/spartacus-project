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

#include <iostream>
using namespace std;

// Spartacus
#include <ModelAlgo_Numberer.hxx>
#include <ModelDS.hxx>
#include <ModelDS_DOF.hxx>
#include <ModelDS_Boundary.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Tool.hxx>
#include <ModelTools_IndexedMapOfObject.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelAlgo_Numberer::ModelAlgo_Numberer(const ModelDS_Model& theModel,
                                       const ModelAbs_TypeOfNumberer theNumbererType)
{
    if(theNumbererType == ModelAbs_NUMBERER_Plain)
        PlainNumerer(theModel);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelAlgo_Numberer::~ModelAlgo_Numberer()
{

}

// ============================================================================
/*!
 *  \brief Mapping()
*/
// ============================================================================
const ModelDS_Mapping& ModelAlgo_Numberer::Mapping() const
{
    return myMapping;
}

// ============================================================================
/*!
 *  \brief operator ModelDS_Mapping()
*/
// ============================================================================
ModelAlgo_Numberer::operator ModelDS_Mapping() const
{
    return Mapping();
}

// ============================================================================
/*!
 *  \brief PlainNumberer()
*/
// ============================================================================
void ModelAlgo_Numberer::PlainNumerer(const ModelDS_Model &theModel)
{
    // loop elements in model sequencially. get all dofs from elements,
    // add to unique map of dofs
    ModelTools_IndexedMapOfObject aMap;
    ModelDS_ListOfObject aList = ModelDS_Tool::Elements(theModel);
    ModelDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        ModelDS_Element anElement = ModelDS::Element(anIterator.Value());
        ModelDS_SequenceOfObject aSequence = ModelDS_Tool::DOFs(anElement);
        for(Standard_Integer i=1; i<=aSequence.Size(); i++) {
            ModelDS_DOF aDOF = ModelDS::DOF(aSequence.Value(i));
            aMap.Add(aDOF);
        }
    }

    // populate a mapping object
    ModelDS_Builder aBuilder;
    aBuilder.MakeMapping(myMapping);
    for(Standard_Integer i=1; i<=aMap.Size(); i++) {
        ModelDS_DOF aDOF = ModelDS::DOF(aMap.FindKey(i));
        aBuilder.AddDOF(myMapping, aDOF);
    }

    SetDone();
}

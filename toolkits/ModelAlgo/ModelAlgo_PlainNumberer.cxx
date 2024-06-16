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
#include <ModelAlgo_PlainNumberer.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Tool.hxx>
#include <ModelTools_IndexedMapOfObject.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelAlgo_PlainNumberer::ModelAlgo_PlainNumberer(const ModelDS_Model& theModel)
{
    Initialize(theModel);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelAlgo_PlainNumberer::~ModelAlgo_PlainNumberer()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelAlgo_PlainNumberer::Initialize(const ModelDS_Model &theModel)
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


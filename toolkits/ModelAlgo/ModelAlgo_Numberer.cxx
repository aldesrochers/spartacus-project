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
#include <ModelDS_Tool.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelAlgo_Numberer::ModelAlgo_Numberer()
{

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
 *  \brief Perform()
*/
// ============================================================================
Standard_Boolean ModelAlgo_Numberer::Perform()
{

    ModelTools_IndexedMapOfObject myDOFs;

    // retrieve all elements from model
    const ModelDS_ListOfObject& aList = ModelDS_Tool::Elements(myModel);
    ModelDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        ModelDS_Element anElement = ModelDS::Element(anIterator.Value());
        ModelDS_SequenceOfObject aSequence = ModelDS_Tool::DOFs(anElement);
        ModelDS_SequenceIteratorOfSequenceOfObject anIterator2(aSequence);
        for(; anIterator2.More(); anIterator2.Next()) {
            ModelDS_DOF aDOF = ModelDS::DOF(anIterator2.Value());
            myDOFs.Add(aDOF);
        }
    }

    cout << aList.Size() << endl;
    cout << myDOFs.Size() << endl;

    return Standard_True;
}

// ============================================================================
/*!
 *  \brief SetLoading()
*/
// ============================================================================
void ModelAlgo_Numberer::SetLoading(const ModelDS_Loading &theLoading)
{
    myLoading = theLoading;
}

// ============================================================================
/*!
 *  \brief SetModel()
*/
// ============================================================================
void ModelAlgo_Numberer::SetModel(const ModelDS_Model &theModel)
{
    myModel = theModel;
}

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
#include <ModelAlgo_ElementaryMatrices.hxx>
#include <ModelAlgo_Numberer.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Tool.hxx>
#include <ModelTools_IndexedMapOfObject.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelAlgo_ElementaryMatrices::ModelAlgo_ElementaryMatrices()
    : myMatrixType(ModelAbs_MATRIX_MechanicStiffness),
      myNumbererType(ModelAbs_NUMBERER_Plain)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelAlgo_ElementaryMatrices::~ModelAlgo_ElementaryMatrices()
{

}

// ============================================================================
/*!
 *  \brief Perform()
*/
// ============================================================================
Standard_Boolean ModelAlgo_ElementaryMatrices::Perform()
{

    ModelTools_IndexedMapOfObject aMap;
    ModelDS_Mapping aMapping = ModelAlgo_Numberer(myModel, myNumbererType).Mapping();
    const ModelDS_SequenceOfObject& aSequence = ModelDS_Tool::DOFs(aMapping);
    for(Standard_Integer i=1; i<=aSequence.Size(); i++) {
        ModelDS_DOF aDOF = ModelDS::DOF(aSequence.Value(i));
        aMap.Add(aDOF);
    }

    Standard_Integer nbDOFs = aMap.Size();
    math_Matrix aMatrix(1, nbDOFs, 1, nbDOFs, 0.);

    /*
    const ModelDS_ListOfObject& aList = ModelDS_Tool::Elements(myModel);
    ModelDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        ModelDS_Element anElement = ModelDS::Element(anIterator.Value());
        math_Matrix K(1,2,1,2,0.);
        K(1,1) = 1;
        K(1,2) = -1;
        K(2,1) = -1;
        K(2,2) = 1;

        const ModelDS_SequenceOfObject& aSequence = ModelDS_Tool::DOFs(anElement);
        for(Standard_Integer i=1; i<=aSequence.Size(); i++) {
            for(Standard_Integer j=1; j<=aSequence.Size(); j++) {
                ModelDS_DOF aDOF1 = ModelDS::DOF(aSequence.Value(i));
                ModelDS_DOF aDOF2 = ModelDS::DOF(aSequence.Value(j));
                Standard_Integer II = aMap.FindIndex(aDOF1);
                Standard_Integer JJ = aMap.FindIndex(aDOF2);
                aMatrix(II,JJ) += K(i,j);
            }
        }



    }
*/


    cout << aMatrix << endl;
}

// ============================================================================
/*!
 *  \brief SetModel()
*/
// ============================================================================
void ModelAlgo_ElementaryMatrices::SetModel(const ModelDS_Model &theModel)
{
    myModel = theModel;
}

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
#include <ModelDS_Builder.hxx>
#include <ModelDS_TBoundary.hxx>
#include <ModelDS_TElement.hxx>
#include <ModelDS_TDOF.hxx>
#include <ModelDS_TLoad.hxx>
#include <ModelDS_TLoading.hxx>
#include <ModelDS_TModel.hxx>
#include <ModelDS_TNode.hxx>


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
 *  \brief AddBoundary()
*/
// ============================================================================
void ModelDS_Builder::AddBoundary(const ModelDS_Loading &theLoading,
                                  const ModelDS_Boundary& theBoundary) const
{
    const Handle(ModelDS_TLoading)& aTLoading = *((Handle(ModelDS_TLoading)*) &theLoading.TObject());
    ModelDS_ListOfObject& aList = aTLoading->Boundaries();
    aList.Append(theBoundary);
}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
void ModelDS_Builder::AddDOF(const ModelDS_Boundary &theBoundary,
                             const ModelDS_DOF& theDOF) const
{
    const Handle(ModelDS_TBoundary)& aTBoundary = *((Handle(ModelDS_TBoundary)*) &theBoundary.TObject());
    ModelDS_ListOfObject& aList = aTBoundary->DOFs();
    aList.Append(theDOF);
}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
void ModelDS_Builder::AddDOF(const ModelDS_Element &theElement,
                             const ModelDS_DOF& theDOF) const
{
    const Handle(ModelDS_TElement)& aTElement = *((Handle(ModelDS_TElement)*) &theElement.TObject());
    ModelDS_SequenceOfObject& aSequence = aTElement->DOFs();
    aSequence.Append(theDOF);
}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
void ModelDS_Builder::AddDOF(const ModelDS_Load &theLoad,
                             const ModelDS_DOF& theDOF) const
{
    const Handle(ModelDS_TLoad)& aTLoad = *((Handle(ModelDS_TLoad)*) &theLoad.TObject());
    ModelDS_ListOfObject& aList = aTLoad->DOFs();
    aList.Append(theDOF);
}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
void ModelDS_Builder::AddDOF(const ModelDS_Node &theNode,
                             const ModelDS_DOF& theDOF) const
{
    const Handle(ModelDS_TNode)& aTNode = *((Handle(ModelDS_TNode)*) &theNode.TObject());
    ModelDS_ListOfObject& aList = aTNode->DOFs();
    aList.Append(theDOF);
}

// ============================================================================
/*!
 *  \brief AddElement()
*/
// ============================================================================
void ModelDS_Builder::AddElement(const ModelDS_Model &theModel,
                                 const ModelDS_Element& theElement) const
{
    const Handle(ModelDS_TModel)& aTModel = *((Handle(ModelDS_TModel)*) &theModel.TObject());
    ModelDS_ListOfObject& aList = aTModel->Elements();
    aList.Append(theElement);
}

// ============================================================================
/*!
 *  \brief AddLoad()
*/
// ============================================================================
void ModelDS_Builder::AddLoad(const ModelDS_Loading &theLoading,
                              const ModelDS_Load& theLoad) const
{
    const Handle(ModelDS_TLoading)& aTLoading = *((Handle(ModelDS_TLoading)*) &theLoading.TObject());
    ModelDS_ListOfObject& aList = aTLoading->Loads();
    aList.Append(theLoad);
}

// ============================================================================
/*!
 *  \brief MakeBoundary()
*/
// ============================================================================
void ModelDS_Builder::MakeBoundary(ModelDS_Boundary &theBoundary) const
{
    Handle(ModelDS_TBoundary) aTBoundary = new ModelDS_TBoundary();
    MakeObject(theBoundary, aTBoundary);
}

// ============================================================================
/*!
 *  \brief MakeDOF()
*/
// ============================================================================
void ModelDS_Builder::MakeDOF(ModelDS_DOF &theDOF) const
{
    Handle(ModelDS_TDOF) aTDOF = new ModelDS_TDOF();
    MakeObject(theDOF, aTDOF);
}

// ============================================================================
/*!
 *  \brief MakeDOF()
*/
// ============================================================================
void ModelDS_Builder::MakeDOF(ModelDS_DOF &theDOF,
                              const ModelAbs_TypeOfDOF theDOFType) const
{
    MakeDOF(theDOF);
    UpdateDOF(theDOF, theDOFType);
}

// ============================================================================
/*!
 *  \brief MakeElement()
*/
// ============================================================================
void ModelDS_Builder::MakeElement(ModelDS_Element &theElement) const
{
    Handle(ModelDS_TElement) aTElement = new ModelDS_TElement();
    MakeObject(theElement, aTElement);
}

// ============================================================================
/*!
 *  \brief MakeLoad()
*/
// ============================================================================
void ModelDS_Builder::MakeLoad(ModelDS_Load &theLoad) const
{
    Handle(ModelDS_TLoad) aTLoad = new ModelDS_TLoad();
    MakeObject(theLoad, aTLoad);
}

// ============================================================================
/*!
 *  \brief MakeLoading()
*/
// ============================================================================
void ModelDS_Builder::MakeLoading(ModelDS_Loading &theLoading) const
{
    Handle(ModelDS_TLoading) aTLoading = new ModelDS_TLoading();
    MakeObject(theLoading, aTLoading);
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
 *  \brief MakeNode()
*/
// ============================================================================
void ModelDS_Builder::MakeNode(ModelDS_Node &theNode) const
{
    Handle(ModelDS_TNode) aTNode = new ModelDS_TNode();
    MakeObject(theNode, aTNode);
}

// ============================================================================
/*!
 *  \brief MakeNode()
*/
// ============================================================================
void ModelDS_Builder::MakeNode(ModelDS_Node &theNode,
                               const MeshDS_Vertex &theVertex) const
{
    MakeNode(theNode);
    UpdateNode(theNode, theVertex);
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
 *  \brief UpdateDOF()
*/
// ============================================================================
void ModelDS_Builder::UpdateDOF(const ModelDS_DOF &theDOF,
                                const ModelAbs_TypeOfDOF theDOFType) const
{
    const Handle(ModelDS_TDOF)& aTDOF = *((Handle(ModelDS_TDOF)*) &theDOF.TObject());
    aTDOF->SetDOFType(theDOFType);
}

// ============================================================================
/*!
 *  \brief UpdateNode()
*/
// ============================================================================
void ModelDS_Builder::UpdateNode(const ModelDS_Node &theNode,
                                 const MeshDS_Vertex &theVertex) const
{
    const Handle(ModelDS_TNode)& aTNode = *((Handle(ModelDS_TNode)*) &theNode.TObject());
    aTNode->SetVertex(theVertex);
}

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
#include <ModelAdaptor_Point.hxx>
#include <ModelBuilder_MakeDOF.hxx>
#include <ModelBuilder_MakeNode.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Tool.hxx>
#include <ModelExp.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeNode::ModelBuilder_MakeNode(const gp_Pnt1d& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeNode::~ModelBuilder_MakeNode()
{

}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
void ModelBuilder_MakeNode::AddDOF(const ModelDS_DOF &theDOF)
{

    // retrieve DOF type
    ModelAbs_TypeOfDOF aType = ModelDS_Tool::DOFType(theDOF);

    // list DOFs bounded to node
    ModelTools_ListOfObject aList;
    ModelExp::ListDOFs(Node(), aList);

    // check if DOF of same type is already bounded to node
    ModelTools_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        ModelDS_DOF iDOF = ModelDS::DOF(anIterator.Value());
        ModelAbs_TypeOfDOF iType = ModelDS_Tool::DOFType(iDOF);
        if(iType == aType) {
            myError = ModelBuilder_NodeExistingDOFError;
            SetNotDone();
            return;
        }
    }

    // check if DOF type is supported on node geometry
    const Handle(Model_Point)& aPoint  = ModelDS_Tool::Point(Node());
    ModelAdaptor_Point anAdaptor(aPoint);
    ModelAbs_TypeOfDimensionality aDimensionality = anAdaptor.Dimensionality();

    // process compatibility
    bool isValid = Standard_False;
    if(aDimensionality == ModelAbs_DIM_1d) {
        if(aType == ModelAbs_DOF_DX) {
            isValid = Standard_True;
        } else if(aType == ModelAbs_DOF_TEMP) {
            isValid = Standard_True;
        } else {
            isValid = Standard_False;
        }
    } else if(aDimensionality == ModelAbs_DIM_2d) {
        if(aType == ModelAbs_DOF_DX) {
            isValid = Standard_True;
        } else if(aType == ModelAbs_DOF_DY) {
            isValid = Standard_True;
        } else if(aType == ModelAbs_DOF_DRZ) {
            isValid = Standard_True;
        } else if(aType == ModelAbs_DOF_TEMP) {
            isValid = Standard_True;
        } else {
            isValid = Standard_False;
        }
    } else if(aDimensionality == ModelAbs_DIM_3d) {
        if(aType == ModelAbs_DOF_DX) {
            isValid = Standard_True;
        } else if(aType == ModelAbs_DOF_DY) {
            isValid = Standard_True;
        } else if(aType == ModelAbs_DOF_DZ) {
            isValid = Standard_True;
        } else if(aType == ModelAbs_DOF_DRX) {
            isValid = Standard_True;
        } else if(aType == ModelAbs_DOF_DRY) {
            isValid = Standard_True;
        } else if(aType == ModelAbs_DOF_DRZ) {
            isValid = Standard_True;
        } else if(aType == ModelAbs_DOF_TEMP) {
            isValid = Standard_True;
        } else {
            isValid = Standard_False;
        }
    }

    // check if valid DOF, set proper error
    if(!isValid) {
        myError = ModelBuilder_NodeUnsupportedDOFError;
        SetNotDone();
        return;
    }

    // add DOF to node, link node to DOF
    ModelDS_Builder aBuilder;
    aBuilder.AddDOF(ModelDS::Node(myObject), theDOF);
    aBuilder.UpdateDOF(theDOF, Node());
    SetDone();
}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
void ModelBuilder_MakeNode::AddDOF(const ModelAbs_TypeOfDOF theDOFType)
{
    ModelDS_DOF aDOF = ModelBuilder_MakeDOF(theDOFType).DOF();
    AddDOF(aDOF);
}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
ModelBuilder_NodeError ModelBuilder_MakeNode::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeNode::Initialize(const gp_Pnt1d &thePoint)
{
    myError = ModelBuilder_NodeNoError;
    ModelDS_Builder aBuilder;
    aBuilder.MakeNode(ModelDS::Node(myObject), thePoint);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeNode::Initialize(const gp_Pnt2d &thePoint)
{
    myError = ModelBuilder_NodeNoError;
    ModelDS_Builder aBuilder;
    aBuilder.MakeNode(ModelDS::Node(myObject), thePoint);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeNode::Initialize(const gp_Pnt &thePoint)
{
    myError = ModelBuilder_NodeNoError;
    ModelDS_Builder aBuilder;
    aBuilder.MakeNode(ModelDS::Node(myObject), thePoint);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const ModelDS_Node& ModelBuilder_MakeNode::Node() const
{
    return ModelDS::Node(Object());
}

// ============================================================================
/*!
 *  \brief operator ModelDS_Node()
*/
// ============================================================================
ModelBuilder_MakeNode::operator ModelDS_Node() const
{
    return Node();
}


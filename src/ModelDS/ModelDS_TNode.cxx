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
#include <ModelDS.hxx>
#include <ModelDS_TNode.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TNode::ModelDS_TNode()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TNode::~ModelDS_TNode()
{

}

// ============================================================================
/*!
 *  \brief DOFs()
*/
// ============================================================================
const ModelDS_ListOfObject& ModelDS_TNode::DOFs() const
{
    return myDOFs;
}

// ============================================================================
/*!
 *  \brief DOFs()
*/
// ============================================================================
ModelDS_ListOfObject& ModelDS_TNode::DOFs()
{
    return myDOFs;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TNode::ObjectType() const
{
    return ModelAbs_OBJ_Node;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void ModelDS_TNode::SetPoint(const Handle(Model_Point) &thePoint)
{
    myPoint = thePoint;
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const Handle(Model_Point)& ModelDS_TNode::Point() const
{
    return myPoint;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TNode, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TNode, ModelDS_TObject)

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
 *  \brief DegreesOfFreedom()
*/
// ============================================================================
ModelDS_ListOfObject& ModelDS_TNode::DegreesOfFreedom()
{
    return myDegreesOfFreedom;
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
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt& ModelDS_TNode::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void ModelDS_TNode::SetPoint(const gp_Pnt &thePoint)
{
    myPoint = thePoint;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TNode, ModelDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TNode, ModelDS_TObject);

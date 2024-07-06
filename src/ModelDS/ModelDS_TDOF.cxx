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
#include <ModelDS_TDOF.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TDOF::ModelDS_TDOF()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TDOF::~ModelDS_TDOF()
{

}

// ============================================================================
/*!
 *  \brief DOFType()
*/
// ============================================================================
ModelAbs_TypeOfDOF ModelDS_TDOF::DOFType() const
{
    return myDOFType;
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const ModelDS_Node& ModelDS_TDOF::Node() const
{
    return myNode;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TDOF::ObjectType() const
{
    return ModelAbs_OBJ_DOF;
}

// ============================================================================
/*!
 *  \brief SetDOFType()
*/
// ============================================================================
void ModelDS_TDOF::SetDOFType(const ModelAbs_TypeOfDOF theDOFType)
{
    myDOFType = theDOFType;
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void ModelDS_TDOF::SetNode(const ModelDS_Node &theNode)
{
    myNode = theNode;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TDOF, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TDOF, ModelDS_TObject)

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
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TDOF::ObjectType() const
{
    return ModelAbs_OBJ_DOF;
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
 *  \brief Representation()
*/
// ============================================================================
const Handle(ModelRep_DOF)& ModelDS_TDOF::Representation() const
{
    return myRepresentation;
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

// ============================================================================
/*!
 *  \brief SetRepresentation()
*/
// ============================================================================
void ModelDS_TDOF::SetRepresentation(const Handle(ModelRep_DOF) &theRepresentation)
{
    myRepresentation = theRepresentation;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TDOF, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TDOF, ModelDS_TObject)

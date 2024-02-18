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
#include <Model_DegreeOfFreedom.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_DegreeOfFreedom::Model_DegreeOfFreedom()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_DegreeOfFreedom::Model_DegreeOfFreedom(const Standard_Integer theNodeId,
                                             const ModelAbs_TypeOfDOF theType)
    : myNodeId(theNodeId),
    myType(theType)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_DegreeOfFreedom::~Model_DegreeOfFreedom()
{

}

// ============================================================================
/*!
 *  \brief NodeId()
*/
// ============================================================================
Standard_Integer Model_DegreeOfFreedom::NodeId() const
{
    return myNodeId;
}

// ============================================================================
/*!
 *  \brief SetNodeId()
*/
// ============================================================================
void Model_DegreeOfFreedom::SetNodeId(const Standard_Integer theNodeId)
{
    myNodeId = theNodeId;
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void Model_DegreeOfFreedom::SetType(const ModelAbs_TypeOfDOF theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
ModelAbs_TypeOfDOF Model_DegreeOfFreedom::Type() const
{
    return myType;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_DegreeOfFreedom, Model_DomainComponent);
IMPLEMENT_STANDARD_RTTIEXT(Model_DegreeOfFreedom, Model_DomainComponent);

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
#include <fep_Variable.hxx>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_Variable::fep_Variable()
    : myType(fep_Variable_NULL)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_Variable::fep_Variable(const Standard_Integer theNode,
                 const fep_TypeOfVariable theType)
    : myNode(theNode),
    myType(theType)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_Variable::~fep_Variable()
{

}

// ============================================================================
/*!
 *  \brief IsValid()
*/
// ============================================================================
Standard_Boolean fep_Variable::IsValid() const
{
    return (myType != fep_Variable_NULL);
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Standard_Integer fep_Variable::Node() const
{
    return myNode;
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void fep_Variable::SetNode(const Standard_Integer theNode)
{
    myNode = theNode;
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void fep_Variable::SetType(const fep_TypeOfVariable theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
fep_TypeOfVariable fep_Variable::Type() const
{
    return myType;
}

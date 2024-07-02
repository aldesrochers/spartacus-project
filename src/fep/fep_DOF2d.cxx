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
#include <fep_DOF2d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_DOF2d::fep_DOF2d()
    : myType(fep_DOF2d_NULL)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_DOF2d::fep_DOF2d(const Standard_Integer theNode,
                     const fep_TypeOfDOF2d theType)
    : myNode(theNode),
    myType(theType)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_DOF2d::~fep_DOF2d()
{

}

// ============================================================================
/*!
 *  \brief IsValid()
*/
// ============================================================================
Standard_Boolean fep_DOF2d::IsValid() const
{
    return (myType != fep_DOF2d_NULL);
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Standard_Integer fep_DOF2d::Node() const
{
    return myNode;
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void fep_DOF2d::SetNode(const Standard_Integer theNode)
{
    myNode = theNode;
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void fep_DOF2d::SetType(const fep_TypeOfDOF2d theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
fep_TypeOfDOF2d fep_DOF2d::Type() const
{
    return myType;
}

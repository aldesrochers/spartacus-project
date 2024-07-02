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
#include <fep_DOF1d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_DOF1d::fep_DOF1d()
    : myType(fep_DOF1d_NULL)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_DOF1d::fep_DOF1d(const Standard_Integer theNode,
                     const fep_TypeOfDOF1d theType)
    : myNode(theNode),
    myType(theType)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_DOF1d::~fep_DOF1d()
{

}

// ============================================================================
/*!
 *  \brief IsValid()
*/
// ============================================================================
Standard_Boolean fep_DOF1d::IsValid() const
{
    return (myType != fep_DOF1d_NULL);
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Standard_Integer fep_DOF1d::Node() const
{
    return myNode;
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void fep_DOF1d::SetNode(const Standard_Integer theNode)
{
    myNode = theNode;
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void fep_DOF1d::SetType(const fep_TypeOfDOF1d theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
fep_TypeOfDOF1d fep_DOF1d::Type() const
{
    return myType;
}

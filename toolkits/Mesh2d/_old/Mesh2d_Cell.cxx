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
#include <Mesh2d_Cell.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_Cell::Mesh2d_Cell()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_Cell::Mesh2d_Cell(const Mesh2d_TypeOfCell theType,
                         const TColStd_SequenceOfInteger &theConnectivity)
    : myConnectivity(theConnectivity),
    myType(theType)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh2d_Cell::~Mesh2d_Cell()
{

}

// ============================================================================
/*!
 *  \brief Connectivity()
*/
// ============================================================================
const TColStd_SequenceOfInteger& Mesh2d_Cell::Connectivity() const
{
    return myConnectivity;
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Mesh2d_Cell::NbNodes() const
{
    return myConnectivity.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Standard_Integer Mesh2d_Cell::Node(const Standard_Integer theIndex) const
{
    return myConnectivity.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief SetConnectivity()
*/
// ============================================================================
void Mesh2d_Cell::SetConnectivity(const TColStd_SequenceOfInteger &theConnectivity)
{
    myConnectivity = theConnectivity;
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Mesh2d_Cell::SetNode(const Standard_Integer theIndex,
                          const Standard_Integer theNode)
{
    myConnectivity.SetValue(theIndex, theNode);
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void Mesh2d_Cell::SetType(const Mesh2d_TypeOfCell theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
Mesh2d_TypeOfCell Mesh2d_Cell::Type() const
{
    return myType;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh2d_Cell, Mesh2d_Object)
IMPLEMENT_STANDARD_RTTIEXT(Mesh2d_Cell, Mesh2d_Object)

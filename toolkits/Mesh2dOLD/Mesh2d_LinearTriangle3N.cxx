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
#include <Mesh2d_LinearTriangle3N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_LinearTriangle3N::Mesh2d_LinearTriangle3N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_LinearTriangle3N::Mesh2d_LinearTriangle3N(const Standard_Integer theNode1,
                                                 const Standard_Integer theNode2,
                                                 const Standard_Integer theNode3)
    : myNode1(theNode1), myNode2(theNode2), myNode3(theNode3)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh2d_LinearTriangle3N::~Mesh2d_LinearTriangle3N()
{

}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer Mesh2d_LinearTriangle3N::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer Mesh2d_LinearTriangle3N::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer Mesh2d_LinearTriangle3N::Node3() const
{
    return myNode3;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void Mesh2d_LinearTriangle3N::SetNode1(const Standard_Integer theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void Mesh2d_LinearTriangle3N::SetNode2(const Standard_Integer theNode2)
{
    myNode2 = theNode2;
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void Mesh2d_LinearTriangle3N::SetNode3(const Standard_Integer theNode3)
{
    myNode3 = theNode3;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
MeshAbs_TypeOfCell Mesh2d_LinearTriangle3N::Type() const
{
    return MeshAbs_LinearTriangle3N;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh2d_LinearTriangle3N, Mesh2d_Cell)
IMPLEMENT_STANDARD_RTTIEXT(Mesh2d_LinearTriangle3N, Mesh2d_Cell)

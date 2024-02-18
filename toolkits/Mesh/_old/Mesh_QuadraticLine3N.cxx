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
#include <Mesh_QuadraticLine3N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_QuadraticLine3N::Mesh_QuadraticLine3N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_QuadraticLine3N::Mesh_QuadraticLine3N(const mp_QuadraticLine3N& theConnectivity)
    : myConnectivity(theConnectivity)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh_QuadraticLine3N::~Mesh_QuadraticLine3N()
{

}

// ============================================================================
/*!
 *  \brief Connectivity()
*/
// ============================================================================
const mp_QuadraticLine3N& Mesh_QuadraticLine3N::Connectivity() const
{
    return myConnectivity;
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticLine3N::Node1() const
{
    return myConnectivity.Node1();
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticLine3N::Node2() const
{
    return myConnectivity.Node2();
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticLine3N::Node3() const
{
    return myConnectivity.Node3();
}

// ============================================================================
/*!
 *  \brief SetConnectivity()
*/
// ============================================================================
void Mesh_QuadraticLine3N::SetConnectivity(const mp_QuadraticLine3N &theConnectivity)
{
    myConnectivity = theConnectivity;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void Mesh_QuadraticLine3N::SetNode1(const Standard_Integer theNode1)
{
    myConnectivity.SetNode1(theNode1);
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void Mesh_QuadraticLine3N::SetNode2(const Standard_Integer theNode2)
{
    myConnectivity.SetNode2(theNode2);
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void Mesh_QuadraticLine3N::SetNode3(const Standard_Integer theNode3)
{
    myConnectivity.SetNode3(theNode3);
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh_QuadraticLine3N, Mesh_Cell)
IMPLEMENT_STANDARD_RTTIEXT(Mesh_QuadraticLine3N, Mesh_Cell)

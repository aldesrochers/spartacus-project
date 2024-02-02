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
#include <Mesh1d_LinearLine2N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_LinearLine2N::Mesh1d_LinearLine2N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_LinearLine2N::Mesh1d_LinearLine2N(const Standard_Integer theNode1,
                                         const Standard_Integer theNode2)
{
    myConnectivity.SetNode1(theNode1);
    myConnectivity.SetNode2(theNode2);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_LinearLine2N::Mesh1d_LinearLine2N(const mp_LinearLine2N& theConnectivity)
    : myConnectivity(theConnectivity)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh1d_LinearLine2N::~Mesh1d_LinearLine2N()
{

}

// ============================================================================
/*!
 *  \brief Connectivity()
*/
// ============================================================================
const mp_LinearLine2N& Mesh1d_LinearLine2N::Connectivity() const
{
    return myConnectivity;
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer Mesh1d_LinearLine2N::Node1() const
{
    return myConnectivity.Node1();
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer Mesh1d_LinearLine2N::Node2() const
{
    return myConnectivity.Node2();
}

// ============================================================================
/*!
 *  \brief SetConnectivity()
*/
// ============================================================================
void Mesh1d_LinearLine2N::SetConnectivity(const mp_LinearLine2N &theConnectivity)
{
    myConnectivity = theConnectivity;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void Mesh1d_LinearLine2N::SetNode1(const Standard_Integer theNode1)
{
    myConnectivity.SetNode1(theNode1);
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void Mesh1d_LinearLine2N::SetNode2(const Standard_Integer theNode2)
{
    myConnectivity.SetNode2(theNode2);
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh1d_LinearLine2N, Mesh1d_Cell)
IMPLEMENT_STANDARD_RTTIEXT(Mesh1d_LinearLine2N, Mesh1d_Cell)

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
#include <mp_LinearLine2N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_LinearLine2N::mp_LinearLine2N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_LinearLine2N::mp_LinearLine2N(const Standard_Integer theNode1,
                                 const Standard_Integer theNode2)
    : myNode1(theNode1), myNode2(theNode2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_LinearLine2N::~mp_LinearLine2N()
{

}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
mp_Edge2N mp_LinearLine2N::Edge() const
{
    return mp_Edge2N(myNode1, myNode2);
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer mp_LinearLine2N::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer mp_LinearLine2N::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_LinearLine2N::SetNode1(const Standard_Integer theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_LinearLine2N::SetNode2(const Standard_Integer theNode2)
{
    myNode2 = theNode2;
}


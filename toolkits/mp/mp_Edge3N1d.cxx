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
#include <mp_Edge3N1d.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_Edge3N1d::mp_Edge3N1d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_Edge3N1d::mp_Edge3N1d(const mp_Node1d& theNode1,
                         const mp_Node1d& theNode2)
    : myNode1(theNode1),
    myNode2(theNode2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_Edge3N1d::~mp_Edge3N1d()
{

}

// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real mp_Edge3N1d::Length() const
{
    return myNode1.Distance(myNode2);
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
const mp_Node1d& mp_Edge3N1d::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
const mp_Node1d& mp_Edge3N1d::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
const mp_Node1d& mp_Edge3N1d::Node3() const
{
    Standard_Real X = myNode1.X() + (myNode2.X() - myNode1.X())/2.;
    const mp_Node1d& aNode = mp_Node1d(X);
    return aNode;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_Edge3N1d::SetNode1(const mp_Node1d &theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_Edge3N1d::SetNode2(const mp_Node1d &theNode2)
{
    myNode2 = theNode2;
}



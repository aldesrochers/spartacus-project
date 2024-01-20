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
#include <mp_Edge2N2d.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_Edge2N2d::mp_Edge2N2d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_Edge2N2d::mp_Edge2N2d(const mp_Node2d& theNode1,
                         const mp_Node2d& theNode2)
    : myNode1(theNode1),
    myNode2(theNode2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_Edge2N2d::~mp_Edge2N2d()
{

}

// ============================================================================
/*!
 *  \brief Direction()
*/
// ============================================================================
gp_Dir2d  mp_Edge2N2d::Direction() const
{
    gp_Vec2d aVec(myNode1.Point(), myNode2.Point());
    return gp_Dir2d(aVec);
}

// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real mp_Edge2N2d::Length() const
{
    return myNode1.Distance(myNode2);
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
const mp_Node2d& mp_Edge2N2d::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
const mp_Node2d& mp_Edge2N2d::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_Edge2N2d::SetNode1(const mp_Node2d &theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_Edge2N2d::SetNode2(const mp_Node2d &theNode2)
{
    myNode2 = theNode2;
}



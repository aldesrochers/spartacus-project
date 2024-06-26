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
#include <mp_LinearQuadrangle4N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_LinearQuadrangle4N::mp_LinearQuadrangle4N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_LinearQuadrangle4N::mp_LinearQuadrangle4N(const Standard_Integer theNode1,
                                             const Standard_Integer theNode2,
                                             const Standard_Integer theNode3,
                                             const Standard_Integer theNode4)
    : myQuadrangle(theNode1, theNode2, theNode3, theNode4)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_LinearQuadrangle4N::~mp_LinearQuadrangle4N()
{

}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer mp_LinearQuadrangle4N::Node1() const
{
    return myQuadrangle.Node1();
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer mp_LinearQuadrangle4N::Node2() const
{
    return myQuadrangle.Node2();
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer mp_LinearQuadrangle4N::Node3() const
{
    return myQuadrangle.Node3();
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
Standard_Integer mp_LinearQuadrangle4N::Node4() const
{
    return myQuadrangle.Node4();
}

// ============================================================================
/*!
 *  \brief Quadrangle()
*/
// ============================================================================
const mp_Quadrangle& mp_LinearQuadrangle4N::Quadrangle() const
{
    return myQuadrangle;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_LinearQuadrangle4N::SetNode1(const Standard_Integer theNode1)
{
    myQuadrangle.SetNode1(theNode1);
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_LinearQuadrangle4N::SetNode2(const Standard_Integer theNode2)
{
    myQuadrangle.SetNode2(theNode2);
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void mp_LinearQuadrangle4N::SetNode3(const Standard_Integer theNode3)
{
    myQuadrangle.SetNode3(theNode3);
}

// ============================================================================
/*!
 *  \brief SetNode4()
*/
// ============================================================================
void mp_LinearQuadrangle4N::SetNode4(const Standard_Integer theNode4)
{
    myQuadrangle.SetNode4(theNode4);
}


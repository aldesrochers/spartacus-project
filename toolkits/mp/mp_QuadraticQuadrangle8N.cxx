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
#include <mp_QuadraticQuadrangle8N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_QuadraticQuadrangle8N::mp_QuadraticQuadrangle8N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_QuadraticQuadrangle8N::mp_QuadraticQuadrangle8N(const Standard_Integer theNode1,
                                                   const Standard_Integer theNode2,
                                                   const Standard_Integer theNode3,
                                                   const Standard_Integer theNode4,
                                                   const Standard_Integer theNode5,
                                                   const Standard_Integer theNode6,
                                                   const Standard_Integer theNode7,
                                                   const Standard_Integer theNode8)
    : myNode1(theNode1), myNode2(theNode2), myNode3(theNode3), myNode4(theNode4),
    myNode5(theNode5), myNode6(theNode6), myNode7(theNode7), myNode8(theNode8)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_QuadraticQuadrangle8N::~mp_QuadraticQuadrangle8N()
{

}

// ============================================================================
/*!
 *  \brief Face()
*/
// ============================================================================
mp_QuadrangleFace8N mp_QuadraticQuadrangle8N::Face() const
{
    return mp_QuadrangleFace8N(myNode1, myNode2, myNode3, myNode4,
                               myNode5, myNode6, myNode7, myNode8);
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer mp_QuadraticQuadrangle8N::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer mp_QuadraticQuadrangle8N::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer mp_QuadraticQuadrangle8N::Node3() const
{
    return myNode3;
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
Standard_Integer mp_QuadraticQuadrangle8N::Node4() const
{
    return myNode4;
}

// ============================================================================
/*!
 *  \brief Node5()
*/
// ============================================================================
Standard_Integer mp_QuadraticQuadrangle8N::Node5() const
{
    return myNode5;
}

// ============================================================================
/*!
 *  \brief Node6()
*/
// ============================================================================
Standard_Integer mp_QuadraticQuadrangle8N::Node6() const
{
    return myNode6;
}

// ============================================================================
/*!
 *  \brief Node7()
*/
// ============================================================================
Standard_Integer mp_QuadraticQuadrangle8N::Node7() const
{
    return myNode7;
}

// ============================================================================
/*!
 *  \brief Node8()
*/
// ============================================================================
Standard_Integer mp_QuadraticQuadrangle8N::Node8() const
{
    return myNode8;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_QuadraticQuadrangle8N::SetNode1(const Standard_Integer theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_QuadraticQuadrangle8N::SetNode2(const Standard_Integer theNode2)
{
    myNode2 = theNode2;
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void mp_QuadraticQuadrangle8N::SetNode3(const Standard_Integer theNode3)
{
    myNode3 = theNode3;
}

// ============================================================================
/*!
 *  \brief SetNode4()
*/
// ============================================================================
void mp_QuadraticQuadrangle8N::SetNode4(const Standard_Integer theNode4)
{
    myNode4 = theNode4;
}

// ============================================================================
/*!
 *  \brief SetNode5()
*/
// ============================================================================
void mp_QuadraticQuadrangle8N::SetNode5(const Standard_Integer theNode5)
{
    myNode5 = theNode5;
}

// ============================================================================
/*!
 *  \brief SetNode6()
*/
// ============================================================================
void mp_QuadraticQuadrangle8N::SetNode6(const Standard_Integer theNode6)
{
    myNode6 = theNode6;
}

// ============================================================================
/*!
 *  \brief SetNode7()
*/
// ============================================================================
void mp_QuadraticQuadrangle8N::SetNode7(const Standard_Integer theNode7)
{
    myNode7 = theNode7;
}

// ============================================================================
/*!
 *  \brief SetNode8()
*/
// ============================================================================
void mp_QuadraticQuadrangle8N::SetNode8(const Standard_Integer theNode8)
{
    myNode8 = theNode8;
}



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
#include <mp_QuadraticPentahedron15N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_QuadraticPentahedron15N::mp_QuadraticPentahedron15N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_QuadraticPentahedron15N::mp_QuadraticPentahedron15N(const Standard_Integer theNode1,
                                                       const Standard_Integer theNode2,
                                                       const Standard_Integer theNode3,
                                                       const Standard_Integer theNode4,
                                                       const Standard_Integer theNode5,
                                                       const Standard_Integer theNode6,
                                                       const Standard_Integer theNode7,
                                                       const Standard_Integer theNode8,
                                                       const Standard_Integer theNode9,
                                                       const Standard_Integer theNode10,
                                                       const Standard_Integer theNode11,
                                                       const Standard_Integer theNode12,
                                                       const Standard_Integer theNode13,
                                                       const Standard_Integer theNode14,
                                                       const Standard_Integer theNode15)
    : myNode1(theNode1), myNode2(theNode2), myNode3(theNode3), myNode4(theNode4),
    myNode5(theNode5), myNode6(theNode6), myNode7(theNode7), myNode8(theNode8),
    myNode9(theNode9), myNode10(theNode10), myNode11(theNode11), myNode12(theNode12),
    myNode13(theNode13), myNode14(theNode14), myNode15(theNode15)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_QuadraticPentahedron15N::~mp_QuadraticPentahedron15N()
{

}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node3() const
{
    return myNode3;
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node4() const
{
    return myNode4;
}

// ============================================================================
/*!
 *  \brief Node5()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node5() const
{
    return myNode5;
}

// ============================================================================
/*!
 *  \brief Node6()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node6() const
{
    return myNode6;
}

// ============================================================================
/*!
 *  \brief Node7()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node7() const
{
    return myNode7;
}

// ============================================================================
/*!
 *  \brief Node8()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node8() const
{
    return myNode8;
}

// ============================================================================
/*!
 *  \brief Node9()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node9() const
{
    return myNode9;
}

// ============================================================================
/*!
 *  \brief Node10()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node10() const
{
    return myNode10;
}

// ============================================================================
/*!
 *  \brief Node11()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node11() const
{
    return myNode11;
}

// ============================================================================
/*!
 *  \brief Node12()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node12() const
{
    return myNode12;
}

// ============================================================================
/*!
 *  \brief Node13()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node13() const
{
    return myNode13;
}

// ============================================================================
/*!
 *  \brief Node14()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node14() const
{
    return myNode14;
}

// ============================================================================
/*!
 *  \brief Node15()
*/
// ============================================================================
Standard_Integer mp_QuadraticPentahedron15N::Node15() const
{
    return myNode15;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode1(const Standard_Integer theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode2(const Standard_Integer theNode2)
{
    myNode2 = theNode2;
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode3(const Standard_Integer theNode3)
{
    myNode3 = theNode3;
}

// ============================================================================
/*!
 *  \brief SetNode4()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode4(const Standard_Integer theNode4)
{
    myNode4 = theNode4;
}

// ============================================================================
/*!
 *  \brief SetNode5()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode5(const Standard_Integer theNode5)
{
    myNode5 = theNode5;
}

// ============================================================================
/*!
 *  \brief SetNode6()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode6(const Standard_Integer theNode6)
{
    myNode6 = theNode6;
}

// ============================================================================
/*!
 *  \brief SetNode7()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode7(const Standard_Integer theNode7)
{
    myNode7 = theNode7;
}

// ============================================================================
/*!
 *  \brief SetNode8()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode8(const Standard_Integer theNode8)
{
    myNode8 = theNode8;
}

// ============================================================================
/*!
 *  \brief SetNode9()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode9(const Standard_Integer theNode9)
{
    myNode9 = theNode9;
}

// ============================================================================
/*!
 *  \brief SetNode10()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode10(const Standard_Integer theNode10)
{
    myNode10 = theNode10;
}

// ============================================================================
/*!
 *  \brief SetNode11()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode11(const Standard_Integer theNode11)
{
    myNode11 = theNode11;
}

// ============================================================================
/*!
 *  \brief SetNode12()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode12(const Standard_Integer theNode12)
{
    myNode12 = theNode12;
}

// ============================================================================
/*!
 *  \brief SetNode13()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode13(const Standard_Integer theNode13)
{
    myNode13 = theNode13;
}

// ============================================================================
/*!
 *  \brief SetNode14()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode14(const Standard_Integer theNode14)
{
    myNode14 = theNode14;
}

// ============================================================================
/*!
 *  \brief SetNode15()
*/
// ============================================================================
void mp_QuadraticPentahedron15N::SetNode15(const Standard_Integer theNode15)
{
    myNode15 = theNode15;
}




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
#include <Mesh_QuadraticHexahedron27N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_QuadraticHexahedron27N::Mesh_QuadraticHexahedron27N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_QuadraticHexahedron27N::Mesh_QuadraticHexahedron27N(const mp_QuadraticHexahedron27N& theConnectivity)
    : myConnectivity(theConnectivity)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh_QuadraticHexahedron27N::~Mesh_QuadraticHexahedron27N()
{

}

// ============================================================================
/*!
 *  \brief Connectivity()
*/
// ============================================================================
const mp_QuadraticHexahedron27N& Mesh_QuadraticHexahedron27N::Connectivity() const
{
    return myConnectivity;
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node1() const
{
    return myConnectivity.Node1();
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node2() const
{
    return myConnectivity.Node2();
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node3() const
{
    return myConnectivity.Node3();
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node4() const
{
    return myConnectivity.Node4();
}

// ============================================================================
/*!
 *  \brief Node5()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node5() const
{
    return myConnectivity.Node5();
}

// ============================================================================
/*!
 *  \brief Node6()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node6() const
{
    return myConnectivity.Node6();
}

// ============================================================================
/*!
 *  \brief Node7()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node7() const
{
    return myConnectivity.Node7();
}

// ============================================================================
/*!
 *  \brief Node8()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node8() const
{
    return myConnectivity.Node8();
}

// ============================================================================
/*!
 *  \brief Node9()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node9() const
{
    return myConnectivity.Node9();
}

// ============================================================================
/*!
 *  \brief Node10()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node10() const
{
    return myConnectivity.Node10();
}

// ============================================================================
/*!
 *  \brief Node11()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node11() const
{
    return myConnectivity.Node11();
}

// ============================================================================
/*!
 *  \brief Node12()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node12() const
{
    return myConnectivity.Node12();
}

// ============================================================================
/*!
 *  \brief Node13()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node13() const
{
    return myConnectivity.Node13();
}

// ============================================================================
/*!
 *  \brief Node14()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node14() const
{
    return myConnectivity.Node14();
}

// ============================================================================
/*!
 *  \brief Node15()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node15() const
{
    return myConnectivity.Node15();
}

// ============================================================================
/*!
 *  \brief Node16()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node16() const
{
    return myConnectivity.Node16();
}

// ============================================================================
/*!
 *  \brief Node17()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node17() const
{
    return myConnectivity.Node17();
}

// ============================================================================
/*!
 *  \brief Node18()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node18() const
{
    return myConnectivity.Node18();
}

// ============================================================================
/*!
 *  \brief Node19()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node19() const
{
    return myConnectivity.Node19();
}

// ============================================================================
/*!
 *  \brief Node20()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node20() const
{
    return myConnectivity.Node20();
}

// ============================================================================
/*!
 *  \brief Node21()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node21() const
{
    return myConnectivity.Node21();
}

// ============================================================================
/*!
 *  \brief Node22()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node22() const
{
    return myConnectivity.Node22();
}

// ============================================================================
/*!
 *  \brief Node23()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node23() const
{
    return myConnectivity.Node23();
}

// ============================================================================
/*!
 *  \brief Node24()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node24() const
{
    return myConnectivity.Node24();
}

// ============================================================================
/*!
 *  \brief Node25()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node25() const
{
    return myConnectivity.Node25();
}

// ============================================================================
/*!
 *  \brief Node26()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node26() const
{
    return myConnectivity.Node26();
}

// ============================================================================
/*!
 *  \brief Node27()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticHexahedron27N::Node27() const
{
    return myConnectivity.Node27();
}

// ============================================================================
/*!
 *  \brief SetConnectivity()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetConnectivity(const mp_QuadraticHexahedron27N &theConnectivity)
{
    myConnectivity = theConnectivity;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode1(const Standard_Integer theNode1)
{
    myConnectivity.SetNode1(theNode1);
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode2(const Standard_Integer theNode2)
{
    myConnectivity.SetNode2(theNode2);
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode3(const Standard_Integer theNode3)
{
    myConnectivity.SetNode3(theNode3);
}

// ============================================================================
/*!
 *  \brief SetNode4()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode4(const Standard_Integer theNode4)
{
    myConnectivity.SetNode4(theNode4);
}

// ============================================================================
/*!
 *  \brief SetNode5()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode5(const Standard_Integer theNode5)
{
    myConnectivity.SetNode5(theNode5);
}

// ============================================================================
/*!
 *  \brief SetNode6()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode6(const Standard_Integer theNode6)
{
    myConnectivity.SetNode6(theNode6);
}

// ============================================================================
/*!
 *  \brief SetNode7()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode7(const Standard_Integer theNode7)
{
    myConnectivity.SetNode7(theNode7);
}

// ============================================================================
/*!
 *  \brief SetNode8()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode8(const Standard_Integer theNode8)
{
    myConnectivity.SetNode8(theNode8);
}

// ============================================================================
/*!
 *  \brief SetNode9()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode9(const Standard_Integer theNode9)
{
    myConnectivity.SetNode9(theNode9);
}

// ============================================================================
/*!
 *  \brief SetNode10()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode10(const Standard_Integer theNode10)
{
    myConnectivity.SetNode10(theNode10);
}

// ============================================================================
/*!
 *  \brief SetNode11()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode11(const Standard_Integer theNode11)
{
    myConnectivity.SetNode11(theNode11);
}

// ============================================================================
/*!
 *  \brief SetNode12()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode12(const Standard_Integer theNode12)
{
    myConnectivity.SetNode12(theNode12);
}

// ============================================================================
/*!
 *  \brief SetNode13()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode13(const Standard_Integer theNode13)
{
    myConnectivity.SetNode13(theNode13);
}

// ============================================================================
/*!
 *  \brief SetNode14()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode14(const Standard_Integer theNode14)
{
    myConnectivity.SetNode14(theNode14);
}

// ============================================================================
/*!
 *  \brief SetNode15()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode15(const Standard_Integer theNode15)
{
    myConnectivity.SetNode15(theNode15);
}

// ============================================================================
/*!
 *  \brief SetNode16()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode16(const Standard_Integer theNode16)
{
    myConnectivity.SetNode16(theNode16);
}

// ============================================================================
/*!
 *  \brief SetNode17()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode17(const Standard_Integer theNode17)
{
    myConnectivity.SetNode17(theNode17);
}

// ============================================================================
/*!
 *  \brief SetNode18()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode18(const Standard_Integer theNode18)
{
    myConnectivity.SetNode18(theNode18);
}

// ============================================================================
/*!
 *  \brief SetNode19()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode19(const Standard_Integer theNode19)
{
    myConnectivity.SetNode19(theNode19);
}

// ============================================================================
/*!
 *  \brief SetNode20()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode20(const Standard_Integer theNode20)
{
    myConnectivity.SetNode20(theNode20);
}

// ============================================================================
/*!
 *  \brief SetNode21()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode21(const Standard_Integer theNode21)
{
    myConnectivity.SetNode21(theNode21);
}

// ============================================================================
/*!
 *  \brief SetNode22()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode22(const Standard_Integer theNode22)
{
    myConnectivity.SetNode22(theNode22);
}

// ============================================================================
/*!
 *  \brief SetNode23()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode23(const Standard_Integer theNode23)
{
    myConnectivity.SetNode23(theNode23);
}

// ============================================================================
/*!
 *  \brief SetNode24()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode24(const Standard_Integer theNode24)
{
    myConnectivity.SetNode24(theNode24);
}

// ============================================================================
/*!
 *  \brief SetNode25()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode25(const Standard_Integer theNode25)
{
    myConnectivity.SetNode25(theNode25);
}

// ============================================================================
/*!
 *  \brief SetNode26()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode26(const Standard_Integer theNode26)
{
    myConnectivity.SetNode26(theNode26);
}

// ============================================================================
/*!
 *  \brief SetNode27()
*/
// ============================================================================
void Mesh_QuadraticHexahedron27N::SetNode27(const Standard_Integer theNode27)
{
    myConnectivity.SetNode27(theNode27);
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh_QuadraticHexahedron27N, Mesh_Cell)
IMPLEMENT_STANDARD_RTTIEXT(Mesh_QuadraticHexahedron27N, Mesh_Cell)

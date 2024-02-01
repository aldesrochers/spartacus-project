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
#include <Mesh_QuadraticPentahedron18N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_QuadraticPentahedron18N::Mesh_QuadraticPentahedron18N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_QuadraticPentahedron18N::Mesh_QuadraticPentahedron18N(const mp_QuadraticPentahedron18N& theConnectivity)
    : myConnectivity(theConnectivity)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh_QuadraticPentahedron18N::~Mesh_QuadraticPentahedron18N()
{

}

// ============================================================================
/*!
 *  \brief Connectivity()
*/
// ============================================================================
const mp_QuadraticPentahedron18N& Mesh_QuadraticPentahedron18N::Connectivity() const
{
    return myConnectivity;
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node1() const
{
    return myConnectivity.Node1();
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node2() const
{
    return myConnectivity.Node2();
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node3() const
{
    return myConnectivity.Node3();
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node4() const
{
    return myConnectivity.Node4();
}

// ============================================================================
/*!
 *  \brief Node5()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node5() const
{
    return myConnectivity.Node5();
}

// ============================================================================
/*!
 *  \brief Node6()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node6() const
{
    return myConnectivity.Node6();
}

// ============================================================================
/*!
 *  \brief Node7()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node7() const
{
    return myConnectivity.Node7();
}

// ============================================================================
/*!
 *  \brief Node8()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node8() const
{
    return myConnectivity.Node8();
}

// ============================================================================
/*!
 *  \brief Node9()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node9() const
{
    return myConnectivity.Node9();
}

// ============================================================================
/*!
 *  \brief Node10()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node10() const
{
    return myConnectivity.Node10();
}

// ============================================================================
/*!
 *  \brief Node11()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node11() const
{
    return myConnectivity.Node11();
}

// ============================================================================
/*!
 *  \brief Node12()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node12() const
{
    return myConnectivity.Node12();
}

// ============================================================================
/*!
 *  \brief Node13()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node13() const
{
    return myConnectivity.Node13();
}

// ============================================================================
/*!
 *  \brief Node14()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node14() const
{
    return myConnectivity.Node14();
}

// ============================================================================
/*!
 *  \brief Node15()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node15() const
{
    return myConnectivity.Node15();
}

// ============================================================================
/*!
 *  \brief Node16()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node16() const
{
    return myConnectivity.Node16();
}

// ============================================================================
/*!
 *  \brief Node17()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node17() const
{
    return myConnectivity.Node17();
}

// ============================================================================
/*!
 *  \brief Node18()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticPentahedron18N::Node18() const
{
    return myConnectivity.Node18();
}

// ============================================================================
/*!
 *  \brief SetConnectivity()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetConnectivity(const mp_QuadraticPentahedron18N &theConnectivity)
{
    myConnectivity = theConnectivity;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode1(const Standard_Integer theNode1)
{
    myConnectivity.SetNode1(theNode1);
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode2(const Standard_Integer theNode2)
{
    myConnectivity.SetNode2(theNode2);
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode3(const Standard_Integer theNode3)
{
    myConnectivity.SetNode3(theNode3);
}

// ============================================================================
/*!
 *  \brief SetNode4()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode4(const Standard_Integer theNode4)
{
    myConnectivity.SetNode4(theNode4);
}

// ============================================================================
/*!
 *  \brief SetNode5()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode5(const Standard_Integer theNode5)
{
    myConnectivity.SetNode5(theNode5);
}

// ============================================================================
/*!
 *  \brief SetNode6()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode6(const Standard_Integer theNode6)
{
    myConnectivity.SetNode6(theNode6);
}

// ============================================================================
/*!
 *  \brief SetNode7()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode7(const Standard_Integer theNode7)
{
    myConnectivity.SetNode7(theNode7);
}

// ============================================================================
/*!
 *  \brief SetNode8()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode8(const Standard_Integer theNode8)
{
    myConnectivity.SetNode8(theNode8);
}

// ============================================================================
/*!
 *  \brief SetNode9()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode9(const Standard_Integer theNode9)
{
    myConnectivity.SetNode9(theNode9);
}

// ============================================================================
/*!
 *  \brief SetNode10()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode10(const Standard_Integer theNode10)
{
    myConnectivity.SetNode10(theNode10);
}

// ============================================================================
/*!
 *  \brief SetNode11()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode11(const Standard_Integer theNode11)
{
    myConnectivity.SetNode11(theNode11);
}

// ============================================================================
/*!
 *  \brief SetNode12()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode12(const Standard_Integer theNode12)
{
    myConnectivity.SetNode12(theNode12);
}

// ============================================================================
/*!
 *  \brief SetNode13()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode13(const Standard_Integer theNode13)
{
    myConnectivity.SetNode13(theNode13);
}

// ============================================================================
/*!
 *  \brief SetNode14()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode14(const Standard_Integer theNode14)
{
    myConnectivity.SetNode14(theNode14);
}

// ============================================================================
/*!
 *  \brief SetNode15()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode15(const Standard_Integer theNode15)
{
    myConnectivity.SetNode15(theNode15);
}

// ============================================================================
/*!
 *  \brief SetNode16()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode16(const Standard_Integer theNode16)
{
    myConnectivity.SetNode16(theNode16);
}

// ============================================================================
/*!
 *  \brief SetNode17()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode17(const Standard_Integer theNode17)
{
    myConnectivity.SetNode17(theNode17);
}

// ============================================================================
/*!
 *  \brief SetNode18()
*/
// ============================================================================
void Mesh_QuadraticPentahedron18N::SetNode18(const Standard_Integer theNode18)
{
    myConnectivity.SetNode18(theNode18);
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh_QuadraticPentahedron18N, Mesh_Cell)
IMPLEMENT_STANDARD_RTTIEXT(Mesh_QuadraticPentahedron18N, Mesh_Cell)

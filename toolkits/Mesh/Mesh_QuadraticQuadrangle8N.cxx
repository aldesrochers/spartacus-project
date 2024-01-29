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
#include <Mesh_QuadraticQuadrangle8N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_QuadraticQuadrangle8N::Mesh_QuadraticQuadrangle8N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_QuadraticQuadrangle8N::Mesh_QuadraticQuadrangle8N(const mp_QuadraticQuadrangle8N& theConnectivity)
    : myConnectivity(theConnectivity)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh_QuadraticQuadrangle8N::~Mesh_QuadraticQuadrangle8N()
{

}

// ============================================================================
/*!
 *  \brief Connectivity()
*/
// ============================================================================
const mp_QuadraticQuadrangle8N& Mesh_QuadraticQuadrangle8N::Connectivity() const
{
    return myConnectivity;
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticQuadrangle8N::Node1() const
{
    return myConnectivity.Node1();
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticQuadrangle8N::Node2() const
{
    return myConnectivity.Node2();
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticQuadrangle8N::Node3() const
{
    return myConnectivity.Node3();
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticQuadrangle8N::Node4() const
{
    return myConnectivity.Node4();
}

// ============================================================================
/*!
 *  \brief Node5()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticQuadrangle8N::Node5() const
{
    return myConnectivity.Node5();
}

// ============================================================================
/*!
 *  \brief Node6()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticQuadrangle8N::Node6() const
{
    return myConnectivity.Node6();
}

// ============================================================================
/*!
 *  \brief Node7()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticQuadrangle8N::Node7() const
{
    return myConnectivity.Node7();
}

// ============================================================================
/*!
 *  \brief Node8()
*/
// ============================================================================
Standard_Integer Mesh_QuadraticQuadrangle8N::Node8() const
{
    return myConnectivity.Node8();
}

// ============================================================================
/*!
 *  \brief SetConnectivity()
*/
// ============================================================================
void Mesh_QuadraticQuadrangle8N::SetConnectivity(const mp_QuadraticQuadrangle8N &theConnectivity)
{
    myConnectivity = theConnectivity;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void Mesh_QuadraticQuadrangle8N::SetNode1(const Standard_Integer theNode1)
{
    myConnectivity.SetNode1(theNode1);
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void Mesh_QuadraticQuadrangle8N::SetNode2(const Standard_Integer theNode2)
{
    myConnectivity.SetNode2(theNode2);
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void Mesh_QuadraticQuadrangle8N::SetNode3(const Standard_Integer theNode3)
{
    myConnectivity.SetNode3(theNode3);
}

// ============================================================================
/*!
 *  \brief SetNode4()
*/
// ============================================================================
void Mesh_QuadraticQuadrangle8N::SetNode4(const Standard_Integer theNode4)
{
    myConnectivity.SetNode4(theNode4);
}

// ============================================================================
/*!
 *  \brief SetNode5()
*/
// ============================================================================
void Mesh_QuadraticQuadrangle8N::SetNode5(const Standard_Integer theNode5)
{
    myConnectivity.SetNode5(theNode5);
}

// ============================================================================
/*!
 *  \brief SetNode6()
*/
// ============================================================================
void Mesh_QuadraticQuadrangle8N::SetNode6(const Standard_Integer theNode6)
{
    myConnectivity.SetNode6(theNode6);
}

// ============================================================================
/*!
 *  \brief SetNode7()
*/
// ============================================================================
void Mesh_QuadraticQuadrangle8N::SetNode7(const Standard_Integer theNode7)
{
    myConnectivity.SetNode7(theNode7);
}

// ============================================================================
/*!
 *  \brief SetNode8()
*/
// ============================================================================
void Mesh_QuadraticQuadrangle8N::SetNode8(const Standard_Integer theNode8)
{
    myConnectivity.SetNode8(theNode8);
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
MeshAbs_TypeOfCell Mesh_QuadraticQuadrangle8N::Type() const
{
    return MeshAbs_QuadraticQuadrangle8N;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh_QuadraticQuadrangle8N, Mesh_Cell)
IMPLEMENT_STANDARD_RTTIEXT(Mesh_QuadraticQuadrangle8N, Mesh_Cell)

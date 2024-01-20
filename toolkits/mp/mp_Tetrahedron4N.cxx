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
#include <mp_Tetrahedron4N.hxx>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_Tetrahedron4N::mp_Tetrahedron4N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_Tetrahedron4N::mp_Tetrahedron4N(const mp_Node& theNode1,
                                   const mp_Node& theNode2,
                                   const mp_Node& theNode3,
                                   const mp_Node& theNode4)
    : myNode1(theNode1),
    myNode2(theNode2),
    myNode3(theNode3),
    myNode4(theNode4)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_Tetrahedron4N::~mp_Tetrahedron4N()
{

}

// ============================================================================
/*!
 *  \brief Face1()
*/
// ============================================================================
mp_TriangularFace3N mp_Tetrahedron4N::Face1() const
{
    return mp_TriangularFace3N(myNode1, myNode3, myNode2);
}

// ============================================================================
/*!
 *  \brief Face2()
*/
// ============================================================================
mp_TriangularFace3N mp_Tetrahedron4N::Face2() const
{
    return mp_TriangularFace3N(myNode1, myNode2, myNode4);
}

// ============================================================================
/*!
 *  \brief Face3()
*/
// ============================================================================
mp_TriangularFace3N mp_Tetrahedron4N::Face3() const
{
    return mp_TriangularFace3N(myNode2, myNode3, myNode4);
}

// ============================================================================
/*!
 *  \brief Face4()
*/
// ============================================================================
mp_TriangularFace3N mp_Tetrahedron4N::Face4() const
{
    return mp_TriangularFace3N(myNode3, myNode1, myNode4);
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
const mp_Node& mp_Tetrahedron4N::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
const mp_Node& mp_Tetrahedron4N::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
const mp_Node& mp_Tetrahedron4N::Node3() const
{
    return myNode3;
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
const mp_Node& mp_Tetrahedron4N::Node4() const
{
    return myNode4;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_Tetrahedron4N::SetNode1(const mp_Node &theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_Tetrahedron4N::SetNode2(const mp_Node &theNode2)
{
    myNode2 = theNode2;
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void mp_Tetrahedron4N::SetNode3(const mp_Node &theNode3)
{
    myNode3 = theNode3;
}

// ============================================================================
/*!
 *  \brief SetNode4()
*/
// ============================================================================
void mp_Tetrahedron4N::SetNode4(const mp_Node &theNode4)
{
    myNode4 = theNode4;
}





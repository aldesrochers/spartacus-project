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
#include <mp_TriangularFace3N.hxx>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_TriangularFace3N::mp_TriangularFace3N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_TriangularFace3N::mp_TriangularFace3N(const mp_Node& theNode1,
                                         const mp_Node& theNode2,
                                         const mp_Node& theNode3)
    : myNode1(theNode1),
    myNode2(theNode2),
    myNode3(theNode3)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_TriangularFace3N::~mp_TriangularFace3N()
{

}

// ============================================================================
/*!
 *  \brief Edge1()
*/
// ============================================================================
mp_Edge2N mp_TriangularFace3N::Edge1() const
{
    return mp_Edge2N(myNode1, myNode2);
}

// ============================================================================
/*!
 *  \brief Edge2()
*/
// ============================================================================
mp_Edge2N mp_TriangularFace3N::Edge2() const
{
    return mp_Edge2N(myNode2, myNode3);
}

// ============================================================================
/*!
 *  \brief Edge3()
*/
// ============================================================================
mp_Edge2N mp_TriangularFace3N::Edge3() const
{
    return mp_Edge2N(myNode3, myNode1);
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
const mp_Node& mp_TriangularFace3N::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
const mp_Node& mp_TriangularFace3N::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
const mp_Node& mp_TriangularFace3N::Node3() const
{
    return myNode3;
}

// ============================================================================
/*!
 *  \brief Normal()
*/
// ============================================================================
gp_Dir mp_TriangularFace3N::Normal() const
{
    return Edge1().Direction().Crossed(Edge2().Direction());
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_TriangularFace3N::SetNode1(const mp_Node &theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_TriangularFace3N::SetNode2(const mp_Node &theNode2)
{
    myNode2 = theNode2;
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void mp_TriangularFace3N::SetNode3(const mp_Node &theNode3)
{
    myNode3 = theNode3;
}




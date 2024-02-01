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
#include <mp_TriangleFace6N.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_TriangleFace6N::mp_TriangleFace6N(const Standard_Integer theNode1,
                                     const Standard_Integer theNode2,
                                     const Standard_Integer theNode3,
                                     const Standard_Integer theNode4,
                                     const Standard_Integer theNode5,
                                     const Standard_Integer theNode6)
    : myNode1(theNode1),
    myNode2(theNode2),
    myNode3(theNode3),
    myNode4(theNode4),
    myNode5(theNode5),
    myNode6(theNode6)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_TriangleFace6N::~mp_TriangleFace6N()
{

}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer mp_TriangleFace6N::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer mp_TriangleFace6N::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer mp_TriangleFace6N::Node3() const
{
    return myNode3;
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
Standard_Integer mp_TriangleFace6N::Node4() const
{
    return myNode4;
}

// ============================================================================
/*!
 *  \brief Node5()
*/
// ============================================================================
Standard_Integer mp_TriangleFace6N::Node5() const
{
    return myNode5;
}

// ============================================================================
/*!
 *  \brief Node6()
*/
// ============================================================================
Standard_Integer mp_TriangleFace6N::Node6() const
{
    return myNode6;
}

// ============================================================================
/*!
 *  \brief Edge1()
*/
// ============================================================================
mp_Edge3N mp_TriangleFace6N::Edge1() const
{
    return mp_Edge3N(myNode1, myNode2, myNode4);
}

// ============================================================================
/*!
 *  \brief Edge2()
*/
// ============================================================================
mp_Edge3N mp_TriangleFace6N::Edge2() const
{
    return mp_Edge3N(myNode2, myNode3, myNode5);
}

// ============================================================================
/*!
 *  \brief Edge3()
*/
// ============================================================================
mp_Edge3N mp_TriangleFace6N::Edge3() const
{
    return mp_Edge3N(myNode3, myNode1, myNode6);
}



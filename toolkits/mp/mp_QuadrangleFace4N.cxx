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
#include <mp_QuadrangleFace4N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_QuadrangleFace4N::mp_QuadrangleFace4N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_QuadrangleFace4N::mp_QuadrangleFace4N(const Standard_Integer theNode1,
                                         const Standard_Integer theNode2,
                                         const Standard_Integer theNode3,
                                         const Standard_Integer theNode4)
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
mp_QuadrangleFace4N::~mp_QuadrangleFace4N()
{

}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer mp_QuadrangleFace4N::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer mp_QuadrangleFace4N::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer mp_QuadrangleFace4N::Node3() const
{
    return myNode3;
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
Standard_Integer mp_QuadrangleFace4N::Node4() const
{
    return myNode4;
}

// ============================================================================
/*!
 *  \brief Edge1()
*/
// ============================================================================
mp_Edge2N mp_QuadrangleFace4N::Edge1() const
{
    return mp_Edge2N(myNode1, myNode2);
}

// ============================================================================
/*!
 *  \brief Edge2()
*/
// ============================================================================
mp_Edge2N mp_QuadrangleFace4N::Edge2() const
{
    return mp_Edge2N(myNode2, myNode3);
}

// ============================================================================
/*!
 *  \brief Edge3()
*/
// ============================================================================
mp_Edge2N mp_QuadrangleFace4N::Edge3() const
{
    return mp_Edge2N(myNode3, myNode4);
}

// ============================================================================
/*!
 *  \brief Edge4()
*/
// ============================================================================
mp_Edge2N mp_QuadrangleFace4N::Edge4() const
{
    return mp_Edge2N(myNode4, myNode1);
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_QuadrangleFace4N::SetNode1(const Standard_Integer theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_QuadrangleFace4N::SetNode2(const Standard_Integer theNode2)
{
    myNode2 = theNode2;
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void mp_QuadrangleFace4N::SetNode3(const Standard_Integer theNode3)
{
    myNode3 = theNode3;
}

// ============================================================================
/*!
 *  \brief SetNode4()
*/
// ============================================================================
void mp_QuadrangleFace4N::SetNode4(const Standard_Integer theNode4)
{
    myNode4 = theNode4;
}

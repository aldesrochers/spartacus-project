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
#include <mp_LinearPyramid5N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_LinearPyramid5N::mp_LinearPyramid5N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_LinearPyramid5N::mp_LinearPyramid5N(const Standard_Integer theNode1,
                                       const Standard_Integer theNode2,
                                       const Standard_Integer theNode3,
                                       const Standard_Integer theNode4,
                                       const Standard_Integer theNode5)
    : myNode1(theNode1), myNode2(theNode2), myNode3(theNode3), myNode4(theNode4),
    myNode5(theNode5)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_LinearPyramid5N::~mp_LinearPyramid5N()
{

}

// ============================================================================
/*!
 *  \brief Face1()
*/
// ============================================================================
mp_QuadrangleFace4N mp_LinearPyramid5N::Face1() const
{
    return mp_QuadrangleFace4N(myNode1, myNode4, myNode3, myNode2);
}

// ============================================================================
/*!
 *  \brief Face2()
*/
// ============================================================================
mp_TriangleFace3N mp_LinearPyramid5N::Face2() const
{
    return mp_TriangleFace3N(myNode1, myNode2, myNode5);
}

// ============================================================================
/*!
 *  \brief Face3()
*/
// ============================================================================
mp_TriangleFace3N mp_LinearPyramid5N::Face3() const
{
    return mp_TriangleFace3N(myNode2, myNode3, myNode5);
}

// ============================================================================
/*!
 *  \brief Face4()
*/
// ============================================================================
mp_TriangleFace3N mp_LinearPyramid5N::Face4() const
{
    return mp_TriangleFace3N(myNode3, myNode4, myNode5);
}

// ============================================================================
/*!
 *  \brief Face5()
*/
// ============================================================================
mp_TriangleFace3N mp_LinearPyramid5N::Face5() const
{
    return mp_TriangleFace3N(myNode4, myNode1, myNode5);
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer mp_LinearPyramid5N::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer mp_LinearPyramid5N::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer mp_LinearPyramid5N::Node3() const
{
    return myNode3;
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
Standard_Integer mp_LinearPyramid5N::Node4() const
{
    return myNode4;
}

// ============================================================================
/*!
 *  \brief Node5()
*/
// ============================================================================
Standard_Integer mp_LinearPyramid5N::Node5() const
{
    return myNode5;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_LinearPyramid5N::SetNode1(const Standard_Integer theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_LinearPyramid5N::SetNode2(const Standard_Integer theNode2)
{
    myNode2 = theNode2;
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void mp_LinearPyramid5N::SetNode3(const Standard_Integer theNode3)
{
    myNode3 = theNode3;
}

// ============================================================================
/*!
 *  \brief SetNode4()
*/
// ============================================================================
void mp_LinearPyramid5N::SetNode4(const Standard_Integer theNode4)
{
    myNode4 = theNode4;
}

// ============================================================================
/*!
 *  \brief SetNode5()
*/
// ============================================================================
void mp_LinearPyramid5N::SetNode5(const Standard_Integer theNode5)
{
    myNode5 = theNode5;
}

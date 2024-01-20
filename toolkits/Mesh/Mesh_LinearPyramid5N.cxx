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
#include <Mesh_LinearPyramid5N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_LinearPyramid5N::Mesh_LinearPyramid5N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_LinearPyramid5N::Mesh_LinearPyramid5N(const Standard_Integer theNode1,
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
Mesh_LinearPyramid5N::~Mesh_LinearPyramid5N()
{

}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer Mesh_LinearPyramid5N::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer Mesh_LinearPyramid5N::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer Mesh_LinearPyramid5N::Node3() const
{
    return myNode3;
}

// ============================================================================
/*!
 *  \brief Node4()
*/
// ============================================================================
Standard_Integer Mesh_LinearPyramid5N::Node4() const
{
    return myNode4;
}

// ============================================================================
/*!
 *  \brief Node5()
*/
// ============================================================================
Standard_Integer Mesh_LinearPyramid5N::Node5() const
{
    return myNode5;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void Mesh_LinearPyramid5N::SetNode1(const Standard_Integer theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void Mesh_LinearPyramid5N::SetNode2(const Standard_Integer theNode2)
{
    myNode2 = theNode2;
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void Mesh_LinearPyramid5N::SetNode3(const Standard_Integer theNode3)
{
    myNode3 = theNode3;
}

// ============================================================================
/*!
 *  \brief SetNode4()
*/
// ============================================================================
void Mesh_LinearPyramid5N::SetNode4(const Standard_Integer theNode4)
{
    myNode4 = theNode4;
}

// ============================================================================
/*!
 *  \brief SetNode5()
*/
// ============================================================================
void Mesh_LinearPyramid5N::SetNode5(const Standard_Integer theNode5)
{
    myNode5 = theNode5;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
Mesh_TypeOfCell Mesh_LinearPyramid5N::Type() const
{
    return Mesh_CT_LinearPyramid5N;
}



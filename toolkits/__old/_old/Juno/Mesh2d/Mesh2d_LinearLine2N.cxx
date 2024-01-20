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
#include <Mesh2d_LinearLine2N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_LinearLine2N::Mesh2d_LinearLine2N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_LinearLine2N::Mesh2d_LinearLine2N(const Standard_Integer theNode1,
                                         const Standard_Integer theNode2)
    : myLinearLine(theNode1, theNode2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh2d_LinearLine2N::~Mesh2d_LinearLine2N()
{

}

// ============================================================================
/*!
 *  \brief LinearLine()
*/
// ============================================================================
const mp_LinearLine2N& Mesh2d_LinearLine2N::LinearLine() const
{
    return myLinearLine;
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer Mesh2d_LinearLine2N::Node1() const
{
    return myLinearLine.Node1();
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer Mesh2d_LinearLine2N::Node2() const
{
    return myLinearLine.Node2();
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void Mesh2d_LinearLine2N::SetNode1(const Standard_Integer theNode1)
{
    myLinearLine.SetNode1(theNode1);
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void Mesh2d_LinearLine2N::SetNode2(const Standard_Integer theNode2)
{
    myLinearLine.SetNode2(theNode2);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh2d_LinearLine2N, Mesh2d_Cell);
IMPLEMENT_STANDARD_RTTIEXT(Mesh2d_LinearLine2N, Mesh2d_Cell);

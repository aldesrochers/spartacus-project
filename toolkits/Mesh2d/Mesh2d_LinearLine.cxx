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
#include <Mesh2d_LinearLine.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_LinearLine::Mesh2d_LinearLine()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_LinearLine::Mesh2d_LinearLine(const Handle(Mesh2d_Node)& theNode1,
                                     const Handle(Mesh2d_Node)& theNode2)
    : myNode1(theNode1),
    myNode2(theNode2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh2d_LinearLine::~Mesh2d_LinearLine()
{

}

// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real Mesh2d_LinearLine::Length() const
{
    return myNode1->Distance(myNode2);
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
const Handle(Mesh2d_Node)& Mesh2d_LinearLine::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
const Handle(Mesh2d_Node)& Mesh2d_LinearLine::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void Mesh2d_LinearLine::SetNode1(const Handle(Mesh2d_Node) &theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void Mesh2d_LinearLine::SetNode2(const Handle(Mesh2d_Node) &theNode2)
{
    myNode2 = theNode2;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh2d_LinearLine, Mesh2d_Cell)
IMPLEMENT_STANDARD_RTTIEXT(Mesh2d_LinearLine, Mesh2d_Cell)

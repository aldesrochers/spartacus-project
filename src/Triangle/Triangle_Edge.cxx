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
#include <Triangle_Edge.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Edge::Triangle_Edge()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Edge::Triangle_Edge(const Standard_Integer theNode1,
                                   const Standard_Integer theNode2)
    : myNode1(theNode1),
    myNode2(theNode2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_Edge::~Triangle_Edge()
{

}

// ============================================================================
/*!
 *  \brief BoundaryMarker()
*/
// ============================================================================
Standard_Integer Triangle_Edge::BoundaryMarker() const
{
    return myBoundaryMarker;
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer Triangle_Edge::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer Triangle_Edge::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief SetBoundaryMarker()
*/
// ============================================================================
void Triangle_Edge::SetBoundaryMarker(const Standard_Integer theBoundaryMarker)
{
    myBoundaryMarker = theBoundaryMarker;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void Triangle_Edge::SetNode1(const Standard_Integer theNode1)
{
    myNode1 = theNode1;
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void Triangle_Edge::SetNode2(const Standard_Integer theNode2)
{
    myNode2 = theNode2;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Triangle_Edge, Triangle_Object)
IMPLEMENT_STANDARD_RTTIEXT(Triangle_Edge, Triangle_Object)


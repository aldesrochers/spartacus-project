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
#include <cp_Edge.hxx>

// OpenCascade
#include <Standard_ConstructionError.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cp_Edge::cp_Edge()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cp_Edge::cp_Edge(const Standard_Integer theNbMidNodes)
{
    myMidNodes.Resize(1, theNbMidNodes, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cp_Edge::cp_Edge(const Standard_Integer theCornerNode1,
                 const Standard_Integer theCornerNode2,
                 const Standard_Integer theNbMidNodes)
    : myCornerNode1(theCornerNode1),
    myCornerNode2(theCornerNode2)
{
    myMidNodes.Resize(1, theNbMidNodes, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cp_Edge::cp_Edge(const Standard_Integer theCornerNode1,
                 const Standard_Integer theCornerNode2,
                 const TColStd_Array1OfInteger &theMidNodes)
    : myCornerNode1(theCornerNode1),
    myCornerNode2(theCornerNode2),
    myMidNodes(theMidNodes)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
cp_Edge::~cp_Edge()
{

}

// ============================================================================
/*!
 *  \brief CornerNode1()
*/
// ============================================================================
Standard_Integer cp_Edge::CornerNode1() const
{
    return myCornerNode1;
}


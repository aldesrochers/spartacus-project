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
#include <cell_LinearLine1d.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cell_LinearLine1d::cell_LinearLine1d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cell_LinearLine1d::cell_LinearLine1d(const cell_Node1d &theNode1,
                                     const cell_Node1d &theNode2)
    : myNode1(theNode1),
    myNode2(theNode2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
cell_LinearLine1d::~cell_LinearLine1d()
{

}

// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real cell_LinearLine1d::Length() const
{
    return myNode1.Distance(myNode2);
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
const cell_Node1d& cell_LinearLine1d::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
const cell_Node1d& cell_LinearLine1d::Node2() const
{
    return myNode2;
}



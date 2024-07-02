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
#include <cell_Node1d.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cell_Node1d::cell_Node1d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cell_Node1d::cell_Node1d(const Standard_Real theX)
    : myX(theX)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
cell_Node1d::~cell_Node1d()
{

}

// ============================================================================
/*!
 *  \brief Distance()
*/
// ============================================================================
Standard_Real cell_Node1d::Distance(const cell_Node1d &theOther) const
{
    return abs(myX - theOther.X());
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void cell_Node1d::SetX(const Standard_Real theX)
{
    myX = theX;
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real cell_Node1d::X() const
{
    return myX;
}


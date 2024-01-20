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
#include <VVM_Node1d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Node1d::VVM_Node1d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Node1d::VVM_Node1d(const Standard_Real theX)
{
    SetX(theX);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
VVM_Node1d::~VVM_Node1d()
{

}

// ============================================================================
/*!
 *  \brief Distance()
*/
// ============================================================================
Standard_Real VVM_Node1d::Distance(const VVM_Node1d &theOther) const
{
    return Abs(theOther.X() - myX);
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void VVM_Node1d::SetX(const Standard_Real theX)
{
    myX = theX;
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real VVM_Node1d::X() const
{
    return myX;
}






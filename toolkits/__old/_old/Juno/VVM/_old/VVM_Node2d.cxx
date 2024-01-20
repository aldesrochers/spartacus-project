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
#include <VVM_Node2d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Node2d::VVM_Node2d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Node2d::VVM_Node2d(const gp_Pnt2d &theLocation)
{
    SetLocation(theLocation);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Node2d::VVM_Node2d(const gp_XY &theCoordinates)
{
    SetCoordinates(theCoordinates);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Node2d::VVM_Node2d(const Standard_Real theX,
                       const Standard_Real theY)
{
    SetX(theX);
    SetY(theY);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
VVM_Node2d::~VVM_Node2d()
{

}

// ============================================================================
/*!
 *  \brief Coordinates()
*/
// ============================================================================
const gp_XY& VVM_Node2d::Coordinates() const
{
    return myLocation.XY();
}

// ============================================================================
/*!
 *  \brief Distance()
*/
// ============================================================================
Standard_Real VVM_Node2d::Distance(const VVM_Node2d &theOther) const
{
    return theOther.Location().Distance(myLocation);
}

// ============================================================================
/*!
 *  \brief Location()
*/
// ============================================================================
const gp_Pnt2d& VVM_Node2d::Location() const
{
    return myLocation;
}

// ============================================================================
/*!
 *  \brief SetCoordinates()
*/
// ============================================================================
void VVM_Node2d::SetCoordinates(const gp_XY &theCoordinates)
{
    myLocation.SetXY(theCoordinates);
}

// ============================================================================
/*!
 *  \brief SetLocation()
*/
// ============================================================================
void VVM_Node2d::SetLocation(const gp_Pnt2d &theLocation)
{
    myLocation = theLocation;
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void VVM_Node2d::SetX(const Standard_Real theX)
{
    myLocation.SetX(theX);
}

// ============================================================================
/*!
 *  \brief SetY()
*/
// ============================================================================
void VVM_Node2d::SetY(const Standard_Real theY)
{
    myLocation.SetY(theY);
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real VVM_Node2d::X() const
{
    return myLocation.X();
}

// ============================================================================
/*!
 *  \brief Y()
*/
// ============================================================================
Standard_Real VVM_Node2d::Y() const
{
    return myLocation.Y();
}





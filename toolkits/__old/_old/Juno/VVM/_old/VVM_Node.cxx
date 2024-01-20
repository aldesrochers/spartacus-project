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
#include <VVM_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Node::VVM_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Node::VVM_Node(const gp_Pnt &theLocation)
{
    SetLocation(theLocation);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Node::VVM_Node(const gp_XYZ &theCoordinates)
{
    SetCoordinates(theCoordinates);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Node::VVM_Node(const Standard_Real theX,
                   const Standard_Real theY,
                   const Standard_Real theZ)
{
    SetX(theX);
    SetY(theY);
    SetZ(theZ);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
VVM_Node::~VVM_Node()
{

}

// ============================================================================
/*!
 *  \brief Coordinates()
*/
// ============================================================================
const gp_XYZ& VVM_Node::Coordinates() const
{
    return myLocation.XYZ();
}

// ============================================================================
/*!
 *  \brief Distance()
*/
// ============================================================================
Standard_Real VVM_Node::Distance(const VVM_Node &theOther) const
{
    return theOther.Location().Distance(myLocation);
}

// ============================================================================
/*!
 *  \brief Location()
*/
// ============================================================================
const gp_Pnt& VVM_Node::Location() const
{
    return myLocation;
}

// ============================================================================
/*!
 *  \brief SetCoordinates()
*/
// ============================================================================
void VVM_Node::SetCoordinates(const gp_XYZ &theCoordinates)
{
    myLocation.SetXYZ(theCoordinates);
}

// ============================================================================
/*!
 *  \brief SetLocation()
*/
// ============================================================================
void VVM_Node::SetLocation(const gp_Pnt &theLocation)
{
    myLocation = theLocation;
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void VVM_Node::SetX(const Standard_Real theX)
{
    myLocation.SetX(theX);
}

// ============================================================================
/*!
 *  \brief SetY()
*/
// ============================================================================
void VVM_Node::SetY(const Standard_Real theY)
{
    myLocation.SetY(theY);
}

// ============================================================================
/*!
 *  \brief SetZ()
*/
// ============================================================================
void VVM_Node::SetZ(const Standard_Real theZ)
{
    myLocation.SetZ(theZ);
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real VVM_Node::X() const
{
    return myLocation.X();
}

// ============================================================================
/*!
 *  \brief Y()
*/
// ============================================================================
Standard_Real VVM_Node::Y() const
{
    return myLocation.Y();
}

// ============================================================================
/*!
 *  \brief Z()
*/
// ============================================================================
Standard_Real VVM_Node::Z() const
{
    return myLocation.Z();
}




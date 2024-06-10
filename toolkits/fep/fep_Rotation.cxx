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
#include <fep_Rotation.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
fep_Rotation::fep_Rotation()
{

}
// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
fep_Rotation::~fep_Rotation()
{

}

// ============================================================================
/*!
 *  \brief AngularAcceleration()
*/
// ============================================================================
Standard_Real fep_Rotation::AngularAcceleration() const
{
    return myAngularAcceleration;
}

// ============================================================================
/*!
 *  \brief AngularVelocity()
*/
// ============================================================================
Standard_Real fep_Rotation::AngularVelocity() const
{
    return myAngularVelocity;
}

// ============================================================================
/*!
 *  \brief Moment()
*/
// ============================================================================
Standard_Real fep_Rotation::Moment() const
{
    return myMoment;
}

// ============================================================================
/*!
 *  \brief RotationAngle()
*/
// ============================================================================
Standard_Real fep_Rotation::RotationAngle() const
{
    return myRotationAngle;
}

// ============================================================================
/*!
 *  \brief SetAngularAcceleration()
*/
// ============================================================================
void fep_Rotation::SetAngularAcceleration(const Standard_Real theAngularAcceleration)
{
    myAngularAcceleration = theAngularAcceleration;
}

// ============================================================================
/*!
 *  \brief SetAngularVelocity()
*/
// ============================================================================
void fep_Rotation::SetAngularVelocity(const Standard_Real theAngularVelocity)
{
    myAngularVelocity = theAngularVelocity;
}

// ============================================================================
/*!
 *  \brief SetMoment()
*/
// ============================================================================
void fep_Rotation::SetMoment(const Standard_Real theMoment)
{
    myMoment = theMoment;
}

// ============================================================================
/*!
 *  \brief SetRotationAngle()
*/
// ============================================================================
void fep_Rotation::SetRotationAngle(const Standard_Real theRotationAngle)
{
    myRotationAngle = theRotationAngle;
}




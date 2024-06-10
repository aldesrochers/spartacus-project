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


#ifndef __fep_Rotation_hxx__
#define __fep_Rotation_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>


// ============================================================================
/*!
 *  \brief fep_Rotation
*/
// ============================================================================
class fep_Rotation
{

public:
    // constructors
    Standard_EXPORT fep_Rotation();
    // destructors
    Standard_EXPORT ~fep_Rotation();

public:

    Standard_EXPORT Standard_Real   AngularAcceleration() const;
    Standard_EXPORT Standard_Real   AngularVelocity() const;
    Standard_EXPORT Standard_Real   Moment() const;
    Standard_EXPORT Standard_Real   RotationAngle() const;
    Standard_EXPORT void            SetAngularAcceleration(const Standard_Real theAngularAcceleration);
    Standard_EXPORT void            SetAngularVelocity(const Standard_Real theAngularVelocity);
    Standard_EXPORT void            SetMoment(const Standard_Real theMoment);
    Standard_EXPORT void            SetRotationAngle(const Standard_Real theRotationAngle);

private:

    Standard_Real   myAngularAcceleration;
    Standard_Real   myAngularVelocity;
    Standard_Real   myMoment;
    Standard_Real   myRotationAngle;

};


#endif // __fep_Rotation_hxx__

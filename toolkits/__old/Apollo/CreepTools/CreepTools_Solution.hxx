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


#ifndef __CreepTools_Solution_hxx__
#define __CreepTools_Solution_hxx__

// OpenCascade
#include <Standard.hxx>


// ============================================================================
/*!
 *  \brief CreepTools_Solution
*/
// ============================================================================
class CreepTools_Solution
{

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT CreepTools_Solution();
    Standard_EXPORT CreepTools_Solution(const Standard_Real theStrain,
                                        const Standard_Real theStress,
                                        const Standard_Real theTime);
    // constructors
    Standard_EXPORT ~CreepTools_Solution();

public:

    Standard_EXPORT void            SetStrain(const Standard_Real theStrain);
    Standard_EXPORT void            SetStress(const Standard_Real theStress);
    Standard_EXPORT void            SetTime(const Standard_Real theTime);
    Standard_EXPORT Standard_Real   Strain() const;
    Standard_EXPORT Standard_Real   Stress() const;
    Standard_EXPORT Standard_Real   Time() const;

private:

    Standard_Real       myStrain;
    Standard_Real       myStress;
    Standard_Real       myTime;

};

#endif // __CreepTools_Solution_hxx__

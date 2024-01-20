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
#include <CreepTools_Solution.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
CreepTools_Solution::CreepTools_Solution()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
CreepTools_Solution::CreepTools_Solution(const Standard_Real theStrain,
                                         const Standard_Real theStress,
                                         const Standard_Real theTime)
    : myStrain(theStrain),
      myStress(theStress),
      myTime(theTime)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
CreepTools_Solution::~CreepTools_Solution()
{

}

// ============================================================================
/*!
 *  \brief SetStrain()
*/
// ============================================================================
void CreepTools_Solution::SetStrain(const Standard_Real theStrain)
{
    myStrain = theStrain;
}

// ============================================================================
/*!
 *  \brief SetStress()
*/
// ============================================================================
void CreepTools_Solution::SetStress(const Standard_Real theStress)
{
    myStress = theStress;
}

// ============================================================================
/*!
 *  \brief SetTime()
*/
// ============================================================================
void CreepTools_Solution::SetTime(const Standard_Real theTime)
{
    myTime = theTime;
}

// ============================================================================
/*!
 *  \brief Strain()
*/
// ============================================================================
Standard_Real CreepTools_Solution::Strain() const
{
    return myStrain;
}

// ============================================================================
/*!
 *  \brief Stress()
*/
// ============================================================================
Standard_Real CreepTools_Solution::Stress() const
{
    return myStress;
}

// ============================================================================
/*!
 *  \brief Time()
*/
// ============================================================================
Standard_Real CreepTools_Solution::Time() const
{
    return myTime;
}



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
#include <FE1d_Truss.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_Truss::FE1d_Truss(const gp_Pnt1d& thePoint1,
                       const gp_Pnt1d& thePoint2)
    : myPoint1(thePoint1),
    myPoint2(thePoint2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE1d_Truss::~FE1d_Truss()
{

}

// ============================================================================
/*!
 *  \brief Connectivity()
*/
// ============================================================================
TColfep_SequenceOfDOF1d FE1d_Truss::Connectivity() const
{
    TColfep_SequenceOfDOF1d aConnectivity;
    aConnectivity.Append(fep_DOF1d(1, fep_DOF1d_DX));
    aConnectivity.Append(fep_DOF1d(2, fep_DOF1d_DX));
    return aConnectivity;
}

// ============================================================================
/*!
 *  \brief InitialLength()
*/
// ============================================================================
Standard_Real FE1d_Truss::InitialLength() const
{
    return myPoint1.Distance(myPoint2);
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt1d& FE1d_Truss::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt1d& FE1d_Truss::Point2() const
{
    return myPoint2;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE1d_Truss, FE1d_MechElement)
IMPLEMENT_STANDARD_RTTIEXT(FE1d_Truss, FE1d_MechElement)

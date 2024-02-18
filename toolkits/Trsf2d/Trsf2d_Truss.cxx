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
#include <Trsf2d_Truss.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Trsf2d_Truss::Trsf2d_Truss()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Trsf2d_Truss::Trsf2d_Truss(const gp_Pnt2d& thePoint1,
                           const gp_Pnt2d& thePoint2)
    : myPoint1(thePoint1),
    myPoint2(thePoint2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Trsf2d_Truss::~Trsf2d_Truss()
{

}

// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real Trsf2d_Truss::Length() const
{
    return myPoint1.Distance(myPoint2);
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt2d& Trsf2d_Truss::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt2d& Trsf2d_Truss::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void Trsf2d_Truss::SetPoint1(const gp_Pnt2d &thePoint1)
{
    myPoint1 = thePoint1;
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void Trsf2d_Truss::SetPoint2(const gp_Pnt2d &thePoint2)
{
    myPoint2 = thePoint2;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Trsf2d_Truss, Trsf2d_Transformation)
IMPLEMENT_STANDARD_RTTIEXT(Trsf2d_Truss, Trsf2d_Transformation)

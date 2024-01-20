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
#include <mp_Line2d.hxx>

// OpenCascade
#include <Standard_ConstructionError.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_Line2d::mp_Line2d(const gp_Pnt2d &thePoint1,
                     const gp_Pnt2d &thePoint2)
    : myPoint1(thePoint1),
      myPoint2(thePoint2)
{
    Standard_Real aLength = thePoint1.Distance(thePoint2);
    Standard_ConstructionError_Raise_if(aLength <= 0., "mp_Line2d::mp_Line2d()");
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_Line2d::~mp_Line2d()
{

}

// ============================================================================
/*!
 *  \brief Direction()
*/
// ============================================================================
gp_Dir2d mp_Line2d::Direction() const
{
    return gp_Dir2d(gp_Vec2d(myPoint1, myPoint2));
}

// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real mp_Line2d::Length() const
{
    return myPoint1.Distance(myPoint2);
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt2d& mp_Line2d::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt2d& mp_Line2d::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief Reverse()
*/
// ============================================================================
void mp_Line2d::Reverse()
{
    gp_Pnt2d P1 = myPoint1;
    gp_Pnt2d P2 = myPoint2;
    myPoint1 = P2;
    myPoint2 = P1;
}

// ============================================================================
/*!
 *  \brief Reversed()
*/
// ============================================================================
mp_Line2d mp_Line2d::Reversed() const
{
    mp_Line2d aLine(myPoint2, myPoint1);
    return aLine;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void mp_Line2d::SetPoint1(const gp_Pnt2d &thePoint1)
{
    myPoint1 = thePoint1;
    Standard_Real aLength = myPoint1.Distance(myPoint2);
    Standard_ConstructionError_Raise_if(aLength <= 0., "mp_Line2d::SetPoint1()");
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void mp_Line2d::SetPoint2(const gp_Pnt2d &thePoint2)
{
    myPoint2 = thePoint2;
    Standard_Real aLength = myPoint1.Distance(myPoint2);
    Standard_ConstructionError_Raise_if(aLength <= 0., "mp_Line2d::SetPoint2()");
}



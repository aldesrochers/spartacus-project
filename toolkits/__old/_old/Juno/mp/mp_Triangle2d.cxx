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
#include <mp_Triangle2d.hxx>

// OpenCascade
#include <gp_Lin2d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_Triangle2d::mp_Triangle2d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_Triangle2d::mp_Triangle2d(const gp_Pnt2d &thePoint1,
                             const gp_Pnt2d &thePoint2,
                             const gp_Pnt2d &thePoint3)
    : myPoint1(thePoint1),
      myPoint2(thePoint2),
      myPoint3(thePoint3)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_Triangle2d::~mp_Triangle2d()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real mp_Triangle2d::Area() const
{
    gp_Lin2d L = gp_Lin2d(myPoint1, gp_Vec2d(myPoint1, myPoint2));
    Standard_Real H = L.Distance(myPoint3);
    Standard_Real B = myPoint1.Distance(myPoint2);
    return H*B/2.;
}

// ============================================================================
/*!
 *  \brief Edge1()
*/
// ============================================================================
mp_Line2d mp_Triangle2d::Edge1() const
{
    return mp_Line2d(myPoint1, myPoint2);
}

// ============================================================================
/*!
 *  \brief Edge2()
*/
// ============================================================================
mp_Line2d mp_Triangle2d::Edge2() const
{
    return mp_Line2d(myPoint2, myPoint3);
}

// ============================================================================
/*!
 *  \brief Edge3()
*/
// ============================================================================
mp_Line2d mp_Triangle2d::Edge3() const
{
    return mp_Line2d(myPoint3, myPoint1);
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt2d& mp_Triangle2d::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt2d& mp_Triangle2d::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief Point3()
*/
// ============================================================================
const gp_Pnt2d& mp_Triangle2d::Point3() const
{
    return myPoint3;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void mp_Triangle2d::SetPoint1(const gp_Pnt2d &thePoint1)
{
    myPoint1 = thePoint1;
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void mp_Triangle2d::SetPoint2(const gp_Pnt2d &thePoint2)
{
    myPoint2 = thePoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint3()
*/
// ============================================================================
void mp_Triangle2d::SetPoint3(const gp_Pnt2d &thePoint3)
{
    myPoint3 = thePoint3;
}


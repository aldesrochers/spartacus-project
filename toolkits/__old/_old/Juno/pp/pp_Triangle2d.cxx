// ============================================================================
// Copyright (C) 2021-
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the ipplied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Tepple Place, Suite 330, Boston, MA  02111-1307 USA
//
// Alexis L. Desrochers (alexisdesrochers@gmail.com)
//
// ============================================================================

// Spartacus
#include <pp_Triangle2d.hxx>

// OpenCascade
#include <gp_Lin2d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Triangle2d::pp_Triangle2d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Triangle2d::pp_Triangle2d(const gp_Pnt2d &thePoint1,
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
pp_Triangle2d::~pp_Triangle2d()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real pp_Triangle2d::Area() const
{
    gp_Lin2d L = gp_Lin2d(myPoint1, gp_Vec2d(myPoint1, myPoint2));
    Standard_Real H = L.Distance(myPoint3);
    Standard_Real B = myPoint1.Distance(myPoint2);
    return H*B/2.;
}

// ============================================================================
/*!
 *  \brief Centroid()
*/
// ============================================================================
gp_Pnt2d pp_Triangle2d::Centroid() const
{
    Standard_Real X = 1./3. * (myPoint1.X() + myPoint2.X() + myPoint3.X());
    Standard_Real Y = 1./3. * (myPoint1.Y() + myPoint2.Y() + myPoint3.Y());
    return gp_Pnt2d(X, Y);
}

// ============================================================================
/*!
 *  \brief Edge1()
*/
// ============================================================================
pp_LineSegment2d pp_Triangle2d::Edge1() const
{
    return pp_LineSegment2d(myPoint1, myPoint2);
}

// ============================================================================
/*!
 *  \brief Edge2()
*/
// ============================================================================
pp_LineSegment2d pp_Triangle2d::Edge2() const
{
    return pp_LineSegment2d(myPoint2, myPoint3);
}

// ============================================================================
/*!
 *  \brief Edge3()
*/
// ============================================================================
pp_LineSegment2d pp_Triangle2d::Edge3() const
{
    return pp_LineSegment2d(myPoint3, myPoint1);
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt2d& pp_Triangle2d::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt2d& pp_Triangle2d::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief Point3()
*/
// ============================================================================
const gp_Pnt2d& pp_Triangle2d::Point3() const
{
    return myPoint3;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void pp_Triangle2d::SetPoint1(const gp_Pnt2d &thePoint1)
{
    myPoint1 = thePoint1;
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void pp_Triangle2d::SetPoint2(const gp_Pnt2d &thePoint2)
{
    myPoint2 = thePoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint3()
*/
// ============================================================================
void pp_Triangle2d::SetPoint3(const gp_Pnt2d &thePoint3)
{
    myPoint3 = thePoint3;
}


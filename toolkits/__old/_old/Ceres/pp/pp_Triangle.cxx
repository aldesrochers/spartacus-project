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
#include <pp_Triangle.hxx>

// OpenCascade
#include <gp_Lin.hxx>
#include <Standard_ConstructionError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Triangle::pp_Triangle()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Triangle::pp_Triangle(const gp_Pnt &thePoint1,
                             const gp_Pnt &thePoint2,
                             const gp_Pnt &thePoint3)
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
pp_Triangle::~pp_Triangle()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real pp_Triangle::Area() const
{
    gp_Lin L(myPoint1, gp_Vec(myPoint1, myPoint2));
    Standard_Real H = L.Distance(myPoint3);
    Standard_Real B = myPoint1.Distance(myPoint2);
    return H * B / 2.;
}

// ============================================================================
/*!
 *  \brief Centroid()
*/
// ============================================================================
gp_Pnt pp_Triangle::Centroid() const
{
    gp_XYZ aXYZ = 1./3. * (myPoint1.XYZ() + myPoint2.XYZ() + myPoint3.XYZ());
    return gp_Pnt(aXYZ);
}

// ============================================================================
/*!
 *  \brief Edge1()
*/
// ============================================================================
pp_Edge pp_Triangle::Edge1() const
{
    return pp_Edge(myPoint1, myPoint2);
}

// ============================================================================
/*!
 *  \brief Edge2()
*/
// ============================================================================
pp_Edge pp_Triangle::Edge2() const
{
    return pp_Edge(myPoint2, myPoint3);
}

// ============================================================================
/*!
 *  \brief Edge3()
*/
// ============================================================================
pp_Edge pp_Triangle::Edge3() const
{
    return pp_Edge(myPoint3, myPoint1);
}

// ============================================================================
/*!
 *  \brief Normal()
*/
// ============================================================================
gp_Dir pp_Triangle::Normal() const
{
    gp_Vec V1(myPoint1, myPoint2);
    gp_Vec V2(myPoint1, myPoint3);
    return V1.Crossed(V2).Normalized();
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt& pp_Triangle::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt& pp_Triangle::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief Point3()
*/
// ============================================================================
const gp_Pnt& pp_Triangle::Point3() const
{
    return myPoint3;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void pp_Triangle::SetPoint1(const gp_Pnt &thePoint1)
{
    myPoint1 = thePoint1;
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void pp_Triangle::SetPoint2(const gp_Pnt &thePoint2)
{
    myPoint2 = thePoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint3()
*/
// ============================================================================
void pp_Triangle::SetPoint3(const gp_Pnt &thePoint3)
{
    myPoint3 = thePoint3;
}



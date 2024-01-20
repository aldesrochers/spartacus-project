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
#include <pp_Quadrangle.hxx>

// OpenCascade
#include <gp_Lin.hxx>
#include <Standard_ConstructionError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Quadrangle::pp_Quadrangle()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Quadrangle::pp_Quadrangle(const gp_Pnt &thePoint1,
                                 const gp_Pnt &thePoint2,
                                 const gp_Pnt &thePoint3,
                                 const gp_Pnt &thePoint4)
    : myPoint1(thePoint1),
      myPoint2(thePoint2),
      myPoint3(thePoint3),
      myPoint4(thePoint4)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
pp_Quadrangle::~pp_Quadrangle()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real pp_Quadrangle::Area() const
{
    gp_Lin L(myPoint1, gp_Vec(myPoint1, myPoint3));
    Standard_Real H1 = L.Distance(myPoint2);
    Standard_Real H2 = L.Distance(myPoint4);
    Standard_Real B = myPoint1.Distance(myPoint3);
    return H1 * B / 2. + H2 * B / 2.;
}

// ============================================================================
/*!
 *  \brief Centroid()
*/
// ============================================================================
gp_Pnt pp_Quadrangle::Centroid() const
{
    gp_XYZ aXYZ = 1./4. * (myPoint1.XYZ() + myPoint2.XYZ() + myPoint3.XYZ() + myPoint4.XYZ());
    return gp_Pnt(aXYZ);
}

// ============================================================================
/*!
 *  \brief Edge1()
*/
// ============================================================================
pp_Edge pp_Quadrangle::Edge1() const
{
    return pp_Edge(myPoint1, myPoint2);
}

// ============================================================================
/*!
 *  \brief Edge2()
*/
// ============================================================================
pp_Edge pp_Quadrangle::Edge2() const
{
    return pp_Edge(myPoint2, myPoint3);
}

// ============================================================================
/*!
 *  \brief Edge3()
*/
// ============================================================================
pp_Edge pp_Quadrangle::Edge3() const
{
    return pp_Edge(myPoint3, myPoint4);
}

// ============================================================================
/*!
 *  \brief Edge4()
*/
// ============================================================================
pp_Edge pp_Quadrangle::Edge4() const
{
    return pp_Edge(myPoint4, myPoint1);
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt& pp_Quadrangle::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt& pp_Quadrangle::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief Point3()
*/
// ============================================================================
const gp_Pnt& pp_Quadrangle::Point3() const
{
    return myPoint3;
}

// ============================================================================
/*!
 *  \brief Point4()
*/
// ============================================================================
const gp_Pnt& pp_Quadrangle::Point4() const
{
    return myPoint4;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void pp_Quadrangle::SetPoint1(const gp_Pnt &thePoint1)
{
    myPoint1 = thePoint1;
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void pp_Quadrangle::SetPoint2(const gp_Pnt &thePoint2)
{
    myPoint2 = thePoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint3()
*/
// ============================================================================
void pp_Quadrangle::SetPoint3(const gp_Pnt &thePoint3)
{
    myPoint3 = thePoint3;
}

// ============================================================================
/*!
 *  \brief SetPoint4()
*/
// ============================================================================
void pp_Quadrangle::SetPoint4(const gp_Pnt &thePoint4)
{
    myPoint4 = thePoint4;
}


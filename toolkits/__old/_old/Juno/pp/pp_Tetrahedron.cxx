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
#include <pp_Tetrahedron.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Tetrahedron::pp_Tetrahedron()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Tetrahedron::pp_Tetrahedron(const gp_Pnt &thePoint1,
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
pp_Tetrahedron::~pp_Tetrahedron()
{

}

// ============================================================================
/*!
 *  \brief Centroid()
*/
// ============================================================================
gp_Pnt pp_Tetrahedron::Centroid() const
{
    Standard_Real X = 1./4. * (myPoint1.X() + myPoint2.X() + myPoint3.X() + myPoint4.X());
    Standard_Real Y = 1./4. * (myPoint1.Y() + myPoint2.Y() + myPoint3.Y() + myPoint4.Y());
    Standard_Real Z = 1./4. * (myPoint1.Z() + myPoint2.Z() + myPoint3.Z() + myPoint4.Z());
    return gp_Pnt(X, Y, Z);
}

// ============================================================================
/*!
 *  \brief Face1()
*/
// ============================================================================
pp_Triangle pp_Tetrahedron::Face1() const
{
    return pp_Triangle(myPoint1, myPoint3, myPoint2);
}

// ============================================================================
/*!
 *  \brief Face2()
*/
// ============================================================================
pp_Triangle pp_Tetrahedron::Face2() const
{
    return pp_Triangle(myPoint1, myPoint2, myPoint4);
}

// ============================================================================
/*!
 *  \brief Face3()
*/
// ============================================================================
pp_Triangle pp_Tetrahedron::Face3() const
{
    return pp_Triangle(myPoint2, myPoint3, myPoint4);
}

// ============================================================================
/*!
 *  \brief Face4()
*/
// ============================================================================
pp_Triangle pp_Tetrahedron::Face4() const
{
    return pp_Triangle(myPoint3, myPoint1, myPoint2);
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt& pp_Tetrahedron::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt& pp_Tetrahedron::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief Point3()
*/
// ============================================================================
const gp_Pnt& pp_Tetrahedron::Point3() const
{
    return myPoint3;
}

// ============================================================================
/*!
 *  \brief Point4()
*/
// ============================================================================
const gp_Pnt& pp_Tetrahedron::Point4() const
{
    return myPoint4;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void pp_Tetrahedron::SetPoint1(const gp_Pnt &thePoint1)
{
    myPoint1 = thePoint1;
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void pp_Tetrahedron::SetPoint2(const gp_Pnt &thePoint2)
{
    myPoint2 = thePoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint3()
*/
// ============================================================================
void pp_Tetrahedron::SetPoint3(const gp_Pnt &thePoint3)
{
    myPoint3 = thePoint3;
}

// ============================================================================
/*!
 *  \brief SetPoint4()
*/
// ============================================================================
void pp_Tetrahedron::SetPoint4(const gp_Pnt &thePoint4)
{
    myPoint4 = thePoint4;
}

// ============================================================================
/*!
 *  \brief Volume()
*/
// ============================================================================
Standard_Real pp_Tetrahedron::Volume() const
{
    pp_Triangle B(myPoint1, myPoint3, myPoint2);
    Standard_Real A0 = B.Area();
    Standard_Real H = B.Distance(myPoint4);
    return 1./3. * A0 * H;
}

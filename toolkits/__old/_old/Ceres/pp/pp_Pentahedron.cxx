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
#include <pp_Tetrahedron.hxx>
#include <pp_Pentahedron.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Pentahedron::pp_Pentahedron()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Pentahedron::pp_Pentahedron(const gp_Pnt &thePoint1,
                               const gp_Pnt &thePoint2,
                               const gp_Pnt &thePoint3,
                               const gp_Pnt &thePoint4,
                               const gp_Pnt &thePoint5,
                               const gp_Pnt &thePoint6)
    : myPoint1(thePoint1),
      myPoint2(thePoint2),
      myPoint3(thePoint3),
      myPoint4(thePoint4),
      myPoint5(thePoint5),
      myPoint6(thePoint6)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
pp_Pentahedron::~pp_Pentahedron()
{

}

// ============================================================================
/*!
 *  \brief Face1()
*/
// ============================================================================
pp_Quadrangle pp_Pentahedron::Face1() const
{
    return pp_Quadrangle(myPoint1, myPoint2, myPoint5, myPoint4);
}

// ============================================================================
/*!
 *  \brief Face2()
*/
// ============================================================================
pp_Quadrangle pp_Pentahedron::Face2() const
{
    return pp_Quadrangle(myPoint2, myPoint3, myPoint6, myPoint5);
}

// ============================================================================
/*!
 *  \brief Face3()
*/
// ============================================================================
pp_Quadrangle pp_Pentahedron::Face3() const
{
    return pp_Quadrangle(myPoint3, myPoint1, myPoint4, myPoint6);
}

// ============================================================================
/*!
 *  \brief Face4()
*/
// ============================================================================
pp_Triangle pp_Pentahedron::Face4() const
{
    return pp_Triangle(myPoint1, myPoint3, myPoint2);
}

// ============================================================================
/*!
 *  \brief Face5()
*/
// ============================================================================
pp_Triangle pp_Pentahedron::Face5() const
{
    return pp_Triangle(myPoint4, myPoint5, myPoint6);
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt& pp_Pentahedron::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt& pp_Pentahedron::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief Point3()
*/
// ============================================================================
const gp_Pnt& pp_Pentahedron::Point3() const
{
    return myPoint3;
}

// ============================================================================
/*!
 *  \brief Point4()
*/
// ============================================================================
const gp_Pnt& pp_Pentahedron::Point4() const
{
    return myPoint4;
}

// ============================================================================
/*!
 *  \brief Point5()
*/
// ============================================================================
const gp_Pnt& pp_Pentahedron::Point5() const
{
    return myPoint5;
}

// ============================================================================
/*!
 *  \brief Point6()
*/
// ============================================================================
const gp_Pnt& pp_Pentahedron::Point6() const
{
    return myPoint6;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void pp_Pentahedron::SetPoint1(const gp_Pnt &thePoint1)
{
    myPoint1 = thePoint1;
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void pp_Pentahedron::SetPoint2(const gp_Pnt &thePoint2)
{
    myPoint2 = thePoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint3()
*/
// ============================================================================
void pp_Pentahedron::SetPoint3(const gp_Pnt &thePoint3)
{
    myPoint3 = thePoint3;
}

// ============================================================================
/*!
 *  \brief SetPoint4()
*/
// ============================================================================
void pp_Pentahedron::SetPoint4(const gp_Pnt &thePoint4)
{
    myPoint4 = thePoint4;
}

// ============================================================================
/*!
 *  \brief SetPoint5()
*/
// ============================================================================
void pp_Pentahedron::SetPoint5(const gp_Pnt &thePoint5)
{
    myPoint5 = thePoint5;
}

// ============================================================================
/*!
 *  \brief SetPoint6()
*/
// ============================================================================
void pp_Pentahedron::SetPoint6(const gp_Pnt &thePoint6)
{
    myPoint6 = thePoint6;
}

// ============================================================================
/*!
 *  \brief Volume()
*/
// ============================================================================
Standard_Real pp_Pentahedron::Volume() const
{
    pp_Tetrahedron T1(myPoint1, myPoint2, myPoint3, myPoint4);
    pp_Tetrahedron T2(myPoint1, myPoint2, myPoint3, myPoint5);
    pp_Tetrahedron T3(myPoint1, myPoint2, myPoint3, myPoint6);
    pp_Tetrahedron T4(myPoint4, myPoint5, myPoint6, myPoint1);
    pp_Tetrahedron T5(myPoint4, myPoint5, myPoint6, myPoint2);
    pp_Tetrahedron T6(myPoint4, myPoint5, myPoint6, myPoint3);
    return 1./6. * (T1.Volume() + T2.Volume() + T3.Volume() + T4.Volume() + T5.Volume() + T6.Volume());
}


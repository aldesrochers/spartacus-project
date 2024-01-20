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
#include <pp_Hexahedron.hxx>
#include <pp_Pentahedron.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Hexahedron::pp_Hexahedron()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Hexahedron::pp_Hexahedron(const gp_Pnt &thePoint1,
                             const gp_Pnt &thePoint2,
                             const gp_Pnt &thePoint3,
                             const gp_Pnt &thePoint4,
                             const gp_Pnt &thePoint5,
                             const gp_Pnt &thePoint6,
                             const gp_Pnt &thePoint7,
                             const gp_Pnt &thePoint8)
    : myPoint1(thePoint1),
      myPoint2(thePoint2),
      myPoint3(thePoint3),
      myPoint4(thePoint4),
      myPoint5(thePoint5),
      myPoint6(thePoint6),
      myPoint7(thePoint7),
      myPoint8(thePoint8)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
pp_Hexahedron::~pp_Hexahedron()
{

}

// ============================================================================
/*!
 *  \brief Face1()
*/
// ============================================================================
pp_Quadrangle pp_Hexahedron::Face1() const
{
    return pp_Quadrangle(myPoint1, myPoint4, myPoint3, myPoint2);
}

// ============================================================================
/*!
 *  \brief Face2()
*/
// ============================================================================
pp_Quadrangle pp_Hexahedron::Face2() const
{
    return pp_Quadrangle(myPoint1, myPoint2, myPoint6, myPoint5);
}

// ============================================================================
/*!
 *  \brief Face3()
*/
// ============================================================================
pp_Quadrangle pp_Hexahedron::Face3() const
{
    return pp_Quadrangle(myPoint2, myPoint3, myPoint7, myPoint6);
}

// ============================================================================
/*!
 *  \brief Face4()
*/
// ============================================================================
pp_Quadrangle pp_Hexahedron::Face4() const
{
    return pp_Quadrangle(myPoint3, myPoint4, myPoint8, myPoint7);
}

// ============================================================================
/*!
 *  \brief Face5()
*/
// ============================================================================
pp_Quadrangle pp_Hexahedron::Face5() const
{
    return pp_Quadrangle(myPoint1, myPoint5, myPoint8, myPoint4);
}

// ============================================================================
/*!
 *  \brief Face6()
*/
// ============================================================================
pp_Quadrangle pp_Hexahedron::Face6() const
{
    return pp_Quadrangle(myPoint5, myPoint6, myPoint7, myPoint8);
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt& pp_Hexahedron::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt& pp_Hexahedron::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief Point3()
*/
// ============================================================================
const gp_Pnt& pp_Hexahedron::Point3() const
{
    return myPoint3;
}

// ============================================================================
/*!
 *  \brief Point4()
*/
// ============================================================================
const gp_Pnt& pp_Hexahedron::Point4() const
{
    return myPoint4;
}

// ============================================================================
/*!
 *  \brief Point5()
*/
// ============================================================================
const gp_Pnt& pp_Hexahedron::Point5() const
{
    return myPoint5;
}

// ============================================================================
/*!
 *  \brief Point6()
*/
// ============================================================================
const gp_Pnt& pp_Hexahedron::Point6() const
{
    return myPoint6;
}

// ============================================================================
/*!
 *  \brief Point7()
*/
// ============================================================================
const gp_Pnt& pp_Hexahedron::Point7() const
{
    return myPoint7;
}

// ============================================================================
/*!
 *  \brief Point8()
*/
// ============================================================================
const gp_Pnt& pp_Hexahedron::Point8() const
{
    return myPoint8;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void pp_Hexahedron::SetPoint1(const gp_Pnt &thePoint1)
{
    myPoint1 = thePoint1;
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void pp_Hexahedron::SetPoint2(const gp_Pnt &thePoint2)
{
    myPoint2 = thePoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint3()
*/
// ============================================================================
void pp_Hexahedron::SetPoint3(const gp_Pnt &thePoint3)
{
    myPoint3 = thePoint3;
}

// ============================================================================
/*!
 *  \brief SetPoint4()
*/
// ============================================================================
void pp_Hexahedron::SetPoint4(const gp_Pnt &thePoint4)
{
    myPoint4 = thePoint4;
}

// ============================================================================
/*!
 *  \brief SetPoint5()
*/
// ============================================================================
void pp_Hexahedron::SetPoint5(const gp_Pnt &thePoint5)
{
    myPoint5 = thePoint5;
}

// ============================================================================
/*!
 *  \brief SetPoint6()
*/
// ============================================================================
void pp_Hexahedron::SetPoint6(const gp_Pnt &thePoint6)
{
    myPoint6 = thePoint6;
}

// ============================================================================
/*!
 *  \brief SetPoint7()
*/
// ============================================================================
void pp_Hexahedron::SetPoint7(const gp_Pnt &thePoint7)
{
    myPoint7 = thePoint7;
}

// ============================================================================
/*!
 *  \brief SetPoint8()
*/
// ============================================================================
void pp_Hexahedron::SetPoint8(const gp_Pnt &thePoint8)
{
    myPoint8 = thePoint8;
}

// ============================================================================
/*!
 *  \brief Volume()
*/
// ============================================================================
Standard_Real pp_Hexahedron::Volume() const
{
    pp_Pentahedron P1(myPoint1, myPoint2, myPoint3, myPoint5, myPoint6, myPoint7);
    pp_Pentahedron P2(myPoint1, myPoint3, myPoint4, myPoint5, myPoint7, myPoint8);
    return P1.Volume() + P2.Volume();
}


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
#include <pp_Pyramid.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Pyramid::pp_Pyramid()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_Pyramid::pp_Pyramid(const gp_Pnt &thePoint1,
                       const gp_Pnt &thePoint2,
                       const gp_Pnt &thePoint3,
                       const gp_Pnt &thePoint4,
                       const gp_Pnt &thePoint5)
    : myPoint1(thePoint1),
      myPoint2(thePoint2),
      myPoint3(thePoint3),
      myPoint4(thePoint4),
      myPoint5(thePoint5)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
pp_Pyramid::~pp_Pyramid()
{

}

// ============================================================================
/*!
 *  \brief Face1()
*/
// ============================================================================
pp_Quadrangle pp_Pyramid::Face1() const
{
    return pp_Quadrangle(myPoint1, myPoint4, myPoint3, myPoint2);
}

// ============================================================================
/*!
 *  \brief Face2()
*/
// ============================================================================
pp_Triangle pp_Pyramid::Face2() const
{
    return pp_Triangle(myPoint1, myPoint2, myPoint5);
}

// ============================================================================
/*!
 *  \brief Face3()
*/
// ============================================================================
pp_Triangle pp_Pyramid::Face3() const
{
    return pp_Triangle(myPoint2, myPoint3, myPoint5);
}

// ============================================================================
/*!
 *  \brief Face4()
*/
// ============================================================================
pp_Triangle pp_Pyramid::Face4() const
{
    return pp_Triangle(myPoint3, myPoint4, myPoint5);
}

// ============================================================================
/*!
 *  \brief Face5()
*/
// ============================================================================
pp_Triangle pp_Pyramid::Face5() const
{
    return pp_Triangle(myPoint4, myPoint1, myPoint5);
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt& pp_Pyramid::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt& pp_Pyramid::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief Point3()
*/
// ============================================================================
const gp_Pnt& pp_Pyramid::Point3() const
{
    return myPoint3;
}

// ============================================================================
/*!
 *  \brief Point4()
*/
// ============================================================================
const gp_Pnt& pp_Pyramid::Point4() const
{
    return myPoint4;
}

// ============================================================================
/*!
 *  \brief Point5()
*/
// ============================================================================
const gp_Pnt& pp_Pyramid::Point5() const
{
    return myPoint5;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void pp_Pyramid::SetPoint1(const gp_Pnt &thePoint1)
{
    myPoint1 = thePoint1;
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void pp_Pyramid::SetPoint2(const gp_Pnt &thePoint2)
{
    myPoint2 = thePoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint3()
*/
// ============================================================================
void pp_Pyramid::SetPoint3(const gp_Pnt &thePoint3)
{
    myPoint3 = thePoint3;
}

// ============================================================================
/*!
 *  \brief SetPoint4()
*/
// ============================================================================
void pp_Pyramid::SetPoint4(const gp_Pnt &thePoint4)
{
    myPoint4 = thePoint4;
}

// ============================================================================
/*!
 *  \brief SetPoint5()
*/
// ============================================================================
void pp_Pyramid::SetPoint5(const gp_Pnt &thePoint5)
{
    myPoint5 = thePoint5;
}

// ============================================================================
/*!
 *  \brief Volume()
*/
// ============================================================================
Standard_Real pp_Pyramid::Volume() const
{
    pp_Tetrahedron T1(myPoint1, myPoint2, myPoint3, myPoint5);
    pp_Tetrahedron T2(myPoint1, myPoint3, myPoint4, myPoint5);
    return T1.Volume() + T2.Volume();
}


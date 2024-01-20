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
#include <ACSR_StressStrainCurve.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ACSR_StressStrainCurve::ACSR_StressStrainCurve()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ACSR_StressStrainCurve::ACSR_StressStrainCurve(const Standard_Real theA0)
    : myA6(0.),
    myA5(0.),
    myA4(0.),
    myA3(0.),
    myA2(0.),
    myA1(0.),
    myA0(theA0)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ACSR_StressStrainCurve::ACSR_StressStrainCurve(const Standard_Real theA1,
                                               const Standard_Real theA0)
    : myA6(0.),
    myA5(0.),
    myA4(0.),
    myA3(0.),
    myA2(0.),
    myA1(theA1),
    myA0(theA0)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ACSR_StressStrainCurve::ACSR_StressStrainCurve(const Standard_Real theA2,
                                               const Standard_Real theA1,
                                               const Standard_Real theA0)
    : myA6(0.),
    myA5(0.),
    myA4(0.),
    myA3(0.),
    myA2(theA2),
    myA1(theA1),
    myA0(theA0)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ACSR_StressStrainCurve::ACSR_StressStrainCurve(const Standard_Real theA3,
                                               const Standard_Real theA2,
                                               const Standard_Real theA1,
                                               const Standard_Real theA0)
    : myA6(0.),
    myA5(0.),
    myA4(0.),
    myA3(theA3),
    myA2(theA2),
    myA1(theA1),
    myA0(theA0)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ACSR_StressStrainCurve::ACSR_StressStrainCurve(const Standard_Real theA4,
                                               const Standard_Real theA3,
                                               const Standard_Real theA2,
                                               const Standard_Real theA1,
                                               const Standard_Real theA0)
    : myA6(0.),
    myA5(0.),
    myA4(theA4),
    myA3(theA3),
    myA2(theA2),
    myA1(theA1),
    myA0(theA0)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ACSR_StressStrainCurve::ACSR_StressStrainCurve(const Standard_Real theA5,
                                               const Standard_Real theA4,
                                               const Standard_Real theA3,
                                               const Standard_Real theA2,
                                               const Standard_Real theA1,
                                               const Standard_Real theA0)
    : myA6(0.),
    myA5(theA5),
    myA4(theA4),
    myA3(theA3),
    myA2(theA2),
    myA1(theA1),
    myA0(theA0)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ACSR_StressStrainCurve::ACSR_StressStrainCurve(const Standard_Real theA6,
                                               const Standard_Real theA5,
                                               const Standard_Real theA4,
                                               const Standard_Real theA3,
                                               const Standard_Real theA2,
                                               const Standard_Real theA1,
                                               const Standard_Real theA0)
    : myA6(theA6),
    myA5(theA5),
    myA4(theA4),
    myA3(theA3),
    myA2(theA2),
    myA1(theA1),
    myA0(theA0)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ACSR_StressStrainCurve::~ACSR_StressStrainCurve()
{

}

// ============================================================================
/*!
 *  \brief A0()
*/
// ============================================================================
Standard_Real ACSR_StressStrainCurve::A0() const
{
    return myA0;
}

// ============================================================================
/*!
 *  \brief A1()
*/
// ============================================================================
Standard_Real ACSR_StressStrainCurve::A1() const
{
    return myA1;
}

// ============================================================================
/*!
 *  \brief A2()
*/
// ============================================================================
Standard_Real ACSR_StressStrainCurve::A2() const
{
    return myA2;
}

// ============================================================================
/*!
 *  \brief A3()
*/
// ============================================================================
Standard_Real ACSR_StressStrainCurve::A3() const
{
    return myA3;
}

// ============================================================================
/*!
 *  \brief A4()
*/
// ============================================================================
Standard_Real ACSR_StressStrainCurve::A4() const
{
    return myA4;
}

// ============================================================================
/*!
 *  \brief A5()
*/
// ============================================================================
Standard_Real ACSR_StressStrainCurve::A5() const
{
    return myA5;
}

// ============================================================================
/*!
 *  \brief A6()
*/
// ============================================================================
Standard_Real ACSR_StressStrainCurve::A6() const
{
    return myA6;
}

// ============================================================================
/*!
 *  \brief SetA0()
*/
// ============================================================================
void ACSR_StressStrainCurve::SetA0(const Standard_Real theA0)
{
    myA0 = theA0;
}

// ============================================================================
/*!
 *  \brief SetA1()
*/
// ============================================================================
void ACSR_StressStrainCurve::SetA1(const Standard_Real theA1)
{
    myA1 = theA1;
}

// ============================================================================
/*!
 *  \brief SetA2()
*/
// ============================================================================
void ACSR_StressStrainCurve::SetA2(const Standard_Real theA2)
{
    myA2 = theA2;
}

// ============================================================================
/*!
 *  \brief SetA3()
*/
// ============================================================================
void ACSR_StressStrainCurve::SetA3(const Standard_Real theA3)
{
    myA3 = theA3;
}

// ============================================================================
/*!
 *  \brief SetA4()
*/
// ============================================================================
void ACSR_StressStrainCurve::SetA4(const Standard_Real theA4)
{
    myA4 = theA4;
}

// ============================================================================
/*!
 *  \brief SetA5()
*/
// ============================================================================
void ACSR_StressStrainCurve::SetA5(const Standard_Real theA5)
{
    myA5 = theA5;
}

// ============================================================================
/*!
 *  \brief SetA6()
*/
// ============================================================================
void ACSR_StressStrainCurve::SetA6(const Standard_Real theA6)
{
    myA6 = theA6;
}





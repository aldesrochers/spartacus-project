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


#ifndef __ACSR_StressStrainCurve_hxx__
#define __ACSR_StressStrainCurve_hxx__

// OpenCascade
#include <Standard.hxx>


// ============================================================================
/*!
 *  \brief ACSR_StressStrainCurve
 *  Class implementation of coefficients of a polynomial stress-strain curve
 *  of type A6*x^6 + A5*x^5 + A4*x^4 + A3*x^3 + A2*x^2 + A1*x + A0
*/
// ============================================================================
class ACSR_StressStrainCurve
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ACSR_StressStrainCurve();
    Standard_EXPORT ACSR_StressStrainCurve(Standard_Real theA0);
    Standard_EXPORT ACSR_StressStrainCurve(Standard_Real theA1,
                                           Standard_Real theA0);
    Standard_EXPORT ACSR_StressStrainCurve(Standard_Real theA2,
                                           Standard_Real theA1,
                                           Standard_Real theA0);
    Standard_EXPORT ACSR_StressStrainCurve(Standard_Real theA3,
                                           Standard_Real theA2,
                                           Standard_Real theA1,
                                           Standard_Real theA0);
    Standard_EXPORT ACSR_StressStrainCurve(Standard_Real theA4,
                                           Standard_Real theA3,
                                           Standard_Real theA2,
                                           Standard_Real theA1,
                                           Standard_Real theA0);
    Standard_EXPORT ACSR_StressStrainCurve(Standard_Real theA5,
                                           Standard_Real theA4,
                                           Standard_Real theA3,
                                           Standard_Real theA2,
                                           Standard_Real theA1,
                                           Standard_Real theA0);
    Standard_EXPORT ACSR_StressStrainCurve(Standard_Real theA6,
                                           Standard_Real theA5,
                                           Standard_Real theA4,
                                           Standard_Real theA3,
                                           Standard_Real theA2,
                                           Standard_Real theA1,
                                           Standard_Real theA0);
    // destructors
    Standard_EXPORT ~ACSR_StressStrainCurve();

public:

    Standard_EXPORT Standard_Real       A0() const;
    Standard_EXPORT Standard_Real       A1() const;
    Standard_EXPORT Standard_Real       A2() const;
    Standard_EXPORT Standard_Real       A3() const;
    Standard_EXPORT Standard_Real       A4() const;
    Standard_EXPORT Standard_Real       A5() const;
    Standard_EXPORT Standard_Real       A6() const;

    Standard_EXPORT void                SetA0(const Standard_Real theA0);
    Standard_EXPORT void                SetA1(const Standard_Real theA1);
    Standard_EXPORT void                SetA2(const Standard_Real theA2);
    Standard_EXPORT void                SetA3(const Standard_Real theA3);
    Standard_EXPORT void                SetA4(const Standard_Real theA4);
    Standard_EXPORT void                SetA5(const Standard_Real theA5);
    Standard_EXPORT void                SetA6(const Standard_Real theA6);

private:

    Standard_Real       myA0;
    Standard_Real       myA1;
    Standard_Real       myA2;
    Standard_Real       myA3;
    Standard_Real       myA4;
    Standard_Real       myA5;
    Standard_Real       myA6;

};


#endif // __ACSR_StressStrainCurve_hxx__

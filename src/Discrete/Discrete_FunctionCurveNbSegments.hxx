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


#ifndef __Discrete_FunctionCurveNbSegments_hxx__
#define __Discrete_FunctionCurveNbSegments_hxx__

// OpenCascade
#include <Adaptor3d_Curve.hxx>
#include <math_FunctionSetWithDerivatives.hxx>


// ============================================================================
/*!
 *  \brief Discrete_FunctionCurveNbSegments
 *  Function used to discretize a curve into linear segments of equal lengths.
 *
 *  The curve is defined by end bounding parameters, the function solve for
 *  internal curve parameters that gives a certain number of segments of equal
 *  lengths. Hence, if the number of segments is X, the number of unknown
 *  mid-points of parameter U is X-1.
*/
// ============================================================================
class Discrete_FunctionCurveNbSegments : public math_FunctionSetWithDerivatives
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Discrete_FunctionCurveNbSegments(const Adaptor3d_Curve& theCurve,
                                                     const Standard_Integer theNbSegments);
    // destructors
    Standard_EXPORT ~Discrete_FunctionCurveNbSegments();

public:

    Standard_EXPORT Standard_Boolean        Derivatives(const math_Vector& X,
                                                        math_Matrix& D) Standard_OVERRIDE;
    Standard_EXPORT Standard_Integer        NbEquations() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Integer        NbVariables() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Boolean        Value(const math_Vector& X,
                                                  math_Vector& F) Standard_OVERRIDE;
    Standard_EXPORT Standard_Boolean        Values(const math_Vector& X,
                                                   math_Vector& F,
                                                   math_Matrix& D) Standard_OVERRIDE;

private:

    const Adaptor3d_Curve*  myCurve;
    Standard_Integer        myNbSegments;


};

#endif // __Discrete_FunctionCurveNbSegments_hxx__

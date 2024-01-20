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


#ifndef __DCPnts_FunctionUniformLength_hxx__
#define __DCPnts_FunctionUniformLength_hxx__

// OpenCascade
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_Matrix.hxx>
#include <math_Vector.hxx>
#include <Adaptor3d_Curve.hxx>


// ============================================================================
/*!
 *  \brief DCPnts_FunctionUniformLength
 *  Function used to compute the parameters on a continuous curve for which
 *  the linear distance between adjacent points is always the same. This is a
 *  linear discretization of a continuous curve.
*/
// ============================================================================
class DCPnts_FunctionUniformLength : public math_FunctionSetWithDerivatives
{

public:
    // constructors
    DCPnts_FunctionUniformLength(const Adaptor3d_Curve& theAdaptor,
                                 const Standard_Real theUFirst,
                                 const Standard_Real theULast,
                                 const Standard_Integer theNbSegments);
    // destructors
    ~DCPnts_FunctionUniformLength();

public:

    Standard_Boolean    Derivatives(const math_Vector& X,
                                    math_Matrix& D) Standard_OVERRIDE;
    Standard_Integer    NbEquations() const Standard_OVERRIDE;
    Standard_Integer    NbVariables() const Standard_OVERRIDE;
    Standard_Boolean    Value(const math_Vector& X,
                              math_Vector& F) Standard_OVERRIDE;
    Standard_Boolean    Values(const math_Vector& X,
                               math_Vector& F,
                               math_Matrix& D) Standard_OVERRIDE;

private:

    Standard_Address    myAdaptor;
    Standard_Integer    myNbSegments;
    Standard_Real       myUFirst;
    Standard_Real       myULast;

};

#endif // __DCPnts_FunctionUniformLength_hxx__

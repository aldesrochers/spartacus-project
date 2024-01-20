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


#ifndef __CurveGcc_FunctionCatenary2Pnts2Dirs1P_hxx__
#define __CurveGcc_FunctionCatenary2Pnts2Dirs1P_hxx__

// OpenCascade
#include <Standard.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_Matrix.hxx>
#include <math_Vector.hxx>
#include <gp_Pnt2d.hxx>


// ============================================================================
/*!
 *  \brief CurveGcc_FunctionCatenary2Pnts2Dirs1P
*/
// ============================================================================
class CurveGcc_FunctionCatenary2Pnts2Dirs1P : public math_FunctionSetWithDerivatives
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    CurveGcc_FunctionCatenary2Pnts2Dirs1P(const gp_Pnt& P1,
                                          const gp_Pnt& P2,
                                          const gp_Dir& Vx,
                                          const gp_Dir& N,
                                          const Standard_Real P);

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

    gp_Dir          myN;
    Standard_Real   myP;
    gp_Pnt          myP1;
    gp_Pnt          myP2;
    gp_Dir          myVx;

};

#endif // __CurveGcc_FunctionCatenary2Pnts2Dirs1P_hxx__

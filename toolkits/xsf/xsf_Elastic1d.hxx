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


#ifndef __xsf_Elastic1d_hxx__
#define __xsf_Elastic1d_hxx__

// OpenCascade
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_Matrix.hxx>

// Spartacus
#include <cmf_Elastic1d.hxx>


// ============================================================================
/*!
 *  \brief xsf_Elastic1d
*/
// ============================================================================
class xsf_Elastic1d : public math_FunctionSetWithDerivatives
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT xsf_Elastic1d();
    Standard_EXPORT xsf_Elastic1d(const cmp_Elastic& theMaterial,
                                  const Standard_Real theArea);
    // destructors
    Standard_EXPORT ~xsf_Elastic1d();

public:

    Standard_EXPORT Standard_Boolean    Derivatives(const math_Vector& X,
                                                    math_Matrix& D) Standard_OVERRIDE;
    Standard_EXPORT Standard_Integer    NbEquations() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Integer    NbVariables() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Boolean    Value(const math_Vector& X,
                                              math_Vector& F) Standard_OVERRIDE;
    Standard_EXPORT Standard_Boolean    Values(const math_Vector& X,
                                               math_Vector& F,
                                               math_Matrix& D) Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real           Area() const;
    Standard_EXPORT const cmp_Elastic&      Material() const;

private:

    Standard_Real   myArea;
    cmf_Elastic1d   myMaterialFunction;
    Standard_Real   myT0;

};

#endif // __xsf_Elastic1d_hxx__

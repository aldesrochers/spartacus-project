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
#include <xsf_Elastic1d.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
xsf_Elastic1d::xsf_Elastic1d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
xsf_Elastic1d::xsf_Elastic1d(const cmp_Elastic& theMaterial,
                             const Standard_Real theArea)
    : myArea(theArea)
{
    myMaterialFunction = cmf_Elastic1d(theMaterial);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
xsf_Elastic1d::~xsf_Elastic1d()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real xsf_Elastic1d::Area() const
{
    return myArea;
}

// ============================================================================
/*!
 *  \brief Material()
*/
// ============================================================================
const cmp_Elastic& xsf_Elastic1d::Material() const
{
    return myMaterialFunction.Material();
}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
Standard_Integer xsf_Elastic1d::NbEquations() const
{
    return 1;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer xsf_Elastic1d::NbVariables() const
{
    return 2;
}

// ============================================================================
/*!
 *  \brief Derivatives()
*/
// ============================================================================
Standard_Boolean xsf_Elastic1d::Derivatives(const math_Vector &X,
                                            math_Matrix &D)
{
    math_Matrix M(1,1,1,2,0.);
    myMaterialFunction.Derivatives(X, M);
    D = myArea * M;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
Standard_Boolean xsf_Elastic1d::Value(const math_Vector &X,
                                      math_Vector &F)
{
    math_Vector V(1,2,0.);
    myMaterialFunction.Value(X, V);
    F = myArea * V;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Values()
*/
// ============================================================================
Standard_Boolean xsf_Elastic1d::Values(const math_Vector &X,
                                       math_Vector &F,
                                       math_Matrix &D)
{
    if(!Value(X, F))
        return Standard_False;
    if(!Derivatives(X, D))
        return Standard_False;
    return Standard_True;
}

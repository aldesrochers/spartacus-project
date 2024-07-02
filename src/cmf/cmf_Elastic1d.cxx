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
#include <cmf_Elastic1d.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cmf_Elastic1d::cmf_Elastic1d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cmf_Elastic1d::cmf_Elastic1d(const cmp_Elastic& theMaterial)
    : myMaterial(theMaterial)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
cmf_Elastic1d::~cmf_Elastic1d()
{

}

// ============================================================================
/*!
 *  \brief Material()
*/
// ============================================================================
const cmp_Elastic& cmf_Elastic1d::Material() const
{
    return myMaterial;
}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
Standard_Integer cmf_Elastic1d::NbEquations() const
{
    return 1;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer cmf_Elastic1d::NbVariables() const
{
    return 2;
}

// ============================================================================
/*!
 *  \brief Derivatives()
*/
// ============================================================================
Standard_Boolean cmf_Elastic1d::Derivatives(const math_Vector &X,
                                            math_Matrix &D)
{
    D(1,1) = myMaterial.E();
    D(1,2) = -1. * myMaterial.Alpha() * myMaterial.E();
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
Standard_Boolean cmf_Elastic1d::Value(const math_Vector &X,
                                      math_Vector &F)
{
    Standard_Real Eps = X.Value(1);
    Standard_Real T = X.Value(2);
    F(1) = myMaterial.E() * (Eps - myMaterial.Alpha() * (T - myT0));
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Values()
*/
// ============================================================================
Standard_Boolean cmf_Elastic1d::Values(const math_Vector &X,
                                       math_Vector &F,
                                       math_Matrix &D)
{
    if(!Value(X, F))
        return Standard_False;
    if(!Derivatives(X, D))
        return Standard_False;
    return Standard_True;
}

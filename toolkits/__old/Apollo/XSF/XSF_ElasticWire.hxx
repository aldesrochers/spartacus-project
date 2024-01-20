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


#ifndef __XSF_ElasticWire_hxx__
#define __XSF_ElasticWire_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_Matrix.hxx>
#include <math_Vector.hxx>

// Spartacus
#include <material_ElasticWire.hxx>


// ============================================================================
/*!
 *  \brief XSF_ElasticWire
 *  Class implementation of an elastic cable constitutive equation.
 *  Eps(Sig, T, t) - EpsMech(Sig) + EpsTh(T) + EpsCr(Sig,T,t) = 0
 *  Eps(Sig, T, t) - Sig/E + Alpha * (T-T0) + C1*(e^(C2*(T-T0))*(Sig^C3)*(t^C4) = 0
*/
// ============================================================================
class XSF_ElasticWire : public math_FunctionSetWithDerivatives
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT XSF_ElasticWire(const material_ElasticWire& theMaterial,
                                    const Standard_Real theInitialTemperature = 0.);
    // destructors
    Standard_EXPORT ~XSF_ElasticWire();

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

public:

    Standard_EXPORT const material_ElasticWire&     Material() const;

private:

    Standard_Real           myInitialTemperature;
    material_ElasticWire    myMaterial;

};

#endif // __XSF_ElasticWire_hxx__

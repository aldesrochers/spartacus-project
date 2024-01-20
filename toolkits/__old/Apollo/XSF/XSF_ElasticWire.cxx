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
#include <XSF_ElasticWire.hxx>

// OpenCascade
#include <Standard_ConstructionError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XSF_ElasticWire::XSF_ElasticWire(const material_ElasticWire& theMaterial,
                                 const Standard_Real theInitialTemperature)
    : myInitialTemperature(theInitialTemperature),
      myMaterial(theMaterial)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
XSF_ElasticWire::~XSF_ElasticWire()
{

}

// ============================================================================
/*!
 *  \brief Derivatives()
*/
// ============================================================================
Standard_Boolean XSF_ElasticWire::Derivatives(const math_Vector &X,
                                              math_Matrix &D)
{
    Standard_Real Eps = X.Value(1);
    Standard_Real Sig = X.Value(2);
    Standard_Real Temp = X.Value(3);
    Standard_Real Time = X.Value(4);

    D(1,1) = 1. * (myMaterial.C1()*Exp(myMaterial.C2()*(Temp-myInitialTemperature))*myMaterial.C3()*Pow(Sig, myMaterial.C3() -1.)*Pow(Time,myMaterial.C4()) + 1./myMaterial.E());
    D(1,2) = 1. * (myMaterial.C1()*myMaterial.C2()*Exp(myMaterial.C2()*(Temp-myInitialTemperature))*Pow(Sig, myMaterial.C4())*Pow(Time, myMaterial.C4()) + myMaterial.Alpha());
    D(1,3) = 1. * (myMaterial.C1()*Exp(myMaterial.C2()*(Temp-myInitialTemperature))*Pow(Sig, myMaterial.C3())*myMaterial.C4()*Pow(Time, myMaterial.C4() - 1.));

    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Material()
*/
// ============================================================================
const material_ElasticWire& XSF_ElasticWire::Material() const
{
    return myMaterial;
}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
Standard_Integer XSF_ElasticWire::NbEquations() const
{
    return 1;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer XSF_ElasticWire::NbVariables() const
{
    return 4;
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
Standard_Boolean XSF_ElasticWire::Value(const math_Vector &X,
                                        math_Vector &F)
{
    Standard_Real Eps = X.Value(1);
    Standard_Real Sig = X.Value(2);
    Standard_Real Temp = X.Value(3);
    Standard_Real Time = X.Value(4);

    Standard_Real EpsMech = Sig / myMaterial.E();
    Standard_Real EpsTh = myMaterial.Alpha() * (Temp - myInitialTemperature);
    Standard_Real EpsCr = myMaterial.C1() * Exp(myMaterial.C2()*(Temp - myInitialTemperature))
            * Pow(Sig, myMaterial.C3()) + Pow(Time, myMaterial.C4());


    F(1) = Eps - EpsMech - EpsTh - EpsCr;
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Values()
*/
// ============================================================================
Standard_Boolean XSF_ElasticWire::Values(const math_Vector &X,
                                         math_Vector &F,
                                         math_Matrix &D)
{
    if(!Value(X,F))
        return Standard_False;
    if(!Derivatives(X,D))
        return Standard_False;
    return Standard_True;
}

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


#ifndef __XSM_ElasticCable_hxx__
#define __XSM_ElasticCable_hxx__

// Spartacus
#include <material_ElasticWire.hxx>
#include <XSM_Section.hxx>


// Handles
DEFINE_STANDARD_HANDLE(XSM_ElasticCable, XSM_Section);


// ============================================================================
/*!
 *  \brief XSM_ElasticCable
 *  Class implementation of an elastic cable model supporting creep.
 *
 *  The creep equation is givent as :
 *  Eps(Sig, t, T) = Sig/E + Aplha * (T - T0) + C1*(e^C2*(T-T0))*(Sig^C3)*(t^C4)
 *
 *
*/
// ============================================================================
class XSM_ElasticCable : public XSM_Section
{

public:
    // constructors
    Standard_EXPORT XSM_ElasticCable(const material_ElasticWire& theMaterial,
                                     const Standard_Real theArea,
                                     const Standard_Real theInitialTemperature = 0.);
    // destructors
    Standard_EXPORT ~XSM_ElasticCable();

public:

    Standard_EXPORT void                CommitState() Standard_OVERRIDE;
    Standard_EXPORT math_Matrix         CurrentDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         CurrentValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         CurrentVariables() const Standard_OVERRIDE;
    Standard_EXPORT math_Matrix         InitialDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         InitialValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         InitialVariables() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Integer    NbEquations() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Integer    NbVariables() const Standard_OVERRIDE;
    Standard_EXPORT math_Matrix         PreviousDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         PreviousValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         PreviousVariables() const Standard_OVERRIDE;
    Standard_EXPORT void                RevertToInitialState() Standard_OVERRIDE;
    Standard_EXPORT void                RevertToPreviousState() Standard_OVERRIDE;
    Standard_EXPORT void                SetCurrentVariables(const math_Vector& theVariables) Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real                   Area() const;
    Standard_EXPORT const material_ElasticWire&     Material() const;

private:

    Standard_Real           myArea;
    Standard_Real           myCurrentStrain;
    Standard_Real           myCurrentTemperature;
    Standard_Real           myInitialTemperature;
    Standard_Real           myPreviousStrain;
    Standard_Real           myPreviousTemperature;
    material_ElasticWire    myMaterial;

public:

    DEFINE_STANDARD_RTTIEXT(XSM_ElasticCable, XSM_Section);

};

#endif // __XSM_ElasticCable_hxx__

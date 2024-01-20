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


#ifndef __XSM_Elastic1d_hxx__
#define __XSM_Elastic1d_hxx__

// Spartacus
#include <XSM_Section.hxx>

// Forward declarations
class XSM_Elastic1d;

// Handles
DEFINE_STANDARD_HANDLE(XSM_Elastic1d, XSM_Section);


// ============================================================================
/*!
 *  \brief XSM_Elastic1d
 *  Class implementation of a 1d uniaxial material.
*/
// ============================================================================
class XSM_Elastic1d : public XSM_Section
{

public:
    // constructors
    Standard_EXPORT XSM_Elastic1d(const Standard_Real theArea,
                                  const Standard_Real theElasticModulous,
                                  const Standard_Real theAlpha = 0.,
                                  const Standard_Real theInitialStrain = 0.,
                                  const Standard_Real theInitialTemperature = 0.);
    // destructors
    Standard_EXPORT ~XSM_Elastic1d();

public:

    Standard_EXPORT Standard_Boolean    CommitState() Standard_OVERRIDE;
    Standard_EXPORT math_Matrix         CurrentDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         CurrentValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         CurrentVariables() const Standard_OVERRIDE;
    Standard_EXPORT math_Matrix         InitialDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         InitialValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         InitialVariables() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Integer    NbValues() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Integer    NbVariables() const Standard_OVERRIDE;
    Standard_EXPORT math_Matrix         PreviousDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         PreviousValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector         PreviousVariables() const Standard_OVERRIDE;
    Standard_EXPORT Standard_Boolean    RevertToInitialState() Standard_OVERRIDE;
    Standard_EXPORT Standard_Boolean    RevertToPreviousState() Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real       Alpha() const;
    Standard_EXPORT Standard_Real       Area() const;
    Standard_EXPORT Standard_Real       ElasticModulous() const;
    Standard_EXPORT Standard_Real       InitialStrain() const;
    Standard_EXPORT Standard_Real       InitialTemperature() const;

private:

    // properties
    Standard_Real       myAlpha;
    Standard_Real       myArea;
    Standard_Real       myElasticModulous;
    Standard_Real       myInitialStrain;
    Standard_Real       myInitialTemperature;

    // state variables
    Standard_Real       myCurrentStrain;
    Standard_Real       myCurrentTemperature;
    Standard_Real       myPreviousStrain;
    Standard_Real       myPreviousTemperature;

public:

    DEFINE_STANDARD_RTTIEXT(XSM_Elastic1d, XSM_Section);

};

#endif // __XSM_Elastic1d_hxx__

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


#ifndef __EM1d_ElasticTruss_hxx__
#define __EM1d_ElasticTruss_hxx__

// Spartacus
#include <EM1d_Element.hxx>

// Forward declarations
class EM1d_ElasticTruss;

// Handles
DEFINE_STANDARD_HANDLE(EM1d_ElasticTruss, EM1d_Element);


// ============================================================================
/*!
 *  \brief EM1d_ElasticTruss
 *  Class implementation of a 1d elastic truss element.
*/
// ============================================================================
class EM1d_ElasticTruss : public EM1d_Element
{

public:
    // constructors
    Standard_EXPORT EM1d_ElasticTruss(const Standard_Real theX1,
                                      const Standard_Real theX2,
                                      const Standard_Real theArea,
                                      const Standard_Real theElasticModulous);
    // destructors
    Standard_EXPORT ~EM1d_ElasticTruss();

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
    Standard_EXPORT Standard_Boolean    SetCurrentVariables(const math_Vector& theVariables) Standard_OVERRIDE;

private:

    // properties
    Standard_Real   myArea;
    Standard_Real   myElasticModulous;
    Standard_Real   myX1;
    Standard_Real   myX2;

    // state variables
    Standard_Real   myCurrentDX1;
    Standard_Real   myCurrentDX2;
    Standard_Real   myPreviousDX1;
    Standard_Real   myPreviousDX2;

public:

    DEFINE_STANDARD_RTTIEXT(EM1d_ElasticTruss, EM1d_Element);

};

#endif // __EM1d_ElasticTruss_hxx__

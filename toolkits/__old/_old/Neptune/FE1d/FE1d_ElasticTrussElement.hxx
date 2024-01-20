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


#ifndef __FE1d_ElasticTrussElement_hxx__
#define __FE1d_ElasticTrussElement_hxx__

// Spartacus
#include <FE1d_Element.hxx>
#include <FE1d_Node.hxx>

// Forward declarations
class FE1d_ElasticTrussElement;

// Handles
DEFINE_STANDARD_HANDLE(FE1d_ElasticTrussElement, FE1d_Element);


// ============================================================================
/*!
 *  \brief FE1d_ElasticTrussElement
 *  Class implementation of an elastic truss element.
*/
// ============================================================================
class FE1d_ElasticTrussElement : public FE1d_Element
{

public:
    // constructors
    Standard_EXPORT FE1d_ElasticTrussElement(const Handle(FE1d_Node)& theNode1,
                                             const Handle(FE1d_Node)& theNode2,
                                             const Standard_Real theArea,
                                             const Standard_Real theElasticModulous);
    // destructors
    Standard_EXPORT ~FE1d_ElasticTrussElement();

public:

    Standard_EXPORT math_Matrix     CurrentDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     CurrentValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     CurrentVariables() const Standard_OVERRIDE;
    Standard_EXPORT math_Matrix     InitialDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     InitialValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     InitialVariables() const Standard_OVERRIDE;
    Standard_EXPORT math_Matrix     PreviousDerivatives() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     PreviousValues() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector     PreviousVariables() const Standard_OVERRIDE;

private:

    Standard_Real           myArea;
    Standard_Real           myElasticModulous;
    Handle(FE1d_Node)       myNode1;
    Handle(FE1d_Node)       myNode2;

public:

    DEFINE_STANDARD_RTTIEXT(FE1d_ElasticTrussElement, FE1d_Element);

};

#endif // __FE1d_ElasticTrussElement_hxx__

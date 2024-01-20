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
#include <FE1d_ElasticTrussElement.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_ElasticTrussElement::FE1d_ElasticTrussElement(const Handle(FE1d_Node)& theNode1,
                                                   const Handle(FE1d_Node)& theNode2,
                                                   const Standard_Real theArea,
                                                   const Standard_Real theElasticModulous)
    : myArea(theArea),
      myElasticModulous(theElasticModulous),
      myNode1(theNode1),
      myNode2(theNode2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE1d_ElasticTrussElement::~FE1d_ElasticTrussElement()
{

}

// ============================================================================
/*!
 *  \brief CurrentDerivatives()
*/
// ============================================================================
math_Matrix FE1d_ElasticTrussElement::CurrentDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief CurrentValues()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::CurrentValues() const
{
    return CurrentDerivatives() * CurrentVariables();
}

// ============================================================================
/*!
 *  \brief CurrentVariables()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::CurrentVariables() const
{

}

// ============================================================================
/*!
 *  \brief InitialDerivatives()
*/
// ============================================================================
math_Matrix FE1d_ElasticTrussElement::InitialDerivatives() const
{
    Standard_Real L = myNode1->Distance(myNode2);
    Standard_Real K = myArea * myElasticModulous / L;

    math_Matrix aMatrix(1, 2, 1, 2, 0.);
    aMatrix(1,1) = K;
    aMatrix(1,2) = -K;
    aMatrix(2,1) = -K;
    aMatrix(2,2) = K;
    return aMatrix;
}

// ============================================================================
/*!
 *  \brief InitialValues()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::InitialValues() const
{
    return InitialDerivatives() * InitialVariables();
}

// ============================================================================
/*!
 *  \brief InitialVariables()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::InitialVariables() const
{
    math_Vector aVector(1, 2, 0.);
    return aVector;
}

// ============================================================================
/*!
 *  \brief PreviousDerivatives()
*/
// ============================================================================
math_Matrix FE1d_ElasticTrussElement::PreviousDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief PreviousValues()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::PreviousValues() const
{
    return PreviousDerivatives() * PreviousVariables();
}

// ============================================================================
/*!
 *  \brief PreviousVariables()
*/
// ============================================================================
math_Vector FE1d_ElasticTrussElement::PreviousVariables() const
{

}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE1d_ElasticTrussElement, FE1d_Element);
IMPLEMENT_STANDARD_RTTIEXT(FE1d_ElasticTrussElement, FE1d_Element);

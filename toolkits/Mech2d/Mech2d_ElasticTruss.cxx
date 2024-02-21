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
#include <Mech2d_ElasticTruss.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mech2d_ElasticTruss::Mech2d_ElasticTruss()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mech2d_ElasticTruss::Mech2d_ElasticTruss(const Standard_Real E,
                                         const Standard_Real A)
    : myA(A), myE(E)
{

}


// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mech2d_ElasticTruss::~Mech2d_ElasticTruss()
{

}

// ============================================================================
/*!
 *  \brief InitialStiffness()
*/
// ============================================================================
math_Matrix Mech2d_ElasticTruss::InitialStiffness() const
{
    math_Matrix Ke(1,2,1,2,0.);
    Ke(1,1) = myE * myA;
    Ke(1,2) = -1. * myE * myA;
    Ke(2,1) = -1. * myE * myA;
    Ke(2,2) = myE * myA;

    math_Matrix T = myTransformation->InitialTransformation();
    return T.Transposed() * Ke * T;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mech2d_ElasticTruss, Mech2d_Truss)
IMPLEMENT_STANDARD_RTTIEXT(Mech2d_ElasticTruss, Mech2d_Truss)

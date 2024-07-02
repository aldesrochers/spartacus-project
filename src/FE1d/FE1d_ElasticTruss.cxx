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
#include <FE1d_ElasticTruss.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_ElasticTruss::FE1d_ElasticTruss(const gp_Pnt1d &thePoint1,
                                     const gp_Pnt1d &thePoint2,
                                     const material_Elastic &theMaterial,
                                     const Standard_Real theArea)
    : FE1d_Truss(thePoint1, thePoint2),
    myArea(theArea),
    myMaterial(theMaterial)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE1d_ElasticTruss::~FE1d_ElasticTruss()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real FE1d_ElasticTruss::Area() const
{
    return myArea;
}

// ============================================================================
/*!
 *  \brief CommitedStiffness()
*/
// ============================================================================
math_Matrix FE1d_ElasticTruss::CommitedStiffness() const
{
    return InitialStiffness();
}

// ============================================================================
/*!
 *  \brief InitialStiffness()
*/
// ============================================================================
math_Matrix FE1d_ElasticTruss::InitialStiffness() const
{
    Standard_Real L0 = InitialLength();
    Standard_Real Ke = myMaterial.E() * myArea / L0;
    math_Matrix K(1,2,1,2,0.);
    K(1,1) = K(2,2) = Ke;
    K(1,2) = K(2,1) = -Ke;
    return K;
}

// ============================================================================
/*!
 *  \brief Material()
*/
// ============================================================================
const material_Elastic& FE1d_ElasticTruss::Material() const
{
    return myMaterial;
}

// ============================================================================
/*!
 *  \brief TrialStiffness()
*/
// ============================================================================
math_Matrix FE1d_ElasticTruss::TrialStiffness() const
{
    return InitialStiffness();
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE1d_ElasticTruss, FE1d_Truss)
IMPLEMENT_STANDARD_RTTIEXT(FE1d_ElasticTruss, FE1d_Truss)

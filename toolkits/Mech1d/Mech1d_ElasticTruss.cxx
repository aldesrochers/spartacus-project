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
#include <Mech1d_ElasticTruss.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mech1d_ElasticTruss::Mech1d_ElasticTruss(const gp_Pnt1d& thePoint1,
                                         const gp_Pnt1d& thePoint2,
                                         const Standard_Real theModulous,
                                         const Standard_Real theArea)
    : Mech1d_Truss(thePoint1, thePoint2),
    myArea(theArea),
    myModulous(theModulous)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mech1d_ElasticTruss::~Mech1d_ElasticTruss()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real Mech1d_ElasticTruss::Area() const
{
    return myArea;
}

// ============================================================================
/*!
 *  \brief CommitedStiffness()
*/
// ============================================================================
math_Matrix Mech1d_ElasticTruss::CommitedStiffness() const
{
    return InitialStiffness();
}

// ============================================================================
/*!
 *  \brief InitialStiffness()
*/
// ============================================================================
math_Matrix Mech1d_ElasticTruss::InitialStiffness() const
{
    Standard_Real Ke = myArea * myModulous / InitialLength();
    math_Matrix K(1,2,1,2,0.);
    K(1,1) = Ke;
    K(1,2) = -Ke;
    K(2,1) = -Ke;
    K(2,2) = Ke;
    return K;
}

// ============================================================================
/*!
 *  \brief Modulous()
*/
// ============================================================================
Standard_Real Mech1d_ElasticTruss::Modulous() const
{
    return myModulous;
}

// ============================================================================
/*!
 *  \brief TrialDisplacements()
*/
// ============================================================================
math_Vector Mech1d_ElasticTruss::TrialDisplacements() const
{
    math_Vector aVector(1,2,0.);
    //aVector(1) = myPoint1->DX()->TrialDisplacement();
    //aVector(2) = myPoint2->DX()->TrialDisplacement();
    return aVector;
}

// ============================================================================
/*!
 *  \brief TrialStiffness()
*/
// ============================================================================
math_Matrix Mech1d_ElasticTruss::TrialStiffness() const
{
    return InitialStiffness();
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mech1d_ElasticTruss, Mech1d_Truss)
IMPLEMENT_STANDARD_RTTIEXT(Mech1d_ElasticTruss, Mech1d_Truss)

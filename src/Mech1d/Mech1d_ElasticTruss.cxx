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
#include <FEAbs_TypeOfQuantity.hxx>
#include <Mech1d_ElasticTruss.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mech1d_ElasticTruss::Mech1d_ElasticTruss()
    : myCommitedDisplacements(1, 2, 0.),
    myInitialDisplacements(1, 2, 0.),
    myTrialDisplacements(1, 2, 0.)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mech1d_ElasticTruss::Mech1d_ElasticTruss(const gp_Pnt1d& thePoint1,
                                         const gp_Pnt1d& thePoint2,
                                         const material_Elastic& theMaterial,
                                         const Standard_Real theArea)
    : Mech1d_Truss(thePoint1, thePoint2),
    myArea(theArea),
    myCommitedDisplacements(1, 2, 0.),
    myInitialDisplacements(1, 2, 0.),
    myMaterial(theMaterial),
    myTrialDisplacements(1, 2, 0.)
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
 *  \brief CommitedDisplacements()
*/
// ============================================================================
math_Vector Mech1d_ElasticTruss::CommitedDisplacements() const
{
    return myCommitedDisplacements;
}

// ============================================================================
/*!
 *  \brief CommitedForces()
*/
// ============================================================================
math_Vector Mech1d_ElasticTruss::CommitedForces() const
{
    return CommitedStiffness() * CommitedDisplacements();
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
const material_Elastic& Mech1d_ElasticTruss::Material() const
{
    return myMaterial;
}

// ============================================================================
/*!
 *  \brief SetMaterial()
*/
// ============================================================================
void Mech1d_ElasticTruss::SetMaterial(const material_Elastic &theMaterial)
{
    myMaterial = theMaterial;
}

// ============================================================================
/*!
 *  \brief SetTrialDisplacements()
*/
// ============================================================================
void Mech1d_ElasticTruss::SetTrialDisplacements(const math_Vector &theDisplacements)
{
    if(theDisplacements.Length() != 2)
        throw Standard_DomainError("Mech1d_ElasticTruss::SetTrialDisplacements()");
    myTrialDisplacements = theDisplacements;
}

// ============================================================================
/*!
 *  \brief TrialDisplacements()
*/
// ============================================================================
math_Vector Mech1d_ElasticTruss::TrialDisplacements() const
{
    return myTrialDisplacements;
}

// ============================================================================
/*!
 *  \brief TrialForces()
*/
// ============================================================================
math_Vector Mech1d_ElasticTruss::TrialForces() const
{
    return TrialStiffness() * TrialDisplacements();
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

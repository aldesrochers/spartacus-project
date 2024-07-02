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


#ifndef __Mech1d_ElasticTruss_hxx__
#define __Mech1d_ElasticTruss_hxx__

// Spartacus
#include <material_Elastic.hxx>
#include <Mech1d_Truss.hxx>

// Forward declarations
class Mech1d_ElasticTruss;

// Handles
DEFINE_STANDARD_HANDLE(Mech1d_ElasticTruss, Mech1d_Truss)


// ============================================================================
/*!
 *  \brief Mech1d_ElasticTruss
*/
// ============================================================================
class Mech1d_ElasticTruss : public Mech1d_Truss
{

public:
    // constructors
    Standard_EXPORT Mech1d_ElasticTruss();
    Standard_EXPORT Mech1d_ElasticTruss(const gp_Pnt1d& thePoint1,
                                        const gp_Pnt1d& thePoint2,
                                        const material_Elastic& theMaterial,
                                        const Standard_Real theArea);
    // destructors
    Standard_EXPORT ~Mech1d_ElasticTruss();

public:

    Standard_EXPORT math_Vector             CommitedDisplacements() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector             CommitedForces() const Standard_OVERRIDE;
    Standard_EXPORT math_Matrix             CommitedStiffness() const Standard_OVERRIDE;
    Standard_EXPORT math_Matrix             InitialStiffness() const Standard_OVERRIDE;
    Standard_EXPORT void                    SetTrialDisplacements(const math_Vector& theDisplacements) Standard_OVERRIDE;
    Standard_EXPORT math_Vector             TrialDisplacements() const Standard_OVERRIDE;
    Standard_EXPORT math_Vector             TrialForces() const Standard_OVERRIDE;
    Standard_EXPORT math_Matrix             TrialStiffness() const Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real           Area() const;
    Standard_EXPORT const material_Elastic& Material() const;
    Standard_EXPORT void                    SetArea(const Standard_Real theArea);
    Standard_EXPORT void                    SetMaterial(const material_Elastic& theMaterial);

private:

    Standard_Real       myArea;
    math_Vector         myCommitedDisplacements;
    math_Vector         myInitialDisplacements;
    material_Elastic    myMaterial;
    math_Vector         myTrialDisplacements;

public:

    DEFINE_STANDARD_RTTIEXT(Mech1d_ElasticTruss, Mech1d_Truss)

};


#endif // __Mech1d_ElasticTruss_hxx__

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


#ifndef __FE2d_ElasticTruss_hxx__
#define __FE2d_ElasticTruss_hxx__

// Spartacus
#include <cmp_Elastic.hxx>
#include <FE2d_Element.hxx>

// OpenCascade
#include <gp_Pnt2d.hxx>

// Forward declarations
class FE2d_ElasticTruss;

// Handles
DEFINE_STANDARD_HANDLE(FE2d_ElasticTruss, FE2d_Element);


// ============================================================================
/*!
 *  \brief FE2d_ElasticTruss
*/
// ============================================================================
class FE2d_ElasticTruss : public FE2d_Element
{

public:
    // constructors
    Standard_EXPORT FE2d_ElasticTruss(const gp_Pnt2d& thePoint1,
                                      const gp_Pnt2d& thePoint2,
                                      const cmp_Elastic& theMaterial,
                                      const Standard_Real theArea);
    // destructors
    Standard_EXPORT ~FE2d_ElasticTruss();

public:

    Standard_EXPORT math_Matrix     InitialStiffness() const Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real   InitialLength() const;

private:

    Standard_Real       myArea;
    cmp_Elastic         myMaterial;
    gp_Pnt2d            myPoint1;
    gp_Pnt2d            myPoint2;

public:

    DEFINE_STANDARD_RTTIEXT(FE2d_ElasticTruss, FE2d_Element);

};


#endif // __FE2d_ElasticTruss_hxx__

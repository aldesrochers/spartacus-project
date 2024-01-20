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


#include <iostream>
using namespace std;

// Spartacus
#include <FE2d_ElasticTruss.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE2d_ElasticTruss::FE2d_ElasticTruss(const gp_Pnt2d& thePoint1,
                                     const gp_Pnt2d& thePoint2,
                                     const cmp_Elastic& theMaterial,
                                     const Standard_Real theArea)
    : myArea(theArea),
    myMaterial(theMaterial),
    myPoint1(thePoint1),
    myPoint2(thePoint2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE2d_ElasticTruss::~FE2d_ElasticTruss()
{

}

// ============================================================================
/*!
 *  \brief InitialStiffness()
*/
// ============================================================================
math_Matrix FE2d_ElasticTruss::InitialStiffness() const
{
    gp_Vec2d aVec(myPoint1, myPoint2);
    gp_Dir2d aDir(aVec);




    math_Matrix K(1,4,1,4,0.);
    Standard_Real C = (myPoint2.X() - myPoint1.X()) / InitialLength();
    Standard_Real S = (myPoint2.Y() - myPoint1.Y()) / InitialLength();
    K(1,1) = C*C;
    K(1,2) = C*S;
    K(1,3) = -C*C;
    K(1,4) = -C*S;
    K(2,1) = C*S;
    K(2,2) = S*S;
    K(2,3) = -C*S;
    K(2,4) = -S*S;
    K(3,1) = -C*C;
    K(3,2) = -C*S;
    K(3,3) = C*C;
    K(3,4) = C*S;
    K(4,1) = -C*S;
    K(4,2) = -S*S;
    K(4,3) = C*S;
    K(4,4) = S*S;
    return myMaterial.E() * myArea / InitialLength() * K;
}

// ============================================================================
/*!
 *  \brief InitialLength()
*/
// ============================================================================
Standard_Real FE2d_ElasticTruss::InitialLength() const
{
    return myPoint1.Distance(myPoint2);
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE2d_ElasticTruss, FE2d_Element);
IMPLEMENT_STANDARD_RTTIEXT(FE2d_ElasticTruss, FE2d_Element);

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
#include <Trsf2d_LinearTruss.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Trsf2d_LinearTruss::Trsf2d_LinearTruss()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Trsf2d_LinearTruss::Trsf2d_LinearTruss(const Handle(Mesh2d_LinearLine)& theCell)
    : Trsf2d_Truss(theCell)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Trsf2d_LinearTruss::~Trsf2d_LinearTruss()
{

}

// ============================================================================
/*!
 *  \brief CurrentTransformation()
*/
// ============================================================================
math_Matrix Trsf2d_LinearTruss::CurrentTransformation(const math_Vector &theDisplacements)
{
    return InitialTransformation();
}

// ============================================================================
/*!
 *  \brief InitialTransformation()
*/
// ============================================================================
math_Matrix Trsf2d_LinearTruss::InitialTransformation() const
{
    gp_Pnt2d P1 = myCell->Node1()->Point();
    gp_Pnt2d P2 = myCell->Node2()->Point();
    gp_Vec2d V(P1,P2);
    math_Matrix T(1,2,1,4,0.);
    T(1,1) = V.X();
    T(1,2) = V.Y();
    T(2,3) = V.X();
    T(2,4) = V.Y();
    return T;

}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Trsf2d_LinearTruss, Trsf2d_Truss)
IMPLEMENT_STANDARD_RTTIEXT(Trsf2d_LinearTruss, Trsf2d_Truss)

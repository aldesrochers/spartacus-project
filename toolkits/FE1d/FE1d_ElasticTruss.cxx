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
FE1d_ElasticTruss::FE1d_ElasticTruss()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_ElasticTruss::FE1d_ElasticTruss(const Handle(FE1d_Node) &theNode1,
                                     const Handle(FE1d_Node) &theNode2,
                                     const Standard_Real theModulous,
                                     const Standard_Real theArea)
    : FE1d_Truss(theNode1, theNode2),
    myArea(theArea), myModulous(theModulous)
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
 *  \brief CommitedDerivatives()
*/
// ============================================================================
math_Matrix FE1d_ElasticTruss::CommitedDerivatives() const
{
    return InitialDerivatives();
}

// ============================================================================
/*!
 *  \brief InitialDerivatives()
*/
// ============================================================================
math_Matrix FE1d_ElasticTruss::InitialDerivatives() const
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
Standard_Real FE1d_ElasticTruss::Modulous() const
{
    return myModulous;
}

// ============================================================================
/*!
 *  \brief SetArea()
*/
// ============================================================================
void FE1d_ElasticTruss::SetArea(const Standard_Real theArea)
{
    myArea = theArea;
}

// ============================================================================
/*!
 *  \brief SetModulous()
*/
// ============================================================================
void FE1d_ElasticTruss::SetModulous(const Standard_Real theModulous)
{
    myModulous = theModulous;
}

// ============================================================================
/*!
 *  \brief TrialDerivatives()
*/
// ============================================================================
math_Matrix FE1d_ElasticTruss::TrialDerivatives() const
{
    return InitialDerivatives();
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE1d_ElasticTruss, FE1d_Truss)
IMPLEMENT_STANDARD_RTTIEXT(FE1d_ElasticTruss, FE1d_Truss)

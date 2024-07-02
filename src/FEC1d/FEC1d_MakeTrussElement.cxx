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
#include <FEC1d_MakeTrussElement.hxx>
#include <Mech1d_ElasticTruss.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEC1d_MakeTrussElement::FEC1d_MakeTrussElement()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FEC1d_MakeTrussElement::~FEC1d_MakeTrussElement()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void FEC1d_MakeTrussElement::Initialize(const Handle(FE1d_Node) &theNode1,
                                        const Handle(FE1d_Node) &theNode2,
                                        const material_Elastic &theMaterial,
                                        const Standard_Real theArea)
{
    const gp_Pnt1d& aPoint1 = theNode1->Point();
    const gp_Pnt1d& aPoint2 = theNode2->Point();
    Handle(Mech1d_ElasticTruss) aTruss = new Mech1d_ElasticTruss(aPoint1, aPoint2, theMaterial, theArea);



}


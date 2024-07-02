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
#include <FEC_MakeTrussElement.hxx>
#include <Mech1d_ElasticTruss.hxx>

// OpenCascade
#include <Standard_NotImplemented.hxx>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEC_MakeTrussElement::FEC_MakeTrussElement(const Handle(FE_Node)& theNode1,
                                           const Handle(FE_Node)& theNode2,
                                           const material_Elastic& theMaterial,
                                           const Standard_Real theArea)
{
    Initialize(theNode1, theNode2, theMaterial, theArea);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FEC_MakeTrussElement::~FEC_MakeTrussElement()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void FEC_MakeTrussElement::Initialize(const Handle(FE_Node) &theNode1,
                                      const Handle(FE_Node) &theNode2,
                                      const material_Elastic &theMaterial,
                                      const Standard_Real theArea)
{
    const Handle(FE_Point)& aPoint1 = theNode1->Point();
    const Handle(FE_Point)& aPoint2 = theNode2->Point();

    if(aPoint1->IsPoint1d() && aPoint2->IsPoint1d()) {
        // build a 1d truss
        const gp_Pnt1d& aPnt1 = aPoint1->Point1d();
        const gp_Pnt1d& aPnt2 = aPoint2->Point1d();
        Handle(Mech1d_ElasticTruss) aTruss = new Mech1d_ElasticTruss(aPnt1, aPnt2, theMaterial, theArea);


    } else if(aPoint1->IsPoint2d() && aPoint2->IsPoint2d()) {
        // build a 2d truss
        const gp_Pnt2d& aPnt1 = aPoint1->Point2d();
        const gp_Pnt2d& aPnt2 = aPoint2->Point2d();
        throw Standard_NotImplemented("FEC_MakeTrussElement::Initialize()");
    } else if(aPoint1->IsPoint3d() && aPoint2->IsPoint3d()) {
        // build a 3d truss
        const gp_Pnt& aPnt1 = aPoint1->Point3d();
        const gp_Pnt& aPnt2 = aPoint2->Point3d();
        throw Standard_NotImplemented("FEC_MakeTrussElement::Initialize()");
    } else {
        myError = FEC_ElementNodeDimensionalityError;
        SetNotDone();
        return;
    }

}

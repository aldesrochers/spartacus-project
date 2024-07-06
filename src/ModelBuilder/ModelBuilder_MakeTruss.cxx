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
#include <Model_MechanicalElement1d.hxx>
#include <ModelAdaptor_Point.hxx>
#include <ModelBuilder_MakeTruss.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Tool.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeTruss::ModelBuilder_MakeTruss(const ModelDS_Node& theNode1,
                                               const ModelDS_Node& theNode2,
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
ModelBuilder_MakeTruss::~ModelBuilder_MakeTruss()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeTruss::Initialize(const ModelDS_Node& theNode1,
                                        const ModelDS_Node& theNode2,
                                        const material_Elastic& theMaterial,
                                        const Standard_Real theArea)
{
    // initialize with no error
    myError = ModelBuilder_ElementNoError;

    // retrieve points from node
    const Handle(Model_Point)& aPoint1 = ModelDS_Tool::Point(theNode1);
    const Handle(Model_Point)& aPoint2 = ModelDS_Tool::Point(theNode2);
    ModelAdaptor_Point anAdaptor1(aPoint1);
    ModelAdaptor_Point anAdaptor2(aPoint2);

    // append nodes
    myNodes.Add(theNode1);
    myNodes.Add(theNode2);

    // ***
    // process, create element model
    // ***
    if(anAdaptor1.IsPoint1d() && anAdaptor2.IsPoint1d()) {
        // make a 1d truss
        const gp_Pnt1d& aPnt1 = anAdaptor1.Point1d();
        const gp_Pnt1d& aPnt2 = anAdaptor2.Point1d();
        Handle(Mech1d_ElasticTruss) aTruss = new Mech1d_ElasticTruss(aPnt1, aPnt2, theMaterial, theArea);
        myModel = new Model_MechanicalElement1d(aTruss);

    } else if(anAdaptor1.IsPoint2d() && anAdaptor2.IsPoint2d()) {
        // make a 2d truss

    } else if(anAdaptor1.IsPoint3d() && anAdaptor2.IsPoint3d()) {
        // make a 3d truss

    } else {
        myError = ModelBuilder_ElementNodeDimensionError;
        SetNotDone();
        return;
    }




}

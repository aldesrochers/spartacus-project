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
#include <Mech1d_ElasticTruss.hxx>
#include <MeshDS_Tool.hxx>
#include <ModelBuilder_MakeTruss1d.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Tool.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeTruss1d::ModelBuilder_MakeTruss1d(const ModelDS_Node& theNode1,
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
ModelBuilder_MakeTruss1d::~ModelBuilder_MakeTruss1d()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeTruss1d::Initialize(const ModelDS_Node &theNode1,
                                          const ModelDS_Node &theNode2,
                                          const material_Elastic &theMaterial,
                                          const Standard_Real theArea)
{
    // check for valid nodes
    if(!ModelDS_Tool::IsPoint1d(theNode1)) {
        myError = ModelBuilder_ElementNodeDimensionError;
        return;
    }
    if(!ModelDS_Tool::IsPoint1d(theNode2)) {
        myError = ModelBuilder_ElementNodeDimensionError;
        return;
    }

    // retrieve points
    const gp_Pnt1d& aPoint1 = ModelDS_Tool::Point1d(theNode1);
    const gp_Pnt1d& aPoint2 = ModelDS_Tool::Point1d(theNode2);
    Handle(Mech1d_ElasticTruss) aTruss = new Mech1d_ElasticTruss(aPoint1, aPoint2, theMaterial, theArea);



}

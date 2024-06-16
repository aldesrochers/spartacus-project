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
#include <DOF_Translation.hxx>
#include <FEA_LinearAnalysis.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshDS_Tool.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Tool.hxx>
#include <ModelAlgo_ElementaryMatrices.hxx>
#include <ModelAlgo_PlainNumberer.hxx>
#include <ModelRep_MechElement1d.hxx>

#include <UCM_Elastic.hxx>


// ============================================================================
/*!
 *  \brief Test_Mesh
*/
// ============================================================================
int main(int argc, char** argv)
{

    // make mesh

    MeshDS_Builder aMeshBuilder;
    MeshDS_Vertex V1, V2;
    aMeshBuilder.MakeVertex(V1, gp_Pnt1d(0));
    aMeshBuilder.MakeVertex(V2, gp_Pnt1d(1));

    MeshDS_Cell C1;
    aMeshBuilder.MakeCell(C1, MeshAbs_CELL_LinearLine1d);
    aMeshBuilder.AddVertex(C1, V1);
    aMeshBuilder.AddVertex(C1, V2);

    // make model

    ModelDS_Builder aModelBuilder;

    ModelDS_DOF DX1, DX2;
    aModelBuilder.MakeDOF(DX1, ModelAbs_DOF_DX);
    aModelBuilder.MakeDOF(DX2, ModelAbs_DOF_DX);

    ModelDS_Node N1, N2;
    aModelBuilder.MakeNode(N1, V1);
    aModelBuilder.MakeNode(N2, V2);
    aModelBuilder.AddDOF(N1, DX1);
    aModelBuilder.AddDOF(N2, DX2);

    //Handle(Mech1d_ElasticTruss) aTruss = new Mech1d_ElasticTruss(gp_Pnt1d(0), gp_Pnt1d(1), 2E11, 1E-4);
    //Handle(ModelRep_MechElement1d) aTrussModel = new ModelRep_MechElement1d(aTruss);

    ModelDS_Element E1;
    aModelBuilder.MakeElement(E1);
    aModelBuilder.AddDOF(E1, DX1);
    aModelBuilder.AddDOF(E1, DX2);

    ModelDS_Model aModel;
    aModelBuilder.MakeModel(aModel);
    aModelBuilder.AddElement(aModel, E1);

    ModelDS_Boundary aBoundary;
    aModelBuilder.MakeBoundary(aBoundary);
    aModelBuilder.AddDOF(aBoundary, DX1);

    ModelDS_Load aLoad;
    aModelBuilder.MakeLoad(aLoad);

    ModelDS_Loading aLoading;
    aModelBuilder.MakeLoading(aLoading);
    aModelBuilder.AddBoundary(aLoading, aBoundary);
    aModelBuilder.AddLoad(aLoading, aLoad);


    ModelAlgo_ElementaryMatrices anAlgo;
    anAlgo.SetModel(aModel);
    //cout << anAlgo.Perform() << endl;


    cmp_Elastic aMaterial(2E11, 1E-4);
    Handle(UCM_Elastic) aModel2 = new UCM_Elastic(aMaterial);

    math_Vector VV1(1,2,0.);
    VV1(1) = 1E-3;
    VV1(2) = 0;

    aModel2->SetTrialVariables(VV1);
    cout << aModel2->TrialDerivatives() << endl;
    cout << aModel2->TrialValues() << endl;

    return 0;
}

# =============================================================================
# Copyright (C) 2021-
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
#
# Alexis L. Desrochers (alexisdesrochers@gmail.com)
#
# =============================================================================

# =============================================================================
# Package : BRepCell
# =============================================================================

set(BRepCell_PKG_HEADERS
    BRepCell/BRepCell_Command.hxx
    BRepCell/BRepCell_Error.hxx
    BRepCell/BRepCell_MakeCell.hxx
    BRepCell/BRepCell_MakeLine.hxx
    BRepCell/BRepCell_MakeTriangle.hxx
)

set(BRepCell_PKG_SOURCES
    BRepCell/BRepCell_Command.cxx
    BRepCell/BRepCell_MakeCell.cxx
    BRepCell/BRepCell_MakeLine.cxx
    BRepCell/BRepCell_MakeTriangle.cxx
)

# =============================================================================
# Package : BRepCellAPI
# =============================================================================

set(BRepCellAPI_PKG_HEADERS
    BRepCellAPI/BRepCellAPI_MakeCell.hxx
    BRepCellAPI/BRepCellAPI_MakeLinearLine.hxx
)

set(BRepCellAPI_PKG_SOURCES
    BRepCellAPI/BRepCellAPI_MakeCell.cxx
    BRepCellAPI/BRepCellAPI_MakeLinearLine.cxx
)

# =============================================================================
# Package : BRepPoly
# =============================================================================

set(BRepPoly_PKG_HEADERS
    BRepPoly/BRepPoly_MakeShape.hxx
    BRepPoly/BRepPoly_MakeLine.hxx
    BRepPoly/BRepPoly_MakeQuadrangle.hxx
    BRepPoly/BRepPoly_MakeTriangle.hxx
)

set(BRepPoly_PKG_SOURCES
    BRepPoly/BRepPoly_MakeShape.cxx
    BRepPoly/BRepPoly_MakeLine.cxx
    BRepPoly/BRepPoly_MakeQuadrangle.cxx
    BRepPoly/BRepPoly_MakeTriangle.cxx
)

# =============================================================================
# Package : BRepPolyAPI
# =============================================================================

set(BRepPolyAPI_PKG_HEADERS
    #BRepPolyAPI/BRepPolyAPI_MakeHexahedron.hxx
    #BRepPolyAPI/BRepPolyAPI_MakeLine.hxx
    #BRepPolyAPI/BRepPolyAPI_MakePentahedron.hxx
    #BRepPolyAPI/BRepPolyAPI_MakePyramid.hxx
    #BRepPolyAPI/BRepPolyAPI_MakeQuadrangle.hxx
    BRepPolyAPI/BRepPolyAPI_MakeShape.hxx
    #BRepPolyAPI/BRepPolyAPI_MakeTetrahedron.hxx
    #BRepPolyAPI/BRepPolyAPI_MakeTriangle.hxx
)

set(BRepPolyAPI_PKG_SOURCES
    #BRepPolyAPI/BRepPolyAPI_MakeHexahedron.cxx
    #BRepPolyAPI/BRepPolyAPI_MakeLine.cxx
    #BRepPolyAPI/BRepPolyAPI_MakePentahedron.cxx
    #BRepPolyAPI/BRepPolyAPI_MakePyramid.cxx
    #BRepPolyAPI/BRepPolyAPI_MakeQuadrangle.cxx
    #BRepPolyAPI/BRepPolyAPI_MakeShape.cxx
    #BRepPolyAPI/BRepPolyAPI_MakeTetrahedron.cxx
    #BRepPolyAPI/BRepPolyAPI_MakeTriangle.cxx
)

# =============================================================================
# Package : CM
# =============================================================================

set(CM_PKG_HEADERS
    CM/CM_Material.hxx
)

set(CM_PKG_SOURCES
    CM/CM_Material.cxx
)

# =============================================================================
# Package : cmf
# =============================================================================

set(cmf_PKG_HEADERS
    cmf/cmf_Elastic1d.hxx
)

set(cmf_PKG_SOURCES
    cmf/cmf_Elastic1d.cxx
)

# =============================================================================
# Package : cmp
# =============================================================================

set(cmp_PKG_HEADERS
    cmp/cmp_Elastic.hxx
)

set(cmp_PKG_SOURCES
    cmp/cmp_Elastic.cxx
)

# =============================================================================
# Package : cp
# =============================================================================

set(cp_PKG_HEADERS
    cp/cp_LinearLine.hxx
    cp/cp_QuadraticLine.hxx
)

set(cp_PKG_SOURCES

)

# =============================================================================
# Package : DOF
# =============================================================================

set(DOF_PKG_HEADERS
    DOF/DOF_DegreeOfFreedom.hxx
    DOF/DOF_Motion.hxx
    DOF/DOF_Translation.hxx
)

set(DOF_PKG_SOURCES
    DOF/DOF_DegreeOfFreedom.cxx
    DOF/DOF_Motion.cxx
    DOF/DOF_Translation.cxx
)

# =============================================================================
# Package : DOFAbs
# =============================================================================

set(DOFAbs_PKG_HEADERS
    DOFAbs/DOFAbs_TypeOfAxis.hxx
    DOFAbs/DOFAbs_TypeOfMotion.hxx
)

set(DOFAbs_PKG_SOURCES

)

# =============================================================================
# Package : ElePRep
# =============================================================================

set(ElePRep_PKG_HEADERS
    ElePRep/ElePRep_TElementProperties.hxx
)

set(ElePRep_PKG_SOURCES
    ElePRep/ElePRep_TElementProperties.cxx
)

# =============================================================================
# Package : EleProp
# =============================================================================

set(EleProp_PKG_HEADERS
    EleProp/EleProp_Catalog.hxx
    EleProp/EleProp_Element.hxx
    EleProp/EleProp_Object.hxx
    EleProp/EleProp_TrussElement.hxx
    EleProp/EleProp_TypeOfProperty.hxx
    EleProp/EleProp_TypeOfSection.hxx
)

set(EleProp_PKG_SOURCES
    EleProp/EleProp_Catalog.cxx
    EleProp/EleProp_Element.cxx
    EleProp/EleProp_Object.cxx
    EleProp/EleProp_TrussElement.cxx
)

# =============================================================================
# Package : FE1d
# =============================================================================

set(FE1d_PKG_HEADERS
    FE1d/FE1d_ElasticTruss.hxx
    FE1d/FE1d_Element.hxx
    FE1d/FE1d_Truss.hxx
)

set(FE1d_PKG_SOURCES
    FE1d/FE1d_Element.cxx
    FE1d/FE1d_Truss.cxx
)

# =============================================================================
# Package : FE
# =============================================================================

set(FE_PKG_HEADERS
    FE/FE_Element.hxx
    FE/FE_Function.hxx
    FE/FE_Object.hxx
)

set(FE_PKG_SOURCES
    FE/FE_Element.cxx
    FE/FE_Function.cxx
    FE/FE_Object.cxx
)

# =============================================================================
# Package : FEAbs
# =============================================================================

set(FEAbs_PKG_HEADERS
    FEAbs/FEAbs_TypeOfQuantity.hxx
)

# =============================================================================
# Package : FEA
# =============================================================================

set(FEA_PKG_HEADERS
    FEA/FEA_Analysis.hxx
    FEA/FEA_LinearAnalysis.hxx
)

set(FEA_PKG_SOURCES
    FEA/FEA_Analysis.cxx
    FEA/FEA_LinearAnalysis.cxx
)

# =============================================================================
# Package : FEM
# =============================================================================

set(FEM_PKG_HEADERS
    FEM/FEM_Model.hxx
    FEM/FEM_Object.hxx
)

set(FEM_PKG_SOURCES
    FEM/FEM_Model.cxx
    FEM/FEM_Object.cxx
)

# =============================================================================
# Package : fep
# =============================================================================

set(fep_PKG_HEADERS
    fep/fep_Rotation.hxx
    fep/fep_Translation.hxx
)

set(fep_PKG_SOURCES
    fep/fep_Rotation.cxx
    fep/fep_Translation.cxx
)

# =============================================================================
# Package : gp
# =============================================================================

set(gp_PKG_HEADERS
    gp/gp_Catenary.hxx
    gp/gp_Catenary2d.hxx
    gp/gp_Pnt1d.hxx
)

set(gp_PKG_SOURCES
    gp/gp_Catenary.cxx
    gp/gp_Catenary2d.cxx
    gp/gp_Pnt1d.cxx
)

# =============================================================================
# Package : load
# =============================================================================

set(load_PKG_HEADERS
    load/load_Force.hxx
    load/load_Force1d.hxx
    load/load_Force2d.hxx
)

set(load_PKG_SOURCES
    load/load_Force.cxx
    load/load_Force1d.cxx
    load/load_Force2d.cxx
)

# =============================================================================
# Package : material
# =============================================================================

set(material_PKG_HEADERS
    material/material_Elastic.hxx
)

set(material_PKG_SOURCES
    material/material_Elastic.cxx
)

# =============================================================================
# Package : math
# =============================================================================

set(math_PKG_HEADERS
    math/math_HysteresisFunction.hxx
)

set(math_PKG_SOURCES
    math/math_HysteresisFunction.cxx
)

# =============================================================================
# Package : Mech1d
# =============================================================================

set(Mech1d_PKG_HEADERS
    Mech1d/Mech1d_ElasticTruss.hxx
    Mech1d/Mech1d_Truss.hxx
)

set(Mech1d_PKG_SOURCES
    Mech1d/Mech1d_ElasticTruss.cxx
    Mech1d/Mech1d_Truss.cxx
)

# =============================================================================
# Package : Mech2d
# =============================================================================

set(Mech2d_PKG_HEADERS
    Mech2d/Mech2d_ElasticTruss.hxx
    Mech2d/Mech2d_Element.hxx
    Mech2d/Mech2d_Object.hxx
    Mech2d/Mech2d_Truss.hxx
)

set(Mech2d_PKG_SOURCES
    Mech2d/Mech2d_ElasticTruss.cxx
    Mech2d/Mech2d_Element.cxx
    Mech2d/Mech2d_Object.cxx
    Mech2d/Mech2d_Truss.cxx
)

# =============================================================================
# Package : Mesh
# =============================================================================

set(Mesh_PKG_HEADERS
    Mesh/Mesh_Grid.hxx
    Mesh/Mesh_Grid1d.hxx
)

set(Mesh_PKG_SOURCES
    Mesh/Mesh_Grid.cxx
    Mesh/Mesh_Grid1d.cxx
)

# =============================================================================
# Package : Mesh1d
# =============================================================================

set(Mesh1d_PKG_HEADERS
    Mesh1d/Mesh1d_Builder.hxx
    Mesh1d/Mesh1d_Point.hxx
)

set(Mesh1d_PKG_SOURCES
    Mesh1d/Mesh1d_Builder.cxx
    Mesh1d/Mesh1d_Point.cxx
)

# =============================================================================
# Package : Mesh2d
# =============================================================================

set(Mesh2d_PKG_HEADERS
    Mesh2d/Mesh2d_Cell.hxx
    Mesh2d/Mesh2d_LinearLine.hxx
    Mesh2d/Mesh2d_Node.hxx
    Mesh2d/Mesh2d_Object.hxx
)

set(Mesh2d_PKG_SOURCES
    Mesh2d/Mesh2d_Cell.cxx
    Mesh2d/Mesh2d_LinearLine.cxx
    Mesh2d/Mesh2d_Node.cxx
    Mesh2d/Mesh2d_Object.cxx
)

# =============================================================================
# Package : Mesh
# =============================================================================

set(Mesh_PKG_HEADERS
    Mesh/Mesh_Array1OfCell.hxx
    Mesh/Mesh_Array1OfGroup.hxx
    Mesh/Mesh_Array1OfNode.hxx
    Mesh/Mesh_Cell.hxx
    Mesh/Mesh_Grid.hxx
    Mesh/Mesh_Group.hxx
    Mesh/Mesh_Node.hxx
    Mesh/Mesh_Object.hxx
    Mesh/Mesh_TypeOfCell.hxx
)

set(Mesh_PKG_SOURCES
    Mesh/Mesh_Cell.cxx
    Mesh/Mesh_Grid.cxx
    Mesh/Mesh_Group.cxx
    Mesh/Mesh_Node.cxx
    Mesh/Mesh_Object.cxx
)

# =============================================================================
# Package : MeshAbs
# =============================================================================

set(MeshAbs_PKG_HEADERS
    MeshAbs/MeshAbs_TypeOfCell.hxx
    MeshAbs/MeshAbs_TypeOfObject.hxx
)

# =============================================================================
# Package : MeshBuilder
# =============================================================================

set(MeshBuilder_PKG_HEADERS
    MeshBuilder/MeshBuilder_Command.hxx
    MeshBuilder/MeshBuilder_MakeCell.hxx
    MeshBuilder/MeshBuilder_MakeGroup.hxx
    MeshBuilder/MeshBuilder_MakeLine.hxx
    MeshBuilder/MeshBuilder_MakeMesh.hxx
    MeshBuilder/MeshBuilder_MakeMesh1d.hxx
    MeshBuilder/MeshBuilder_MakeNode.hxx
    #MeshBuilder/MeshBuilder_MakeNode1d.hxx
    MeshBuilder/MeshBuilder_MakeObject.hxx
    MeshBuilder/MeshBuilder_MakeTriangle.hxx
    MeshBuilder/MeshBuilder_MeshFromPolyMesh.hxx
    MeshBuilder/MeshBuilder_MeshFromTriangulation.hxx
)

set(MeshBuilder_PKG_SOURCES
    MeshBuilder/MeshBuilder_Command.cxx
    MeshBuilder/MeshBuilder_MakeCell.cxx
    MeshBuilder/MeshBuilder_MakeGroup.cxx
    MeshBuilder/MeshBuilder_MakeLine.cxx
    MeshBuilder/MeshBuilder_MakeMesh.cxx
    MeshBuilder/MeshBuilder_MakeMesh1d.cxx
    MeshBuilder/MeshBuilder_MakeNode.cxx
    #MeshBuilder/MeshBuilder_MakeNode1d.cxx
    MeshBuilder/MeshBuilder_MakeObject.cxx
    MeshBuilder/MeshBuilder_MakeTriangle.cxx
    MeshBuilder/MeshBuilder_MeshFromPolyMesh.cxx
    MeshBuilder/MeshBuilder_MeshFromTriangulation.cxx
)

# =============================================================================
# Package : MeshDS
# =============================================================================

set(MeshDS_PKG_HEADERS
    MeshDS/MeshDS.hxx
    MeshDS/MeshDS_Builder.hxx
    MeshDS/MeshDS_Cell.hxx
    MeshDS/MeshDS_Group.hxx
    MeshDS/MeshDS_ListOfObject.hxx
    MeshDS/MeshDS_Mesh.hxx
    MeshDS/MeshDS_Object.hxx
    MeshDS/MeshDS_Point.hxx
    MeshDS/MeshDS_Point1d.hxx
    MeshDS/MeshDS_Point2d.hxx
    MeshDS/MeshDS_Point3d.hxx
    MeshDS/MeshDS_SequenceOfObject.hxx
    MeshDS/MeshDS_TCell.hxx
    MeshDS/MeshDS_TGroup.hxx
    MeshDS/MeshDS_TMesh.hxx
    MeshDS/MeshDS_TObject.hxx
    MeshDS/MeshDS_Tool.hxx
    MeshDS/MeshDS_TVertex.hxx
    MeshDS/MeshDS_Vertex.hxx
)

set(MeshDS_PKG_SOURCES
    MeshDS/MeshDS.cxx
    MeshDS/MeshDS_Builder.cxx
    MeshDS/MeshDS_Cell.cxx
    MeshDS/MeshDS_Group.cxx
    MeshDS/MeshDS_Mesh.cxx
    MeshDS/MeshDS_Object.cxx
    MeshDS/MeshDS_Point.cxx
    MeshDS/MeshDS_Point1d.cxx
    MeshDS/MeshDS_Point2d.cxx
    MeshDS/MeshDS_Point3d.cxx
    MeshDS/MeshDS_TCell.cxx
    MeshDS/MeshDS_TGroup.cxx
    MeshDS/MeshDS_TMesh.cxx
    MeshDS/MeshDS_TObject.cxx
    MeshDS/MeshDS_Tool.cxx
    MeshDS/MeshDS_TVertex.cxx
    MeshDS/MeshDS_Vertex.cxx
)

# =============================================================================
# Package : MeshTools
# =============================================================================

set(MeshTools_PKG_HEADERS
    MeshTools/MeshTools_Array1OfObject.hxx
    MeshTools/MeshTools_DataMapIteratorOfDataMapOfIntegerObject.hxx
    MeshTools/MeshTools_DataMapOfIntegerObject.hxx
    MeshTools/MeshTools_IndexedMapOfObject.hxx
    MeshTools/MeshTools_ListIteratorOfListOfObject.hxx
    MeshTools/MeshTools_ListOfObject.hxx
    MeshTools/MeshTools_ObjectMapHasher.hxx
    MeshTools/MeshTools_SequenceOfObject.hxx
)

set(MeshTools_PKG_SOURCES
    MeshTools/MeshTools_ObjectMapHasher.cxx
)

# =============================================================================
# Package : Model
# =============================================================================

set(Model_PKG_HEADERS
    Model/Model_Attribute.hxx
    Model/Model_DOF.hxx
    Model/Model_Element.hxx
    Model/Model_Material.hxx
    Model/Model_Modelization.cxx
    Model/Model_Object.hxx
    Model/Model_RealAttribute.hxx
)

set(Model_PKG_SOURCES
    Model/Model_Attribute.cxx
    Model/Model_DOF.cxx
    Model/Model_Element.cxx
    Model/Model_Material.cxx
    Model/Model_Modelization.hxx
    Model/Model_Object.cxx
    Model/Model_RealAttribute.cxx
)

# =============================================================================
# Package : ModelAbs
# =============================================================================

set(ModelAbs_PKG_HEADERS
    ModelAbs/ModelAbs_TypeOfDOF.hxx
    ModelAbs/ModelAbs_TypeOfMatrix.hxx
    ModelAbs/ModelAbs_TypeOfModelization.hxx
    ModelAbs/ModelAbs_TypeOfPhenomenon.hxx
    ModelAbs/ModelAbs_TypeOfObject.hxx
)

# =============================================================================
# Package : ModelAlgo
# =============================================================================

set(ModelAlgo_PKG_HEADERS
    ModelAlgo/ModelAlgo_Command.hxx
    ModelAlgo/ModelAlgo_ElementaryMatrices.hxx
    ModelAlgo/ModelAlgo_LinearAnalysis.hxx
    ModelAlgo/ModelAlgo_Numberer.hxx
)

set(ModelAlgo_PKG_SOURCES
    ModelAlgo/ModelAlgo_Command.cxx
    ModelAlgo/ModelAlgo_ElementaryMatrices.cxx
    ModelAlgo/ModelAlgo_LinearAnalysis.cxx
    ModelAlgo/ModelAlgo_Numberer.cxx
)

# =============================================================================
# Package : ModelBuilder
# =============================================================================

set(ModelBuilder_PKG_HEADERS
    ModelBuilder/ModelBuilder_Command.hxx
    ModelBuilder/ModelBuilder_MakeDegreeOfFreedom.hxx
    #ModelBuilder/ModelBuilder_MakeDegreeOfFreedom1d.hxx
    ModelBuilder/ModelBuilder_MakeDomain.hxx
    ModelBuilder/ModelBuilder_MakeElement.hxx
    ModelBuilder/ModelBuilder_MakeModel.hxx
    ModelBuilder/ModelBuilder_MakeNode.hxx
    ModelBuilder/ModelBuilder_MakeObject.hxx
)

set(ModelBuilder_PKG_SOURCES
    ModelBuilder/ModelBuilder_Command.cxx
    ModelBuilder/ModelBuilder_MakeDegreeOfFreedom.cxx
    #ModelBuilder/ModelBuilder_MakeDegreeOfFreedom1d.cxx
    ModelBuilder/ModelBuilder_MakeDomain.cxx
    ModelBuilder/ModelBuilder_MakeElement.cxx
    ModelBuilder/ModelBuilder_MakeModel.cxx
    ModelBuilder/ModelBuilder_MakeNode.cxx
    ModelBuilder/ModelBuilder_MakeObject.cxx
)

# =============================================================================
# Package : ModelDS
# =============================================================================

set(ModelDS_PKG_HEADERS
    ModelDS/ModelDS.hxx
    ModelDS/ModelDS_Boundary.hxx
    ModelDS/ModelDS_Builder.hxx
    ModelDS/ModelDS_DOF.hxx
    ModelDS/ModelDS_Element.hxx
    ModelDS/ModelDS_Equation.hxx
    ModelDS/ModelDS_ListOfObject.hxx
    ModelDS/ModelDS_Load.hxx
    ModelDS/ModelDS_Loading.hxx
    ModelDS/ModelDS_Mapping.hxx
    ModelDS/ModelDS_Matrix.hxx
    ModelDS/ModelDS_Model.hxx
    ModelDS/ModelDS_Node.hxx
    ModelDS/ModelDS_Object.hxx
    ModelDS/ModelDS_TBoundary.hxx
    ModelDS/ModelDS_TDOF.hxx
    ModelDS/ModelDS_TElement.hxx
    ModelDS/ModelDS_TEquation.hxx
    ModelDS/ModelDS_TLoad.hxx
    ModelDS/ModelDS_TLoading.hxx
    ModelDS/ModelDS_TMapping.hxx
    ModelDS/ModelDS_TMaterial.hxx
    ModelDS/ModelDS_TMatrix.hxx
    ModelDS/ModelDS_TModel.hxx
    ModelDS/ModelDS_TNode.hxx
    ModelDS/ModelDS_TObject.hxx
    ModelDS/ModelDS_Tool.hxx
    ModelDS/ModelDS_TSection.hxx
)

set(ModelDS_PKG_SOURCES
    ModelDS/ModelDS.cxx
    ModelDS/ModelDS_Boundary.cxx
    ModelDS/ModelDS_Builder.cxx
    ModelDS/ModelDS_DOF.cxx
    ModelDS/ModelDS_Element.cxx
    ModelDS/ModelDS_Equation.cxx
    ModelDS/ModelDS_Mapping.cxx
    ModelDS/ModelDS_Matrix.cxx
    ModelDS/ModelDS_Model.cxx
    ModelDS/ModelDS_Load.cxx
    ModelDS/ModelDS_Loading.cxx
    ModelDS/ModelDS_Node.cxx
    ModelDS/ModelDS_Object.cxx
    ModelDS/ModelDS_TBoundary.cxx
    ModelDS/ModelDS_TDOF.cxx
    ModelDS/ModelDS_TElement.cxx
    ModelDS/ModelDS_TEquation.cxx
    ModelDS/ModelDS_TLoad.cxx
    ModelDS/ModelDS_TLoading.cxx
    ModelDS/ModelDS_TMapping.cxx
    ModelDS/ModelDS_TMaterial.cxx
    ModelDS/ModelDS_TMatrix.cxx
    ModelDS/ModelDS_TModel.cxx
    ModelDS/ModelDS_TNode.cxx
    ModelDS/ModelDS_TObject.cxx
    ModelDS/ModelDS_Tool.cxx
    ModelDS/ModelDS_TSection.cxx
)

# =============================================================================
# Package : ModelLib
# =============================================================================

set(ModelLib_PKG_HEADERS
    ModelLib/ModelLib_Command.hxx
)

set(ModelLib_PKG_SOURCES
    ModelLib/ModelLib_Command.cxx
)

# =============================================================================
# Package : ModelRep
# =============================================================================

set(ModelRep_PKG_HEADERS
    ModelRep/ModelRep_DOF.hxx
    ModelRep/ModelRep_Element.hxx
    ModelRep/ModelRep_Material.hxx
    ModelRep/ModelRep_MechElement1d.hxx
    ModelRep/ModelRep_MotionDOF.hxx
    ModelRep/ModelRep_Point.hxx
    ModelRep/ModelRep_Point1d.hxx
    ModelRep/ModelRep_Point2d.hxx
    ModelRep/ModelRep_Point3d.hxx
    ModelRep/ModelRep_TranslationDOF.hxx
)

set(ModelRep_PKG_SOURCES
    ModelRep/ModelRep_DOF.cxx
    ModelRep/ModelRep_Element.cxx
    ModelRep/ModelRep_Material.cxx
    ModelRep/ModelRep_MechElement1d.cxx
    ModelRep/ModelRep_MotionDOF.cxx
    ModelRep/ModelRep_Point.cxx
    ModelRep/ModelRep_Point1d.cxx
    ModelRep/ModelRep_Point2d.cxx
    ModelRep/ModelRep_Point3d.cxx
    ModelRep/ModelRep_TranslationDOF.cxx
)

# =============================================================================
# Package : ModelTools
# =============================================================================

set(ModelTools_PKG_HEADERS
    ModelTools/ModelTools_Array1OfObject.hxx
    ModelTools/ModelTools_DataMapOfIntegerObject.hxx
    ModelTools/ModelTools_IndexedMapOfObject.hxx
    ModelTools/ModelTools_ListOfObject.hxx
    ModelTools/ModelTools_ObjectMapHasher.hxx
    ModelTools/ModelTools_SequenceOfObject.hxx
)

set(ModelTools_PKG_SOURCES
    ModelTools/ModelTools_ObjectMapHasher.cxx
)

# =============================================================================
# Package : mp
# =============================================================================

set(mp_PKG_HEADERS
    mp/mp_Edge2N.hxx
    mp/mp_Edge3N.hxx
    mp/mp_LinearHexahedron8N.hxx
    mp/mp_LinearLine2N.hxx
    mp/mp_LinearPentahedron6N.hxx
    mp/mp_LinearPyramid5N.hxx
    mp/mp_LinearQuadrangle4N.hxx
    mp/mp_LinearTetrahedron4N.hxx
    mp/mp_LinearTriangle3N.hxx
    mp/mp_QuadrangleFace4N.hxx
    mp/mp_QuadrangleFace8N.hxx
    mp/mp_QuadrangleFace9N.hxx
    mp/mp_QuadraticHexahedron20N.hxx
    mp/mp_QuadraticHexahedron27N.hxx
    mp/mp_QuadraticLine3N.hxx
    mp/mp_QuadraticPentahedron15N.hxx
    mp/mp_QuadraticPentahedron18N.hxx
    mp/mp_QuadraticPyramid13N.hxx
    mp/mp_QuadraticPyramid14N.hxx
    mp/mp_QuadraticQuadrangle8N.hxx
    mp/mp_QuadraticQuadrangle9N.hxx
    mp/mp_QuadraticTetrahedron10N.hxx
    mp/mp_QuadraticTriangle6N.hxx
    mp/mp_QuadraticTriangle7N.hxx
    mp/mp_TriangleFace3N.hxx
    mp/mp_TriangleFace6N.hxx
    mp/mp_TriangleFace7N.hxx

    mp/mp_LinearLine.hxx
)

set(mp_PKG_SOURCES
    mp/mp_Edge2N.cxx
    mp/mp_Edge3N.cxx
    mp/mp_LinearHexahedron8N.cxx
    mp/mp_LinearLine2N.cxx
    mp/mp_LinearPentahedron6N.cxx
    mp/mp_LinearPyramid5N.cxx
    mp/mp_LinearQuadrangle4N.cxx
    mp/mp_LinearTetrahedron4N.cxx
    mp/mp_LinearTriangle3N.cxx
    mp/mp_QuadrangleFace4N.cxx
    mp/mp_QuadrangleFace8N.cxx
    mp/mp_QuadrangleFace9N.cxx
    mp/mp_QuadraticHexahedron20N.cxx
    mp/mp_QuadraticHexahedron27N.cxx
    mp/mp_QuadraticLine3N.cxx
    mp/mp_QuadraticPentahedron15N.cxx
    mp/mp_QuadraticPentahedron18N.cxx
    mp/mp_QuadraticPyramid13N.cxx
    mp/mp_QuadraticPyramid14N.cxx
    mp/mp_QuadraticQuadrangle8N.cxx
    mp/mp_QuadraticQuadrangle9N.cxx
    mp/mp_QuadraticTetrahedron10N.cxx
    mp/mp_QuadraticTriangle6N.cxx
    mp/mp_QuadraticTriangle7N.cxx
    mp/mp_TriangleFace3N.cxx
    mp/mp_TriangleFace6N.cxx
    mp/mp_TriangleFace7N.cxx

    mp/mp_LinearLine.cxx
)

# =============================================================================
# Package : PolyMesh
# =============================================================================

set(PolyMesh_PKG_HEADERS
    PolyMesh/PolyMesh_Mesh1d.hxx
)

set(PolyMesh_PKG_SOURCES
    PolyMesh/PolyMesh_Mesh1d.cxx
)

# =============================================================================
# Package : pmp
# =============================================================================

set(pmp_PKG_HEADERS
    pmp/pmp_LinearLine.hxx
)

set(pmp_PKG_SOURCES
    pmp/pmp_LinearLine.cxx
)

# =============================================================================
# Package : TColDOF
# =============================================================================

set(TColDOF_PKG_HEADERS
    TColDOF/TColDOF_Array1OfDOF.hxx
    TColDOF/TColDOF_DataMapOfIntegerDOF.hxx
    TColDOF/TColDOF_ListIteratorOfListOfDOF.hxx
    TColDOF/TColDOF_ListOfDOF.hxx
    TColDOF/TColDOF_SequenceOfDOF.hxx
)

# =============================================================================
# Package : TColgp
# =============================================================================

set(TColgp_PKG_HEADERS
    TColgp/TColgp_Array1OfPnt1d.hxx
    TColgp/TColgp_SequenceOfPnt1d.hxx
)

# =============================================================================
# Package : TColMesh1d
# =============================================================================

set(TColMesh1d_PKG_HEADERS
    TColMesh1d/TColMesh1d_DataMapOfIntegerCell.hxx
    TColMesh1d/TColMesh1d_DataMapOfIntegerNode.hxx
)

# =============================================================================
# Package : TColmp
# =============================================================================

set(TColmp_PKG_HEADERS
    TColmp/TColmp_Array1OfLinearHexahedron8N.hxx
    TColmp/TColmp_Array1OfLinearLine2N.hxx
    TColmp/TColmp_Array1OfLinearPentehedron6N.hxx
    TColmp/TColmp_Array1OfLinearPyramid5N.hxx
    TColmp/TColmp_Array1OfLinearQuadrangle4N.hxx
    TColmp/TColmp_Array1OfLinearTetrahedron4N.hxx
    TColmp/TColmp_Array1OfLinearTriangle3N.hxx
    TColmp/TColmp_Array1OfQuadraticHexahedron20N.hxx
    TColmp/TColmp_Array1OfQuadraticHexahedron27N.hxx
    TColmp/TColmp_Array1OfQuadraticLine3N.hxx
    TColmp/TColmp_Array1OfQuadraticPentahedron15N.hxx
    TColmp/TColmp_Array1OfQuadraticPentahedron18N.hxx
    TColmp/TColmp_Array1OfQuadraticPyramid13N.hxx
    TColmp/TColmp_Array1OfQuadraticPyramid14N.hxx
    TColmp/TColmp_Array1OfQuadraticQuadrangle8N.hxx
    TColmp/TColmp_Array1OfQuadraticQuadrangle9N.hxx
    TColmp/TColmp_Array1OfQuadraticTetrahedron10N.hxx
    TColmp/TColmp_Array1OfQuadraticTriangle6N.hxx
    TColmp/TColmp_Array1OfQuadraticTriangle7N.hxx
    TColmp/TColmp_SequenceOfLinearHexahedron8N.hxx
    TColmp/TColmp_SequenceOfLinearLine2N.hxx
    TColmp/TColmp_SequenceOfLinearPentahedron6N.hxx
    TColmp/TColmp_SequenceOfLinearPyramid5N.hxx
    TColmp/TColmp_SequenceOfLinearQuadrangle4N.hxx
    TColmp/TColmp_SequenceOfLinearTetrahedron4N.hxx
    TColmp/TColmp_SequenceOfLinearTriangle3N.hxx
    TColmp/TColmp_SequenceOfQuadraticHexahedron20N.hxx
    TColmp/TColmp_SequenceOfQuadraticHexahedron27N.hxx
    TColmp/TColmp_SequenceOfQuadraticLine3N.hxx
    TColmp/TColmp_SequenceOfQuadraticPentahedron15N.hxx
    TColmp/TColmp_SequenceOfQuadraticPentahedron18N.hxx
    TColmp/TColmp_SequenceOfQuadraticPyramid13N.hxx
    TColmp/TColmp_SequenceOfQuadraticPyramid14N.hxx
    TColmp/TColmp_SequenceOfQuadraticQuadrangle8N.hxx
    TColmp/TColmp_SequenceOfQuadraticQuadrangle9N.hxx
    TColmp/TColmp_SequenceOfQuadraticTetrahedron10N.hxx
    TColmp/TColmp_SequenceOfQuadraticTriangle6N.hxx
    TColmp/TColmp_SequenceOfQuadraticTriangle7N.hxx
)

# =============================================================================
# Package : TColpmp
# =============================================================================

set(TColpmp_PKG_HEADERS
    TColpmp/TColpmp_Array1OfLinearLine.hxx
)

# =============================================================================
# Package : Trsf2d
# =============================================================================

set(Trsf2d_PKG_HEADERS
    Trsf2d/Trsf2d_LinearTruss.cxx
    Trsf2d/Trsf2d_Transformation.hxx
    Trsf2d/Trsf2d_Truss.hxx
)

set(Trsf2d_PKG_SOURCES
    Trsf2d/Trsf2d_LinearTruss.hxx
    Trsf2d/Trsf2d_Transformation.cxx
    Trsf2d/Trsf2d_Truss.cxx
)

# =============================================================================
# Package : UCM
# =============================================================================

set(UCM_PKG_HEADERS
    UCM/UCM_Elastic.hxx
    UCM/UCM_Material.hxx
)

set(UCM_PKG_SOURCES
    UCM/UCM_Elastic.cxx
    UCM/UCM_Material.cxx
)

# =============================================================================
# Package : UCMF
# =============================================================================

set(UCMF_PKG_HEADERS
    UCMF/UCMF_Elastic.hxx
    UCMF/UCMF_Function.hxx
)

set(UCMF_PKG_SOURCES
    UCMF/UCMF_Elastic.cxx
    UCMF/UCMF_Function.cxx
)

# =============================================================================
# Package : XS
# =============================================================================

set(XS_PKG_HEADERS
    XS/XS_Circle.hxx
    XS/XS_Section.hxx
    XS/XS_Square.hxx
)

set(XS_PKG_SOURCES
    XS/XS_Circle.cxx
    XS/XS_Section.cxx
    XS/XS_Square.cxx
)

# =============================================================================
# Package : XSAbs
# =============================================================================

set(XSAbs_PKG_HEADERS
    XSAbs/XSAbs_TypeOfSection.hxx
)

# =============================================================================
# Package : xsf
# =============================================================================

set(xsf_PKG_HEADERS
    xsf/xsf_Elastic1d.hxx
)

set(xsf_PKG_SOURCES
    xsf/xsf_Elastic1d.cxx
)

# =============================================================================
# Package : XSM
# =============================================================================

set(XSM_PKG_HEADERS
    XSM/XSM_Section.hxx
    #XSM/XSM_Uniaxial.hxx
)

set(XSM_PKG_SOURCES
    XSM/XSM_Section.cxx
    #XSM/XSM_Uniaxial.cxx
)

# =============================================================================
# Package : xsp
# =============================================================================

set(xsp_PKG_HEADERS
    xsp/xsp_Circle.hxx
    xsp/xsp_Generic.hxx
    xsp/xsp_Rectangle.hxx
    xsp/xsp_Square.hxx
)

set(xsp_PKG_SOURCES
    xsp/xsp_Circle.cxx
    xsp/xsp_Generic.cxx
    xsp/xsp_Rectangle.cxx
    xsp/xsp_Square.cxx
)



# =============================================================================
# Ceres
# =============================================================================

# header files
set(Ceres_HEADERS
    ${BRepCell_PKG_HEADERS}
    #${BRepCellAPI_PKG_HEADERS}
    #${BRepPoly_PKG_HEADERS}
    #${BRepPolyAPI_PKG_HEADERS}
    #${CM_PKG_HEADERS}
    ${cmf_PKG_HEADERS}
    ${cmp_PKG_HEADERS}
    #${cp_PKG_HEADERS}
    ${DOF_PKG_HEADERS}
    ${DOFAbs_PKG_HEADERS}
    #${EleProp_PKG_HEADERS}
    ${FE_PKG_HEADERS}
    ${FEAbs_PKG_HEADERS}
    #${FEM_PKG_HEADERS}
    ${fep_PKG_HEADERS}
    ${gp_PKG_HEADERS}
    ${load_PKG_HEADERS}
    ${material_PKG_HEADERS}
    ${math_PKG_HEADERS}
    ${Mech1d_PKG_HEADERS}
    #${Mech2d_PKG_HEADERS}
    #${Mesh_PKG_HEADERS}
    #${Mesh1d_PKG_HEADERS}
    #${Mesh2d_PKG_HEADERS}
    ${MeshAbs_PKG_HEADERS}
    #${MeshBuilder_PKG_HEADERS}
    ${MeshDS_PKG_HEADERS}
    ${MeshExp_PKG_HEADERS}
    #${MeshRep_PKG_HEADERS}
    ${MeshTools_PKG_HEADERS}
    #${Model_PKG_HEADERS}
    ${ModelAbs_PKG_HEADERS}
    ${ModelAlgo_PKG_HEADERS}
    #${ModelBuilder_PKG_HEADERS}
    ${ModelDS_PKG_HEADERS}
    ${ModelLib_PKG_HEADERS}
    ${ModelRep_PKG_HEADERS}
    ${ModelTools_PKG_HEADERS}
    #${mp_PKG_HEADERS}
    ${PolyMesh_PKG_HEADERS}
    #${PolyMesh1d_PKG_HEADERS}
    #${PolyMesh2d_PKG_HEADERS}
    #${PolyMeshAbs_PKG_HEADERS}
    ${pmp_PKG_HEADERS}
    ${TColDOF_PKG_HEADERS}
    #${TColgp_PKG_HEADERS}
    #${TColMesh1d_PKG_HEADERS}
    #${TColmp_PKG_HEADERS}
    ${TColpmp_PKG_HEADERS}
    #${Trsf2d_PKG_HEADERS}
    ${UCM_PKG_HEADERS}
    #${UCMF_PKG_HEADERS}
    #${XS_PKG_HEADERS}
    #${XSAbs_PKG_HEADERS}
    ${xsf_PKG_HEADERS}
    #${xsp_PKG_HEADERS}
    ${XSM_PKG_HEADERS}
    #${XSM2d_PKG_HEADERS}
)

# source files
set(Ceres_SOURCES
    ${BRepCell_PKG_SOURCES}
    #${BRepCellAPI_PKG_SOURCES}
    #${BRepPoly_PKG_SOURCES}
    #${BRepPolyAPI_PKG_SOURCES}
    #${CM_PKG_SOURCES}
    ${cmf_PKG_SOURCES}
    ${cmp_PKG_SOURCES}
    #${cp_PKG_SOURCES}
    ${DOF_PKG_SOURCES}
    ${DOFAbs_PKG_SOURCES}
    #${EleProp_PKG_SOURCES}
    ${FE_PKG_SOURCES}
    #${FEM_PKG_SOURCES}
    ${fep_PKG_SOURCES}
    ${gp_PKG_SOURCES}
    ${load_PKG_SOURCES}
    ${material_PKG_SOURCES}
    ${math_PKG_SOURCES}
    ${Mech1d_PKG_SOURCES}
    #${Mech2d_PKG_SOURCES}
    #${Mesh_PKG_SOURCES}
    #${Mesh1d_PKG_SOURCES}
    #${Mesh2d_PKG_SOURCES}
    #${MeshBuilder_PKG_SOURCES}
    ${MeshDS_PKG_SOURCES}
    ${MeshExp_PKG_SOURCES}
    #${MeshRep_PKG_SOURCES}
    ${MeshTools_PKG_SOURCES}
    #${Model_PKG_SOURCES}
    ${ModelAlgo_PKG_SOURCES}
    #${ModelBuilder_PKG_SOURCES}
    ${ModelDS_PKG_SOURCES}
    ${ModelLib_PKG_SOURCES}
    ${ModelRep_PKG_SOURCES}
    ${ModelTools_PKG_SOURCES}
    #${mp_PKG_SOURCES}
    ${PolyMesh_PKG_SOURCES}
    #${PolyMesh1d_PKG_SOURCES}
    #${PolyMesh2d_PKG_SOURCES}
    ${pmp_PKG_SOURCES}
    #${Trsf2d_PKG_SOURCES}
    ${UCM_PKG_SOURCES}
    #${UCMF_PKG_SOURCES}
    #${XS_PKG_SOURCES}
    ${xsf_PKG_SOURCES}
    #${xsp_PKG_SOURCES}
    ${XSM_PKG_SOURCES}
    #${XSM2d_PKG_SOURCES}
)

# include directories
set(Ceres_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/BRepCell
    ${CMAKE_CURRENT_SOURCE_DIR}/BRepCellAPI
    ${CMAKE_CURRENT_SOURCE_DIR}/BRepPoly
    ${CMAKE_CURRENT_SOURCE_DIR}/BRepPolyAPI
    ${CMAKE_CURRENT_SOURCE_DIR}/CM
    ${CMAKE_CURRENT_SOURCE_DIR}/cmf
    ${CMAKE_CURRENT_SOURCE_DIR}/cmp
    ${CMAKE_CURRENT_SOURCE_DIR}/cp
    ${CMAKE_CURRENT_SOURCE_DIR}/DOF
    ${CMAKE_CURRENT_SOURCE_DIR}/DOFAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/ElePRep
    ${CMAKE_CURRENT_SOURCE_DIR}/EleProp
    ${CMAKE_CURRENT_SOURCE_DIR}/FE
    ${CMAKE_CURRENT_SOURCE_DIR}/FE1d
    ${CMAKE_CURRENT_SOURCE_DIR}/FEA
    ${CMAKE_CURRENT_SOURCE_DIR}/FEAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/FEM
    ${CMAKE_CURRENT_SOURCE_DIR}/fep
    ${CMAKE_CURRENT_SOURCE_DIR}/gp
    ${CMAKE_CURRENT_SOURCE_DIR}/load
    ${CMAKE_CURRENT_SOURCE_DIR}/material
    ${CMAKE_CURRENT_SOURCE_DIR}/math
    ${CMAKE_CURRENT_SOURCE_DIR}/Mech1d
    ${CMAKE_CURRENT_SOURCE_DIR}/Mech2d
    #${CMAKE_CURRENT_SOURCE_DIR}/Mesh
    #${CMAKE_CURRENT_SOURCE_DIR}/Mesh1d
    #${CMAKE_CURRENT_SOURCE_DIR}/Mesh2d
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelAlgo
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshBuilder
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshDS
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshTools
    #${CMAKE_CURRENT_SOURCE_DIR}/Model
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelBuilder
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelDS
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelLib
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelRep
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelTools
    ${CMAKE_CURRENT_SOURCE_DIR}/mp
    ${CMAKE_CURRENT_SOURCE_DIR}/PolyMesh
    ${CMAKE_CURRENT_SOURCE_DIR}/PolyMesh1d
    ${CMAKE_CURRENT_SOURCE_DIR}/PolyMesh2d
    ${CMAKE_CURRENT_SOURCE_DIR}/PolyMeshAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/pmp
    ${CMAKE_CURRENT_SOURCE_DIR}/TColDOF
    ${CMAKE_CURRENT_SOURCE_DIR}/TColgp
    ${CMAKE_CURRENT_SOURCE_DIR}/TColMesh1d
    ${CMAKE_CURRENT_SOURCE_DIR}/TColmp
    ${CMAKE_CURRENT_SOURCE_DIR}/TColpmp
    ${CMAKE_CURRENT_SOURCE_DIR}/Trsf2d
    ${CMAKE_CURRENT_SOURCE_DIR}/UCM
    ${CMAKE_CURRENT_SOURCE_DIR}/UCMF
    ${CMAKE_CURRENT_SOURCE_DIR}/xsf
    ${CMAKE_CURRENT_SOURCE_DIR}/XSM
    ${OpenCASCADE_INCLUDE_DIR}
    ${Triangle_INCLUDE_DIRS}
)

# linked libraries
set(Ceres_LINKED_LIBRARIES
    ${OpenCASCADE_FoundationClasses_LIBRARIES}
    ${OpenCASCADE_ModelingData_LIBRARIES}
    ${OpenCASCADE_ModelingAlgorithms_LIBRARIES}
    ${OpenCASCADE_ApplicationFramework_LIBRARIES}
    ${OpenCASCADE_DataExchange_LIBRARIES}
    ${Triangle_LIBRARIES}
)

# rules
message(${Ceres_INCLUDE_DIRS})
add_library(Ceres SHARED ${Ceres_HEADERS} ${Ceres_SOURCES})
target_include_directories(Ceres PUBLIC ${Ceres_INCLUDE_DIRS})
target_link_libraries(Ceres PUBLIC ${Ceres_LINKED_LIBRARIES})

# install library
install(
    TARGETS Ceres
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${Ceres_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)

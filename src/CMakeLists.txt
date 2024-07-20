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


# configure some files
configure_file(Toolkit/Toolkit_Configuration.hxx.in Toolkit_Configuration.hxx)




# =============================================================================
# Package : BRepCell
# =============================================================================

set(BRepCell_PKG_HEADERS
    BRepCell/BRepCell_Command.hxx
    BRepCell/BRepCell_HexahedronError.hxx
    BRepCell/BRepCell_LineError.hxx
    BRepCell/BRepCell_MakeCell.hxx
    BRepCell/BRepCell_MakeHexahedron.hxx
    BRepCell/BRepCell_MakeLine.hxx
    BRepCell/BRepCell_MakePentahedron.hxx
    BRepCell/BRepCell_MakePyramid.hxx
    BRepCell/BRepCell_MakeQuadrangle.hxx
    BRepCell/BRepCell_MakeTetrahedron.hxx
    BRepCell/BRepCell_MakeTriangle.hxx
    BRepCell/BRepCell_PentahedronError.hxx
    BRepCell/BRepCell_PyramidError.hxx
    BRepCell/BRepCell_QuadrangleError.hxx
    BRepCell/BRepCell_TetrahedronError.hxx
    BRepCell/BRepCell_TriangleError.hxx
)

set(BRepCell_PKG_SOURCES
    BRepCell/BRepCell_Command.cxx
    BRepCell/BRepCell_MakeCell.cxx
    BRepCell/BRepCell_MakeHexahedron.cxx
    BRepCell/BRepCell_MakeLine.cxx
    BRepCell/BRepCell_MakePentahedron.cxx
    BRepCell/BRepCell_MakePyramid.cxx
    BRepCell/BRepCell_MakeQuadrangle.cxx
    BRepCell/BRepCell_MakeTetrahedron.cxx
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
# Package : Cell
# =============================================================================

set(Cell_PKG_HEADERS
    Cell/Cell_LinearLine.hxx
    Cell/Cell_Shape.hxx
)

set(Cell_PKG_SOURCES
    Cell/Cell_LinearLine.cxx
    Cell/Cell_Shape.cxx
)

# =============================================================================
# Package : Cell1d
# =============================================================================

set(Cell1d_PKG_HEADERS
    #Cell1d/Cell1d_LinearLine.hxx
    Cell1d/Cell1d_Object.hxx
    #Cell1d/Cell1d_Shape.hxx
)

set(Cell1d_PKG_SOURCES
    #Cell1d/Cell1d_LinearLine.cxx
    Cell1d/Cell1d_Object.cxx
    #Cell1d/Cell1d_Shape.cxx
)

# =============================================================================
# Package : Cell2d
# =============================================================================

set(Cell2d_PKG_HEADERS
    Cell2d/Cell2d_LinearLine.hxx
    Cell2d/Cell2d_Shape.hxx
)

set(Cell2d_PKG_SOURCES
    Cell2d/Cell2d_LinearLine.cxx
    Cell2d/Cell2d_Shape.cxx
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
    cp/cp_LinearLine.cxx
    cp/cp_QuadraticLine.cxx
)

# =============================================================================
# Package : DOF
# =============================================================================

set(DOF_PKG_HEADERS
    DOF/DOF_DegreeOfFreedom.hxx
    DOF/DOF_Motion.hxx
    DOF/DOF_Rotation.hxx
    DOF/DOF_Translation.hxx
)

set(DOF_PKG_SOURCES
    DOF/DOF_DegreeOfFreedom.cxx
    DOF/DOF_Motion.cxx
    DOF/DOF_Rotation.cxx
    DOF/DOF_Translation.cxx
)

# =============================================================================
# Package : DOFAbs
# =============================================================================

set(DOFAbs_PKG_HEADERS
    DOFAbs/DOFAbs_TypeOfAxis.hxx
)

set(DOFAbs_PKG_SOURCES

)

# =============================================================================
# Package : DOFAdaptor
# =============================================================================

set(DOFAdaptor_PKG_HEADERS
    DOFAdaptor/DOFAdaptor_DOF.hxx
)

set(DOFAdaptor_PKG_SOURCES
    DOFAdaptor/DOFAdaptor_DOF.cxx
)

# =============================================================================
# Package : Discrete
# =============================================================================

set(Discrete_PKG_HEADERS
    Discrete/Discrete_FunctionCurveNbSegments.hxx
)

set(Discrete_PKG_SOURCES
    Discrete/Discrete_FunctionCurveNbSegments.cxx
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
# Package : FE
# =============================================================================

set(FE_PKG_HEADERS
    FE/FE_Acoustical.hxx
    FE/FE_Element.hxx
    FE/FE_Mechanical.hxx
    FE/FE_Mechanical1d.hxx
    FE/FE_Mechanical2d.hxx
    FE/FE_Mechanical3d.hxx
    FE/FE_Thermal.hxx
)

set(FE_PKG_SOURCES
    FE/FE_Acoustical.cxx
    FE/FE_Element.cxx
    FE/FE_Mechanical.cxx
    FE/FE_Mechanical1d.cxx
    FE/FE_Mechanical2d.cxx
    FE/FE_Mechanical3d.cxx
    FE/FE_Thermal.cxx
)

# =============================================================================
# Package : FEAbs
# =============================================================================

set(FEAbs_PKG_HEADERS
    FEAbs/FEAbs_TypeOfQuantity.hxx
)

# =============================================================================
# Package : FEAdaptor
# =============================================================================

set(FEAdaptor_PKG_HEADERS
    FEAdaptor/FEAdaptor_Model.hxx
)

set(FEAdaptor_PKG_SOURCES
    FEAdaptor/FEAdaptor_Model.cxx
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
    fep/fep_DOF.hxx
    fep/fep_DOF1d.hxx
    fep/fep_DOF2d.hxx
    #fep/fep_Quantity.hxx
    #fep/fep_Variable.hxx
    fep/fep_TypeOfDOF.hxx
    fep/fep_TypeOfDOF1d.hxx
    fep/fep_TypeOfDOF2d.hxx
)

set(fep_PKG_SOURCES
    fep/fep_DOF.cxx
    fep/fep_DOF1d.cxx
    fep/fep_DOF2d.cxx
    #fep/fep_Variable.cxx
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
# Package : Mech
# =============================================================================

set(Mech_PKG_HEADERS
    Mech/Mech_Element.hxx
)

set(Mech_PKG_SOURCES
    Mech/Mech_Element.cxx
)

# =============================================================================
# Package : Mech1d
# =============================================================================

set(Mech1d_PKG_HEADERS
    Mech1d/Mech1d_ElasticTruss.hxx
    Mech1d/Mech1d_Model.hxx
    Mech1d/Mech1d_Truss.hxx
)

set(Mech1d_PKG_SOURCES
    Mech1d/Mech1d_ElasticTruss.cxx
    Mech1d/Mech1d_Model.cxx
    Mech1d/Mech1d_Truss.cxx
)

# =============================================================================
# Package : Mech1dAdaptor
# =============================================================================

set(Mech1dAdaptor_PKG_HEADERS
    Mech1dAdaptor/Mech1dAdaptor_Element.hxx
)

set(Mech1dAdaptor_PKG_SOURCES
    Mech1dAdaptor/Mech1dAdaptor_Element.cxx
)


# =============================================================================
# Package : Mech2d
# =============================================================================

set(Mech2d_PKG_HEADERS
    Mech2d/Mech2d_Element.hxx
)

set(Mech2d_PKG_SOURCES
    Mech2d/Mech2d_Element.cxx
)

# =============================================================================
# Package : Mesh1d
# =============================================================================

set(Mesh1d_PKG_HEADERS
    Mesh1d/Mesh1d_Cell.hxx
    Mesh1d/Mesh1d_Edge.hxx
    Mesh1d/Mesh1d_LinearLine.hxx
    Mesh1d/Mesh1d_Object.hxx
    Mesh1d/Mesh1d_Node.hxx
    Mesh1d/Mesh1d_Vertex.hxx
)

set(Mesh1d_PKG_SOURCES
    Mesh1d/Mesh1d_Cell.cxx
    Mesh1d/Mesh1d_Edge.cxx
    Mesh1d/Mesh1d_LinearLine.cxx
    Mesh1d/Mesh1d_Node.cxx
    Mesh1d/Mesh1d_Object.cxx
    Mesh1d/Mesh1d_Vertex.cxx
)

# =============================================================================
# Package : Mesh1dAdaptor
# =============================================================================

set(Mesh1dAdaptor_PKG_HEADERS
    Mesh1dAdaptor/Mesh1dAdaptor_Cell.hxx
)

set(Mesh1dAdaptor_PKG_SOURCES
    Mesh1dAdaptor/Mesh1dAdaptor_Cell.cxx
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
    Mesh/Mesh_Cell.hxx
    Mesh/Mesh_Line.hxx
    Mesh/Mesh_LinearLine.hxx
    Mesh/Mesh_Object.hxx
    Mesh/Mesh_Vertex.hxx
)

set(Mesh_PKG_SOURCES
    Mesh/Mesh_Cell.cxx
    Mesh/Mesh_Line.cxx
    Mesh/Mesh_LinearLine.cxx
    Mesh/Mesh_Object.cxx
    Mesh/Mesh_Vertex.cxx
)

# =============================================================================
# Package : MeshAbs
# =============================================================================

set(MeshAbs_PKG_HEADERS
    MeshAbs/MeshAbs_TypeOfCell.hxx
    MeshAbs/MeshAbs_TypeOfDimensionality.hxx
    MeshAbs/MeshAbs_TypeOfInterpolation.hxx
    MeshAbs/MeshAbs_TypeOfObject.hxx
    MeshAbs/MeshAbs_TypeOfShape.hxx
)

# =============================================================================
# Package : MeshAdaptor
# =============================================================================

set(MeshAdaptor_PKG_HEADERS
    MeshAdaptor/MeshAdaptor_Vertex.hxx
)

set(MeshAdaptor_PKG_SOURCES
    MeshAdaptor/MeshAdaptor_Vertex.cxx
)

# =============================================================================
# Package : MeshAlgo
# =============================================================================

set(MeshAlgo_PKG_HEADERS
    MeshAlgo/MeshAlgo_EdgeEqualRange.hxx
    MeshAlgo/MeshAlgo_EdgeMesher.hxx
    MeshAlgo/MeshAlgo_FaceMesher.hxx
    MeshAlgo/MeshAlgo_MakeMesh.hxx
    MeshAlgo/MeshAlgo_Mesher.hxx
    MeshAlgo/MeshAlgo_Model.hxx
    MeshAlgo/MeshAlgo_SolidMesher.hxx
)

set(MeshAlgo_PKG_SOURCES
    MeshAlgo/MeshAlgo_EdgeEqualRange.cxx
    MeshAlgo/MeshAlgo_EdgeMesher.cxx
    MeshAlgo/MeshAlgo_FaceMesher.cxx
    MeshAlgo/MeshAlgo_MakeMesh.cxx
    MeshAlgo/MeshAlgo_Mesher.cxx
    MeshAlgo/MeshAlgo_Model.cxx
    MeshAlgo/MeshAlgo_SolidMesher.cxx
)

# =============================================================================
# Package : MeshBuilder
# =============================================================================

set(MeshBuilder_PKG_HEADERS
    MeshBuilder/MeshBuilder_CellError.hxx
    MeshBuilder/MeshBuilder_Command.hxx
    MeshBuilder/MeshBuilder_MakeCell.hxx
    MeshBuilder/MeshBuilder_MakeEdge.hxx
    MeshBuilder/MeshBuilder_MakeGroup.hxx
    MeshBuilder/MeshBuilder_MakeLine.hxx
    MeshBuilder/MeshBuilder_MakeLinearLine.hxx
    MeshBuilder/MeshBuilder_MakeMesh.hxx
    MeshBuilder/MeshBuilder_MakeObject.hxx
    MeshBuilder/MeshBuilder_MakeVertex.hxx
)

set(MeshBuilder_PKG_SOURCES
    MeshBuilder/MeshBuilder_Command.cxx
    MeshBuilder/MeshBuilder_MakeCell.cxx
    MeshBuilder/MeshBuilder_MakeEdge.cxx
    MeshBuilder/MeshBuilder_MakeGroup.cxx
    MeshBuilder/MeshBuilder_MakeLine.cxx
    MeshBuilder/MeshBuilder_MakeLinearLine.cxx
    MeshBuilder/MeshBuilder_MakeMesh.cxx
    MeshBuilder/MeshBuilder_MakeObject.cxx
    MeshBuilder/MeshBuilder_MakeVertex.cxx
)

# =============================================================================
# Package : MeshDS
# =============================================================================

set(MeshDS_PKG_HEADERS
    MeshDS/MeshDS.hxx
    MeshDS/MeshDS_Builder.hxx
    MeshDS/MeshDS_Cell.hxx
    MeshDS/MeshDS_Edge.hxx
    MeshDS/MeshDS_Face.hxx
    MeshDS/MeshDS_Group.hxx
    MeshDS/MeshDS_Hypothesis.hxx
    MeshDS/MeshDS_ListOfObject.hxx
    MeshDS/MeshDS_Mesh.hxx
    MeshDS/MeshDS_Node.hxx
    MeshDS/MeshDS_Object.hxx
    MeshDS/MeshDS_Polygon.hxx
    MeshDS/MeshDS_TCell.hxx
    MeshDS/MeshDS_TEdge.hxx
    MeshDS/MeshDS_TEntity.hxx
    MeshDS/MeshDS_TFace.hxx
    MeshDS/MeshDS_TGroup.hxx
    MeshDS/MeshDS_TMesh.hxx
    MeshDS/MeshDS_TNode.hxx
    MeshDS/MeshDS_TObject.hxx
    MeshDS/MeshDS_TPolygon.hxx
    MeshDS/MeshDS_Tool.hxx
    MeshDS/MeshDS_TVertex.hxx
    MeshDS/MeshDS_Vertex.hxx
)

set(MeshDS_PKG_SOURCES
    MeshDS/MeshDS.cxx
    MeshDS/MeshDS_Builder.cxx
    MeshDS/MeshDS_Cell.cxx
    MeshDS/MeshDS_Edge.cxx
    MeshDS/MeshDS_Face.cxx
    MeshDS/MeshDS_Group.cxx
    MeshDS/MeshDS_Hypothesis.cxx
    MeshDS/MeshDS_Mesh.cxx
    MeshDS/MeshDS_Node.cxx
    MeshDS/MeshDS_Object.cxx
    MeshDS/MeshDS_Polygon.cxx
    MeshDS/MeshDS_TCell.cxx
    MeshDS/MeshDS_TEdge.cxx
    MeshDS/MeshDS_TEntity.cxx
    MeshDS/MeshDS_TFace.cxx
    MeshDS/MeshDS_TGroup.cxx
    MeshDS/MeshDS_TMesh.cxx
    MeshDS/MeshDS_TNode.cxx
    MeshDS/MeshDS_TObject.cxx
    MeshDS/MeshDS_TPolygon.cxx
    MeshDS/MeshDS_Tool.cxx
    MeshDS/MeshDS_TVertex.cxx
    MeshDS/MeshDS_Vertex.cxx
)

# =============================================================================
# Package : MeshExp
# =============================================================================

set(MeshExp_PKG_HEADERS
    MeshExp/MeshExp.hxx
)

set(MeshExp_PKG_SOURCES
    MeshExp/MeshExp.cxx
)

# =============================================================================
# Package : MeshFunc
# =============================================================================

set(MeshFunc_PKG_HEADERS
    MeshFunc/MeshFunc_CurveNbSegments.hxx
)

set(MeshFunc_PKG_SOURCES
    MeshFunc/MeshFunc_CurveNbSegments.cxx
)

# =============================================================================
# Package : MeshLib
# =============================================================================

set(MeshLib_PKG_HEADERS
    MeshLib/MeshLib_MakeHypothesis.hxx
    MeshLib/MeshLib_MakeMesh.hxx
)

set(MeshLib_PKG_SOURCES
    MeshLib/MeshLib_MakeHypothesis.cxx
    MeshLib/MeshLib_MakeMesh.cxx
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
    Model/Model_Element.hxx
    Model/Model_MechanicalElement.hxx
    Model/Model_MechanicalElement1d.hxx
    Model/Model_Object.hxx
    Model/Model_Point.hxx
    Model/Model_Point1d.hxx
    Model/Model_Point2d.hxx
    Model/Model_Point3d.hxx
)

set(Model_PKG_SOURCES
    Model/Model_Element.cxx
    Model/Model_MechanicalElement.cxx
    Model/Model_MechanicalElement1d.cxx
    Model/Model_Object.cxx
    Model/Model_Point.cxx
    Model/Model_Point1d.cxx
    Model/Model_Point2d.cxx
    Model/Model_Point3d.cxx
)

# =============================================================================
# Package : ModelAbs
# =============================================================================

set(ModelAbs_PKG_HEADERS
    ModelAbs/ModelAbs_TypeOfDimensionality.hxx
    ModelAbs/ModelAbs_TypeOfDOF.hxx
    ModelAbs/ModelAbs_TypeOfMatrix.hxx
    ModelAbs/ModelAbs_TypeOfModelization.hxx
    ModelAbs/ModelAbs_TypeOfPhenomenon.hxx
    ModelAbs/ModelAbs_TypeOfObject.hxx
)

# =============================================================================
# Package : ModelAdaptor
# =============================================================================

set(ModelAdaptor_PKG_HEADERS
    ModelAdaptor/ModelAdaptor_Element.hxx
    ModelAdaptor/ModelAdaptor_Point.hxx
)

set(ModelAdaptor_PKG_SOURCES
    ModelAdaptor/ModelAdaptor_Element.cxx
    ModelAdaptor/ModelAdaptor_Point.cxx
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
    ModelBuilder/ModelBuilder_MakeDOF.hxx
    ModelBuilder/ModelBuilder_MakeElement.hxx
    ModelBuilder/ModelBuilder_MakeNode.hxx
    ModelBuilder/ModelBuilder_MakeObject.hxx
    ModelBuilder/ModelBuilder_MakeTruss.hxx
)

set(ModelBuilder_PKG_SOURCES
    ModelBuilder/ModelBuilder_Command.cxx
    ModelBuilder/ModelBuilder_MakeDOF.cxx
    ModelBuilder/ModelBuilder_MakeElement.cxx
    ModelBuilder/ModelBuilder_MakeNode.cxx
    ModelBuilder/ModelBuilder_MakeObject.cxx
    ModelBuilder/ModelBuilder_MakeTruss.cxx
)

# =============================================================================
# Package : ModelDS
# =============================================================================

set(ModelDS_PKG_HEADERS
    ModelDS/ModelDS.hxx
    ModelDS/ModelDS_Boundary.hxx
    ModelDS/ModelDS_Builder.hxx
    ModelDS/ModelDS_DOF.hxx
    ModelDS/ModelDS_DOFGroup.hxx
    ModelDS/ModelDS_Element.hxx
    ModelDS/ModelDS_Equation.hxx
    ModelDS/ModelDS_ListOfObject.hxx
    ModelDS/ModelDS_Load.hxx
    ModelDS/ModelDS_Loading.hxx
    ModelDS/ModelDS_Mapping.hxx
    ModelDS/ModelDS_Matrix.hxx
    ModelDS/ModelDS_Model.hxx
    ModelDS/ModelDS_Modelization.hxx
    ModelDS/ModelDS_Node.hxx
    ModelDS/ModelDS_Object.hxx
    ModelDS/ModelDS_TBoundary.hxx
    ModelDS/ModelDS_TCell.hxx
    ModelDS/ModelDS_TDOF.hxx
    ModelDS/ModelDS_TDOFGroup.hxx
    ModelDS/ModelDS_TElement.hxx
    ModelDS/ModelDS_TEquation.hxx
    ModelDS/ModelDS_TGroup.hxx
    ModelDS/ModelDS_TLoad.hxx
    ModelDS/ModelDS_TLoading.hxx
    ModelDS/ModelDS_TMapping.hxx
    ModelDS/ModelDS_TMaterial.hxx
    ModelDS/ModelDS_TMatrix.hxx
    ModelDS/ModelDS_TMechanicalElement.hxx
    ModelDS/ModelDS_TMesh.hxx
    ModelDS/ModelDS_TModel.hxx
    ModelDS/ModelDS_TModelization.hxx
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
    ModelDS/ModelDS_DOFGroup.cxx
    ModelDS/ModelDS_Element.cxx
    ModelDS/ModelDS_Equation.cxx
    ModelDS/ModelDS_Mapping.cxx
    ModelDS/ModelDS_Matrix.cxx
    ModelDS/ModelDS_Model.cxx
    ModelDS/ModelDS_Modelization.cxx
    ModelDS/ModelDS_Load.cxx
    ModelDS/ModelDS_Loading.cxx
    ModelDS/ModelDS_Node.cxx
    ModelDS/ModelDS_Object.cxx
    ModelDS/ModelDS_TBoundary.cxx
    ModelDS/ModelDS_TCell.cxx
    ModelDS/ModelDS_TDOF.cxx
    ModelDS/ModelDS_TDOFGroup.cxx
    ModelDS/ModelDS_TElement.cxx
    ModelDS/ModelDS_TEquation.cxx
    ModelDS/ModelDS_TGroup.cxx
    ModelDS/ModelDS_TLoad.cxx
    ModelDS/ModelDS_TLoading.cxx
    ModelDS/ModelDS_TMapping.cxx
    ModelDS/ModelDS_TMaterial.cxx
    ModelDS/ModelDS_TMatrix.cxx
    ModelDS/ModelDS_TMechanicalElement.cxx
    ModelDS/ModelDS_TMesh.cxx
    ModelDS/ModelDS_TModel.cxx
    ModelDS/ModelDS_TModelization.cxx
    ModelDS/ModelDS_TNode.cxx
    ModelDS/ModelDS_TObject.cxx
    ModelDS/ModelDS_Tool.cxx
    ModelDS/ModelDS_TSection.cxx
)

# =============================================================================
# Package : ModelExp
# =============================================================================

set(ModelExp_PKG_HEADERS
    ModelExp/ModelExp.hxx
)

set(ModelExp_PKG_SOURCES
    ModelExp/ModelExp.cxx
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
    #ModelRep/ModelRep_DOF.hxx
    ModelRep/ModelRep_Element.hxx
    ModelRep/ModelRep_Material.hxx
    ModelRep/ModelRep_MechElement1d.hxx
    #ModelRep/ModelRep_MotionDOF.hxx
    ModelRep/ModelRep_Point.hxx
    ModelRep/ModelRep_Point1d.hxx
    ModelRep/ModelRep_Point2d.hxx
    ModelRep/ModelRep_Point3d.hxx
    #ModelRep/ModelRep_TranslationDOF.hxx
)

set(ModelRep_PKG_SOURCES
    #ModelRep/ModelRep_DOF.cxx
    ModelRep/ModelRep_Element.cxx
    ModelRep/ModelRep_Material.cxx
    ModelRep/ModelRep_MechElement1d.cxx
    #ModelRep/ModelRep_MotionDOF.cxx
    ModelRep/ModelRep_Point.cxx
    ModelRep/ModelRep_Point1d.cxx
    ModelRep/ModelRep_Point2d.cxx
    ModelRep/ModelRep_Point3d.cxx
    #ModelRep/ModelRep_TranslationDOF.cxx
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
    PolyMesh/PolyMesh_Line.hxx
    PolyMesh/PolyMesh_Mesh1d.hxx
)

set(PolyMesh_PKG_SOURCES
    PolyMesh/PolyMesh_Line.cxx
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
# Package : TColfep
# =============================================================================

set(TColfep_PKG_HEADERS
    TColfep/TColfep_Array1OfDOF.hxx
    TColfep/TColfep_Array1OfDOF1d.hxx
    TColfep/TColfep_Array1OfDOF2d.hxx
    TColfep/TColfep_SequenceOfDOF.hxx
    TColfep/TColfep_SequenceOfDOF1d.hxx
    TColfep/TColfep_SequenceOfDOF2d.hxx
)

# =============================================================================
# Package : TColgp
# =============================================================================

set(TColgp_PKG_HEADERS
    TColgp/TColgp_Array1OfPnt1d.hxx
    TColgp/TColgp_HArray1OfPnt1d.hxx
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
# Package : Tetgen
# =============================================================================

set(Tetgen_PKG_HEADERS
    Tetgen/Tetgen_Array1OfFacet.hxx
    Tetgen/Tetgen_Array1OfHole.hxx
    Tetgen/Tetgen_Array1OfNode.hxx
    Tetgen/Tetgen_Array1OfPolygon.hxx
    Tetgen/Tetgen_Array1OfRegion.hxx
    Tetgen/Tetgen_Command.hxx
    Tetgen/Tetgen_Edge.hxx
    Tetgen/Tetgen_Facet.hxx
    Tetgen/Tetgen_Hole.hxx
    Tetgen/Tetgen_MakeModel.hxx
    Tetgen/Tetgen_Mesher.hxx
    Tetgen/Tetgen_Model.hxx
    Tetgen/Tetgen_Node.hxx
    Tetgen/Tetgen_Object.hxx
    Tetgen/Tetgen_Polygon.hxx
    Tetgen/Tetgen_Region.hxx
    Tetgen/Tetgen_Tetrahedron.hxx
    Tetgen/Tetgen_Triangle.hxx
)

set(Tetgen_PKG_SOURCES
    Tetgen/Tetgen_Command.cxx
    Tetgen/Tetgen_Edge.cxx
    Tetgen/Tetgen_Facet.cxx
    Tetgen/Tetgen_Hole.cxx
    Tetgen/Tetgen_MakeModel.cxx
    Tetgen/Tetgen_Mesher.cxx
    Tetgen/Tetgen_Model.cxx
    Tetgen/Tetgen_Node.cxx
    Tetgen/Tetgen_Object.cxx
    Tetgen/Tetgen_Polygon.cxx
    Tetgen/Tetgen_Region.cxx
    Tetgen/Tetgen_Tetrahedron.cxx
    Tetgen/Tetgen_Triangle.cxx
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
# Package : Toolkit
# =============================================================================

set(Toolkit_PKG_HEADERS
    Toolkit/Toolkit.hxx
    Toolkit/Toolkit_Version.hxx
)

set(Toolkit_PKG_SOURCES
    Toolkit/Toolkit.cxx
    Toolkit/Toolkit_Version.cxx
)

# =============================================================================
# Package : Triangle
# =============================================================================

set(Triangle_PKG_HEADERS
    Triangle/Triangle_Array1OfHole.hxx
    Triangle/Triangle_Array1OfNode.hxx
    Triangle/Triangle_Array1OfRegion.hxx
    Triangle/Triangle_Array1OfSegment.hxx
    Triangle/Triangle_Command.hxx
    Triangle/Triangle_Hole.hxx
    Triangle/Triangle_ListOfHole.hxx
    Triangle/Triangle_ListOfNode.hxx
    Triangle/Triangle_ListOfRegion.hxx
    Triangle/Triangle_ListOfSegment.hxx
    Triangle/Triangle_MakeModel.hxx
    Triangle/Triangle_Model.hxx
    Triangle/Triangle_Node.hxx
    Triangle/Triangle_Object.hxx
    Triangle/Triangle_Region.hxx
    Triangle/Triangle_Segment.hxx
)

set(Triangle_PKG_SOURCES
    Triangle/Triangle_Command.cxx
    Triangle/Triangle_Hole.cxx
    Triangle/Triangle_MakeModel.cxx
    Triangle/Triangle_Model.cxx
    Triangle/Triangle_Node.cxx
    Triangle/Triangle_Object.cxx
    Triangle/Triangle_Region.cxx
    Triangle/Triangle_Segment.cxx
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
    ${cp_PKG_HEADERS}
    ${Mesh_PKG_HEADERS}
    ${MeshAbs_PKG_HEADERS}
    ${MeshAlgo_PKG_HEADERS}
    ${MeshDS_PKG_HEADERS}
    ${MeshFunc_PKG_HEADERS}
    ${MeshLib_PKG_HEADERS}
    ${Tetgen_PKG_HEADERS}
    ${Triangle_PKG_HEADERS}
)

# source files
set(Ceres_SOURCES
    ${BRepCell_PKG_SOURCES}
    ${cp_PKG_SOURCES}
    ${Mesh_PKG_SOURCES}
    ${MeshAlgo_PKG_SOURCES}
    ${MeshDS_PKG_SOURCES}
    ${MeshFunc_PKG_SOURCES}
    ${MeshLib_PKG_SOURCES}
    ${Tetgen_PKG_SOURCES}
    ${Triangle_PKG_SOURCES}
)

# include directories
set(Ceres_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/BRepCell
    ${CMAKE_CURRENT_SOURCE_DIR}/cp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mesh
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshAlgo
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshDS
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshFunc
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshLib
    ${CMAKE_CURRENT_SOURCE_DIR}/Tetgen
    ${CMAKE_CURRENT_SOURCE_DIR}/Triangle
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
    ${Tetgen_LIBRARIES}
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

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
# Ceres
# =============================================================================

# header files
set(Ceres_HEADERS
    Cable/Cable_FindEmptyLength.hxx
    Cable/Cable_FindEmptyLengthError.hxx
    Cable/Cable_FunctionEquilibrium.hxx
    Cable/Cable_ListOfSaggingCondition.hxx
    Cable/Cable_Loading.hxx
    Cable/Cable_SaggingCondition.hxx
    Cable/Cable_SequenceOfLoading.hxx
    Cable/Cable_TypeOfSaggingCondition.hxx
    CableLib/CableLib_Function.hxx
    CableLib/CableLib_FunctionLength.hxx
    cell/cell_LinearLine1d.hxx
    cell/cell_Node1d.hxx
    cmp/cmp_Elastic.hxx
    Discrete/Discrete_Function.hxx
    Discrete/Discrete_FunctionCurveNbSegments.hxx
    DOF/DOF.hxx
    DOF/DOF_DegreeOfFreedom.hxx
    DOF/DOF_Motion.hxx
    DOF/DOF_Rotation.hxx
    DOF/DOF_Translation.hxx
    ElCLib/ElCLib_Catenary.hxx
    FE/FE_Component.hxx
    FE/FE_DegreeOfFreedom.hxx
    FE/FE_Domain.hxx
    FE/FE_Element.hxx
    FE/FE_Node.hxx
    FE/FE_TypeOfDegreeOfFreedom.hxx
    FE1d/FE1d_ElasticTruss.hxx
    FE1d/FE1d_Element.hxx
    FE1d/FE1d_Truss.hxx
    FE2d/FE2d_ElasticTruss.hxx
    FE2d/FE2d_Element.hxx
    FEAbs/FEAbs_TypeOfDegreeOfFreedom.hxx
    FEAbs/FEAbs_TypeOfModelization.hxx
    FEAbs/FEAbs_TypeOfPhenomenon.hxx
    FEM/FEM_Array1OfElement.hxx
    FEM/FEM_Array1OfNode.hxx
    FEM/FEM_Element.hxx
    FEM/FEM_Model.hxx
    FEM/FEM_Node.hxx
    FEModel/FEModel_Model.hxx
    FEModel/FEModel_Node.hxx
    GC/GC_ExtraRoot.hxx
    GC/GC_MakeArcOfCatenary.hxx
    GC/GC_MakeCatenary.hxx
    gce/gce_ExtraRoot.hxx
    gce/gce_MakeCatenary.hxx
    gce/gce_MakeCatenary2d.hxx
    GCE2d/GCE2d_ExtraRoot.hxx
    GCE2d/GCE2d_MakeArcOfCatenary.hxx
    GCE2d/GCE2d_MakeCatenary.hxx
    Geom/Geom_Catenary.hxx
    Geom2d/Geom2d_Catenary.hxx
    gp/gp_Catenary.hxx
    gp/gp_Catenary2d.hxx
    load/load_Point.hxx
    load/load_Temperature.hxx
    load/load_UniformlyDistributed.hxx
    load/load_Wind.hxx
    Mech/Mech_Object.hxx
    Mech2d/Mech2d_Object.hxx
    MechLib/MechLib_CatenaryCable.hxx
    Mesh/Mesh_Cell.hxx
    Mesh/Mesh_LinearHexahedron8N.hxx
    Mesh/Mesh_LinearLine2N.hxx
    Mesh/Mesh_LinearPentahedron6N.hxx
    Mesh/Mesh_LinearPyramid5N.hxx
    Mesh/Mesh_LinearQuadrangle4N.hxx
    Mesh/Mesh_LinearTetrahedron4N.hxx
    Mesh/Mesh_LinearTriangle3N.hxx
    Mesh/Mesh_Node.hxx
    Mesh/Mesh_Node1d.hxx
    Mesh/Mesh_Node2d.hxx
    Mesh/Mesh_Node3d.hxx
    Mesh/Mesh_QuadraticHexahedron20N.hxx
    Mesh/Mesh_QuadraticHexahedron27N.hxx
    Mesh/Mesh_QuadraticLine3N.hxx
    Mesh/Mesh_QuadraticPentahedron15N.hxx
    Mesh/Mesh_QuadraticPentahedron18N.hxx
    Mesh/Mesh_QuadraticPyramid13N.hxx
    Mesh/Mesh_QuadraticPyramid14N.hxx
    Mesh/Mesh_QuadraticQuadrangle8N.hxx
    Mesh/Mesh_QuadraticQuadrangle9N.hxx
    Mesh/Mesh_QuadraticTetrahedron10N.hxx
    Mesh/Mesh_QuadraticTriangle6N.hxx
    Mesh/Mesh_QuadraticTriangle7N.hxx
    Mesh/Mesh_TypeOfCell.hxx
    Mesh/Mesh_TypeOfNode.hxx
    Model/Model_Array1OfTypeOfDOF.hxx
    Model/Model_Domain.hxx
    Model/Model_Element.hxx
    Model/Model_Node.hxx
    Model/Model_TypeOfDOF.hxx
    Model/Model_TypeOfModelisation.hxx
    Model/Model_TypeOfPhenomenon.hxx
    mp/mp_Edge2N.hxx
    mp/mp_Edge2N1d.hxx
    mp/mp_Edge2N2d.hxx
    mp/mp_Edge3N1d.hxx
    mp/mp_LinearLine1d.hxx
    mp/mp_Node.hxx
    mp/mp_Node1d.hxx
    mp/mp_Node2d.hxx
    mp/mp_QuadrilateralFace4N.hxx
    mp/mp_Tetrahedron4N.hxx
    mp/mp_TriangularFace3N.hxx
    mp/mp_TriangularFace3N2d.hxx
    RS/RS_Analysis.hxx
    RS/RS_Cable.hxx
    RS/RS_CatenaryCable.hxx
    RS/RS_Function.hxx
    RS/RS_FunctionEquilibrium.hxx
    RS/RS_Load.hxx
    RS/RS_LoadBreakpoint.hxx
    RS/RS_LoadHistory.hxx
    RS/RS_Object.hxx
    RS/RS_ParabolicCable.hxx
    RS/RS_SaggingAnalysis.hxx
    RS/RS_Section.hxx
    RSLib/RSLib_Function.hxx
    StdEMesher/StdEMesher_Mesher.hxx
    StdEMesher/StdEMesher_NumberOfSegments.hxx
    TColFEAbs/TColFEAbs_Array1OfTypeOfDegreeOfFreedom.hxx
    TColFEAbs/TColFEAbs_MapOfTypeOfDegreeOfFreedom.hxx
    TColmp/TColmp_Array1OfLinearLine2N.hxx
    TColmp/TColmp_Array1OfNode.hxx
    TColmp/TColmp_Array1OfNode1d.hxx
    TColmp/TColmp_Array1OfNode2d.hxx
    TColmp/TColmp_Array1OfQuadraticLine3N.hxx
    TColtsp/TColtsp_Array1OfBreakpoint.hxx
    TColtsp/TColtsp_SequenceOfBreakpoint.hxx
    Triangle/Triangle_Command.hxx
    Triangle/Triangle_MakeTriangulation.hxx
    ts/ts_Array1OfBreakpoint.hxx
    ts/ts_Breakpoint.hxx
    ts/ts_Constant.hxx
    ts/ts_Function.hxx
    ts/ts_PiecewiseLinear.hxx
    tsp/tsp_Breakpoint.hxx
    UCM/UCM_Elastic.hxx
    UCM/UCM_Material.hxx
    UXSM/UXSM_Elastic.hxx
    UXSM/UXSM_Section.hxx
)

# source files
set(Ceres_SOURCES
    Cable/Cable_FindEmptyLength.cxx
    Cable/Cable_FunctionEquilibrium.cxx
    Cable/Cable_SaggingCondition.cxx
    Cable/Cable_Loading.cxx
    CableLib/CableLib_Function.cxx
    CableLib/CableLib_FunctionLength.cxx
    cell/cell_LinearLine1d.cxx
    cell/cell_Node1d.cxx
    cmp/cmp_Elastic.cxx
    Discrete/Discrete_Function.cxx
    Discrete/Discrete_FunctionCurveNbSegments.cxx
    DOF/DOF.cxx
    DOF/DOF_DegreeOfFreedom.cxx
    DOF/DOF_Motion.cxx
    DOF/DOF_Rotation.cxx
    DOF/DOF_Translation.cxx
    DOFAbs/DOFAbs_TypeOfDOF.hxx
    ElCLib/ElCLib_Catenary.cxx
    FE/FE_Component.cxx
    FE/FE_DegreeOfFreedom.cxx
    FE/FE_Domain.cxx
    FE/FE_Element.cxx
    FE/FE_Node.cxx
    FE1d/FE1d_ElasticTruss.cxx
    FE1d/FE1d_Element.cxx
    FE1d/FE1d_Truss.cxx
    FE2d/FE2d_ElasticTruss.cxx
    FE2d/FE2d_Element.cxx
    FEM/FEM_Element.cxx
    FEM/FEM_Model.cxx
    FEM/FEM_Node.cxx
    FEModel/FEModel_Model.cxx
    FEModel/FEModel_Node.cxx
    GC/GC_ExtraRoot.cxx
    GC/GC_MakeArcOfCatenary.cxx
    GC/GC_MakeCatenary.cxx
    gce/gce_ExtraErrorType.hxx
    gce/gce_ExtraRoot.cxx
    gce/gce_MakeCatenary.cxx
    gce/gce_MakeCatenary2d.cxx
    GCE2d/GCE2d_ExtraRoot.cxx
    GCE2d/GCE2d_MakeArcOfCatenary.cxx
    GCE2d/GCE2d_MakeCatenary.cxx
    Geom/Geom_Catenary.cxx
    Geom2d/Geom2d_Catenary.cxx
    gp/gp_Catenary.cxx
    gp/gp_Catenary2d.cxx
    load/load_Point.cxx
    load/load_Temperature.cxx
    load/load_UniformlyDistributed.cxx
    load/load_Wind.cxx
    Mech/Mech_Object.cxx
    Mech2d/Mech2d_Object.cxx
    MechLib/MechLib_CatenaryCable.cxx
    Mesh/Mesh_Cell.cxx
    Mesh/Mesh_LinearHexahedron8N.cxx
    Mesh/Mesh_LinearLine2N.cxx
    Mesh/Mesh_LinearPentahedron6N.cxx
    Mesh/Mesh_LinearPyramid5N.cxx
    Mesh/Mesh_LinearQuadrangle4N.cxx
    Mesh/Mesh_LinearTetrahedron4N.cxx
    Mesh/Mesh_LinearTriangle3N.cxx
    Mesh/Mesh_Node.cxx
    Mesh/Mesh_Node1d.cxx
    Mesh/Mesh_Node2d.cxx
    Mesh/Mesh_Node3d.cxx
    Mesh/Mesh_QuadraticHexahedron20N.cxx
    Mesh/Mesh_QuadraticHexahedron27N.cxx
    Mesh/Mesh_QuadraticLine3N.cxx
    Mesh/Mesh_QuadraticPentahedron15N.cxx
    Mesh/Mesh_QuadraticPentahedron18N.cxx
    Mesh/Mesh_QuadraticPyramid13N.cxx
    Mesh/Mesh_QuadraticPyramid14N.cxx
    Mesh/Mesh_QuadraticQuadrangle8N.cxx
    Mesh/Mesh_QuadraticQuadrangle9N.cxx
    Mesh/Mesh_QuadraticTetrahedron10N.cxx
    Mesh/Mesh_QuadraticTriangle6N.cxx
    Mesh/Mesh_QuadraticTriangle7N.cxx
    Model/Model_Domain.cxx
    Model/Model_Element.cxx
    Model/Model_Node.cxx
    mp/mp_Edge2N.cxx
    mp/mp_Edge2N1d.cxx
    mp/mp_Edge2N2d.cxx
    mp/mp_Edge3N1d.cxx
    mp/mp_LinearLine1d.cxx
    mp/mp_Node.cxx
    mp/mp_Node1d.cxx
    mp/mp_Node2d.cxx
    mp/mp_QuadrilateralFace4N.cxx
    mp/mp_Tetrahedron4N.cxx
    mp/mp_TriangularFace3N.cxx
    mp/mp_TriangularFace3N2d.cxx
    RS/RS_Analysis.cxx
    RS/RS_Cable.cxx
    RS/RS_CatenaryCable.cxx
    RS/RS_Function.cxx
    RS/RS_FunctionEquilibrium.cxx
    RS/RS_Load.cxx
    RS/RS_LoadBreakpoint.cxx
    RS/RS_LoadHistory.cxx
    RS/RS_Object.cxx
    RS/RS_ParabolicCable.cxx
    RS/RS_SaggingAnalysis.cxx
    RS/RS_Section.cxx
    RSLib/RSLib_Function.cxx
    StdEMesher/StdEMesher_Mesher.cxx
    StdEMesher/StdEMesher_NumberOfSegments.cxx
    Triangle/Triangle_Command.cxx
    Triangle/Triangle_MakeTriangulation.cxx
    ts/ts_Breakpoint.cxx
    ts/ts_Constant.cxx
    ts/ts_Function.cxx
    ts/ts_PiecewiseLinear.cxx
    tsp/tsp_Breakpoint.cxx
    UCM/UCM_Elastic.cxx
    UCM/UCM_Material.cxx
    UXSM/UXSM_Elastic.cxx
    UXSM/UXSM_Section.cxx
)

# include directories
set(Ceres_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/Cable
    ${CMAKE_CURRENT_SOURCE_DIR}/CableLib
    ${CMAKE_CURRENT_SOURCE_DIR}/cell
    ${CMAKE_CURRENT_SOURCE_DIR}/cmp
    ${CMAKE_CURRENT_SOURCE_DIR}/Discrete
    ${CMAKE_CURRENT_SOURCE_DIR}/DOF
    ${CMAKE_CURRENT_SOURCE_DIR}/DOFAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/ElCLib
    ${CMAKE_CURRENT_SOURCE_DIR}/FE
    ${CMAKE_CURRENT_SOURCE_DIR}/FE1d
    ${CMAKE_CURRENT_SOURCE_DIR}/FE2d
    ${CMAKE_CURRENT_SOURCE_DIR}/FEAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/FEM
    ${CMAKE_CURRENT_SOURCE_DIR}/FEModel
    ${CMAKE_CURRENT_SOURCE_DIR}/GC
    ${CMAKE_CURRENT_SOURCE_DIR}/gce
    ${CMAKE_CURRENT_SOURCE_DIR}/GCE2d
    ${CMAKE_CURRENT_SOURCE_DIR}/Geom
    ${CMAKE_CURRENT_SOURCE_DIR}/Geom2d
    ${CMAKE_CURRENT_SOURCE_DIR}/gp
    ${CMAKE_CURRENT_SOURCE_DIR}/load
    ${CMAKE_CURRENT_SOURCE_DIR}/Material
    ${CMAKE_CURRENT_SOURCE_DIR}/MaterialAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/Mech
    ${CMAKE_CURRENT_SOURCE_DIR}/Mech2d
    ${CMAKE_CURRENT_SOURCE_DIR}/MechLib
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/Mesh
    ${CMAKE_CURRENT_SOURCE_DIR}/Mesh1d
    ${CMAKE_CURRENT_SOURCE_DIR}/Mesh2d
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshDS
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshLib
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshRep
    ${CMAKE_CURRENT_SOURCE_DIR}/Model
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelDS
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelLib
    ${CMAKE_CURRENT_SOURCE_DIR}/mp
    ${CMAKE_CURRENT_SOURCE_DIR}/RS
    ${CMAKE_CURRENT_SOURCE_DIR}/RSLib
    ${CMAKE_CURRENT_SOURCE_DIR}/StdEMesher
    ${CMAKE_CURRENT_SOURCE_DIR}/Triangle
    ${CMAKE_CURRENT_SOURCE_DIR}/TColFEAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/TColmp
    ${CMAKE_CURRENT_SOURCE_DIR}/TColtsp
    ${CMAKE_CURRENT_SOURCE_DIR}/ts
    ${CMAKE_CURRENT_SOURCE_DIR}/tsp
    ${CMAKE_CURRENT_SOURCE_DIR}/UCM
    ${CMAKE_CURRENT_SOURCE_DIR}/UXSM
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

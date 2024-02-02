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
    BRepCell/BRepCell_MakeCell.hxx
    BRepCell/BRepCell_MakeLinearLine.hxx
)

set(BRepCell_PKG_SOURCES
    BRepCell/BRepCell_Command.cxx
    BRepCell/BRepCell_MakeCell.cxx
    BRepCell/BRepCell_MakeLinearLine.cxx
)

# =============================================================================
# Package : BRepCellAPI
# =============================================================================

set(BRepCellAPI_PKG_HEADERS
    BRepCellAPI/BRepCellAPI_MakeCell.hxx
)

set(BRepCellAPI_PKG_SOURCES
    BRepCellAPI/BRepCellAPI_MakeCell.cxx
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
# Package : Mesh
# =============================================================================

set(Mesh_PKG_HEADERS
    Mesh/Mesh_Grid.hxx
)

set(Mesh_PKG_SOURCES
    Mesh/Mesh_Grid.cxx
)

# =============================================================================
# Package : Mesh1d
# =============================================================================

set(Mesh1d_PKG_HEADERS
    Mesh1d/Mesh1d_Cell.hxx
    Mesh1d/Mesh1d_LinearLine2N.hxx
    Mesh1d/Mesh1d_Node.hxx
    Mesh1d/Mesh1d_Object.hxx
    Mesh1d/Mesh1d_QuadraticLine3N.hxx
)

set(Mesh1d_PKG_SOURCES
    Mesh1d/Mesh1d_Cell.cxx
    Mesh1d/Mesh1d_LinearLine2N.cxx
    Mesh1d/Mesh1d_Node.cxx
    Mesh1d/Mesh1d_Object.cxx
    Mesh1d/Mesh1d_QuadraticLine3N.cxx
)

# =============================================================================
# Package : Mesh2d
# =============================================================================

set(Mesh2d_PKG_HEADERS
    Mesh2d/Mesh2d_Cell.hxx
    Mesh2d/Mesh2d_LinearLine2N.hxx
    Mesh2d/Mesh2d_LinearQuadrangle4N.hxx
    Mesh2d/Mesh2d_LinearTriangle3N.hxx
    Mesh2d/Mesh2d_Node.hxx
    Mesh2d/Mesh2d_Object.hxx
    Mesh2d/Mesh2d_QuadraticLine3N.hxx
    Mesh2d/Mesh2d_QuadraticQuadrangle8N.hxx
    Mesh2d/Mesh2d_QuadraticQuadrangle9N.hxx
    Mesh2d/Mesh2d_QuadraticTriangle6N.hxx
    Mesh2d/Mesh2d_QuadraticTriangle7N.hxx
)

set(Mesh2d_PKG_SOURCES
    Mesh2d/Mesh2d_Cell.cxx
    Mesh2d/Mesh2d_LinearLine2N.cxx
    Mesh2d/Mesh2d_LinearQuadrangle4N.cxx
    Mesh2d/Mesh2d_LinearTriangle3N.cxx
    Mesh2d/Mesh2d_Node.cxx
    Mesh2d/Mesh2d_Object.cxx
    Mesh2d/Mesh2d_QuadraticLine3N.cxx
    Mesh2d/Mesh2d_QuadraticQuadrangle8N.cxx
    Mesh2d/Mesh2d_QuadraticQuadrangle9N.cxx
    Mesh2d/Mesh2d_QuadraticTriangle6N.cxx
    Mesh2d/Mesh2d_QuadraticTriangle7N.cxx
)

# =============================================================================
# Package : Mesh
# =============================================================================

set(Mesh_PKG_HEADERS
    Mesh/Mesh_Cell.hxx
    Mesh/Mesh_LinearHexahedron8N.hxx
    Mesh/Mesh_LinearLine2N.hxx
    Mesh/Mesh_LinearPentahedron6N.hxx
    Mesh/Mesh_LinearPyramid5N.hxx
    Mesh/Mesh_LinearQuadrangle4N.hxx
    Mesh/Mesh_LinearTetrahedron4N.hxx
    Mesh/Mesh_LinearTriangle3N.hxx
    Mesh/Mesh_Node.hxx
    Mesh/Mesh_Object.hxx
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
)

set(Mesh_PKG_SOURCES
    Mesh/Mesh_Cell.cxx
    Mesh/Mesh_LinearHexahedron8N.cxx
    Mesh/Mesh_LinearLine2N.cxx
    Mesh/Mesh_LinearPentahedron6N.cxx
    Mesh/Mesh_LinearPyramid5N.cxx
    Mesh/Mesh_LinearQuadrangle4N.cxx
    Mesh/Mesh_LinearTetrahedron4N.cxx
    Mesh/Mesh_LinearTriangle3N.cxx
    Mesh/Mesh_Node.cxx
    Mesh/Mesh_Object.cxx
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
)

# =============================================================================
# Package : MeshAbs
# =============================================================================

set(MeshAbs_PKG_HEADERS
    MeshAbs/MeshAbs_TypeOfCell.hxx
    MeshAbs/MeshAbs_TypeOfObject.hxx
)

# =============================================================================
# Package : MeshDS
# =============================================================================

set(MeshDS_PKG_HEADERS
    MeshDS/MeshDS.hxx
    MeshDS/MeshDS_Array1OfObject.hxx
    MeshDS/MeshDS_Builder.hxx
    MeshDS/MeshDS_Cell.hxx
    MeshDS/MeshDS_Group.hxx
    MeshDS/MeshDS_ListOfObject.hxx
    MeshDS/MeshDS_Mesh.hxx
    MeshDS/MeshDS_Node.hxx
    MeshDS/MeshDS_Object.hxx
    MeshDS/MeshDS_TCell.hxx
    MeshDS/MeshDS_TGroup.hxx
    MeshDS/MeshDS_TMesh.hxx
    MeshDS/MeshDS_TNode.hxx
    MeshDS/MeshDS_TObject.hxx
    MeshDS/MeshDS_Tool.hxx
)

set(MeshDS_PKG_SOURCES
    MeshDS/MeshDS.cxx
    MeshDS/MeshDS_Builder.cxx
    MeshDS/MeshDS_Cell.cxx
    MeshDS/MeshDS_Group.cxx
    MeshDS/MeshDS_Mesh.cxx
    MeshDS/MeshDS_Node.cxx
    MeshDS/MeshDS_Object.cxx
    MeshDS/MeshDS_TCell.cxx
    MeshDS/MeshDS_TGroup.cxx
    MeshDS/MeshDS_TMesh.cxx
    MeshDS/MeshDS_TNode.cxx
    MeshDS/MeshDS_TObject.cxx
    MeshDS/MeshDS_Tool.cxx
)

# =============================================================================
# Package : MeshLib
# =============================================================================

set(MeshLib_PKG_HEADERS
    MeshLib/MeshLib_BaseMeshBuilder.hxx
    MeshLib/MeshLib_Command.hxx
    MeshLib/MeshLib_MakeCell.hxx
    MeshLib/MeshLib_MakeMesh.hxx
    MeshLib/MeshLib_MakeNode.hxx
    MeshLib/MeshLib_MakeNode1d.hxx
    MeshLib/MeshLib_MakeNode2d.hxx
    MeshLib/MeshLib_MakeObject.hxx
    MeshLib/MeshLib_MeshBuilder.hxx
    MeshLib/MeshLib_MeshBuilder1d.hxx
    MeshLib/MeshLib_MeshBuilder2d.hxx
    MeshLib/MeshLib_MeshBuilderError.hxx
)

set(MeshLib_PKG_SOURCES
    MeshLib/MeshLib_BaseMeshBuilder.cxx
    MeshLib/MeshLib_Command.cxx
    MeshLib/MeshLib_MakeCell.cxx
    MeshLib/MeshLib_MakeMesh.cxx
    MeshLib/MeshLib_MakeNode.cxx
    MeshLib/MeshLib_MakeNode1d.cxx
    MeshLib/MeshLib_MakeNode2d.cxx
    MeshLib/MeshLib_MakeObject.cxx
    MeshLib/MeshLib_MeshBuilder.cxx
    MeshLib/MeshLib_MeshBuilder1d.cxx
    MeshLib/MeshLib_MeshBuilder2d.cxx
)

# =============================================================================
# Package : MeshDS
# =============================================================================

set(MeshRep_PKG_HEADERS
    MeshRep/MeshRep_Cell.hxx
    MeshRep/MeshRep_Cell1d.hxx
    MeshRep/MeshRep_Cell2d.hxx
    MeshRep/MeshRep_Cell3d.hxx
    MeshRep/MeshRep_Node.hxx
    MeshRep/MeshRep_Node1d.hxx
    MeshRep/MeshRep_Node2d.hxx
    MeshRep/MeshRep_Node3d.hxx
    MeshRep/MeshRep_Representation.hxx
)

set(MeshRep_PKG_SOURCES
    MeshRep/MeshRep_Cell.cxx
    MeshRep/MeshRep_Cell1d.cxx
    MeshRep/MeshRep_Cell2d.cxx
    MeshRep/MeshRep_Cell3d.cxx
    MeshRep/MeshRep_Node.cxx
    MeshRep/MeshRep_Node1d.cxx
    MeshRep/MeshRep_Node2d.cxx
    MeshRep/MeshRep_Node3d.cxx
    MeshRep/MeshRep_Representation.cxx
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
)

set(MeshTools_PKG_SOURCES
    MeshTools/MeshTools_ObjectMapHasher.cxx
)

# =============================================================================
# Package : Model
# =============================================================================

set(Model_PKG_HEADERS
    Model/Model_Array1OfElement.hxx
    Model/Model_Array1OfNode.hxx
    Model/Model_Domain.hxx
    Model/Model_Element.hxx
    Model/Model_Node.hxx
)

set(Model_PKG_SOURCES
    Model/Model_Domain.cxx
    Model/Model_Element.cxx
    Model/Model_Node.cxx
)

# =============================================================================
# Package : ModelAbs
# =============================================================================

set(ModelAbs_PKG_HEADERS
    ModelAbs/ModelAbs_TypeOfDOF.hxx
    ModelAbs/ModelAbs_TypeOfElementProperty.hxx
    ModelAbs/ModelAbs_TypeOfModelisation.hxx
    ModelAbs/ModelAbs_TypeOfPhenomenon.hxx
)

# =============================================================================
# Package : ModelDS
# =============================================================================

set(ModelDS_PKG_HEADERS
    ModelDS/ModelDS_Builder.hxx
    ModelDS/ModelDS_Element.hxx
    ModelDS/ModelDS_ListOfElement.hxx
    ModelDS/ModelDS_Model.hxx
    ModelDS/ModelDS_Object.hxx
    ModelDS/ModelDS_TElement.hxx
    ModelDS/ModelDS_TElementProperties.hxx
    ModelDS/ModelDS_TModel.hxx
    ModelDS/ModelDS_TObject.hxx
)

set(ModelDS_PKG_SOURCES
    ModelDS/ModelDS_Builder.cxx
    ModelDS/ModelDS_Element.cxx
    ModelDS/ModelDS_Model.cxx
    ModelDS/ModelDS_Object.cxx
    ModelDS/ModelDS_TElement.cxx
    ModelDS/ModelDS_TElementProperties.cxx
    ModelDS/ModelDS_TModel.cxx
    ModelDS/ModelDS_TObject.cxx
)

# =============================================================================
# Package : ModelLib
# =============================================================================

set(ModelLib_PKG_HEADERS
    ModelLib/ModelLib_Command.hxx
    ModelLib/ModelLib_MakeElementProperties.hxx
)

set(ModelLib_PKG_SOURCES
    ModelLib/ModelLib_Command.cxx
    ModelLib/ModelLib_MakeElementProperties.cxx
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
# Package : xsp
# =============================================================================

set(xsp_PKG_HEADERS
    xsp/xsp_Circle.hxx
    xsp/xsp_Rectangle.hxx
    xsp/xsp_Square.hxx
)

set(xsp_PKG_SOURCES
    xsp/xsp_Circle.cxx
    xsp/xsp_Rectangle.cxx
    xsp/xsp_Square.cxx
)


# =============================================================================
# Ceres
# =============================================================================

# header files
set(Ceres_HEADERS
    ${BRepCell_PKG_HEADERS}
    ${BRepCellAPI_PKG_HEADERS}
    #${ElePRep_PKG_HEADERS}
    ${gp_PKG_HEADERS}
    ${Mesh_PKG_HEADERS}
    ${Mesh1d_PKG_HEADERS}
    ${Mesh2d_PKG_HEADERS}
    ${MeshAbs_PKG_HEADERS}
    ${MeshDS_PKG_HEADERS}
    ${MeshLib_PKG_HEADERS}
    ${MeshRep_PKG_HEADERS}
    ${MeshTools_PKG_HEADERS}
    #${Model_PKG_HEADERS}
    #${ModelAbs_PKG_HEADERS}
    #${ModelDS_PKG_HEADERS}
    #${ModelLib_PKG_HEADERS}
    ${mp_PKG_HEADERS}
    ${TColgp_PKG_HEADERS}
    ${TColMesh1d_PKG_HEADERS}
    ${TColmp_PKG_HEADERS}
    #${XS_PKG_HEADERS}
    #${XSAbs_PKG_HEADERS}
    ${xsp_PKG_HEADERS}
)

# source files
set(Ceres_SOURCES
    ${BRepCell_PKG_SOURCES}
    ${BRepCellAPI_PKG_SOURCES}
    #${ElePRep_PKG_SOURCES}
    ${gp_PKG_SOURCES}
    ${Mesh_PKG_SOURCES}
    ${Mesh1d_PKG_SOURCES}
    ${Mesh2d_PKG_SOURCES}
    ${MeshDS_PKG_SOURCES}
    ${MeshLib_PKG_SOURCES}
    ${MeshRep_PKG_SOURCES}
    ${MeshTools_PKG_SOURCES}
    #${Model_PKG_SOURCES}
    #${ModelDS_PKG_SOURCES}
    #${ModelLib_PKG_SOURCES}
    ${mp_PKG_SOURCES}
    #${XS_PKG_SOURCES}
    ${xsp_PKG_SOURCES}
)

# include directories
set(Ceres_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/BRepCell
    ${CMAKE_CURRENT_SOURCE_DIR}/BRepCellAPI
    ${CMAKE_CURRENT_SOURCE_DIR}/ElePRep
    ${CMAKE_CURRENT_SOURCE_DIR}/gp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mesh
    ${CMAKE_CURRENT_SOURCE_DIR}/Mesh1d
    ${CMAKE_CURRENT_SOURCE_DIR}/Mesh2d
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshDS
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshLib
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshRep
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshTools
    ${CMAKE_CURRENT_SOURCE_DIR}/Model
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelDS
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelLib
    ${CMAKE_CURRENT_SOURCE_DIR}/mp
    ${CMAKE_CURRENT_SOURCE_DIR}/TColgp
    ${CMAKE_CURRENT_SOURCE_DIR}/TColMesh1d
    ${CMAKE_CURRENT_SOURCE_DIR}/TColmp
    ${CMAKE_CURRENT_SOURCE_DIR}/XS
    ${CMAKE_CURRENT_SOURCE_DIR}/XSAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/xsp
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

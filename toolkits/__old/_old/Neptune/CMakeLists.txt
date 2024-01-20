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

set(Neptune_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/BRepCell
    ${CMAKE_CURRENT_SOURCE_DIR}/CM
    ${CMAKE_CURRENT_SOURCE_DIR}/DOF
    ${CMAKE_CURRENT_SOURCE_DIR}/DOFAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/EM
    ${CMAKE_CURRENT_SOURCE_DIR}/EM1d
    ${CMAKE_CURRENT_SOURCE_DIR}/FE1d

    ${CMAKE_CURRENT_SOURCE_DIR}/MaterialLib

    ${CMAKE_CURRENT_SOURCE_DIR}/MeshAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshDS
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshExp
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshLib
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshTools

    ${CMAKE_CURRENT_SOURCE_DIR}/ModelAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelDS
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelLib
    ${CMAKE_CURRENT_SOURCE_DIR}/TColDOF
    ${CMAKE_CURRENT_SOURCE_DIR}/XSM
    ${OpenCASCADE_INCLUDE_DIR}
)

set(Neptune_LINKED_LIBRARIES
    ${OpenCASCADE_FoundationClasses_LIBRARIES}
    ${OpenCASCADE_ModelingData_LIBRARIES}
    ${OpenCASCADE_ModelingAlgorithms_LIBRARIES}
)

set(Neptune_HEADERS
    BRepCell/BRepCell_Command.hxx
    BRepCell/BRepCell_MakeCell.hxx
    BRepCell/BRepCell_MakeLinearLine.hxx
    BRepCell/BRepCell_MakeLinearQuadrangle.hxx
    BRepCell/BRepCell_MakeLinearTriangle.hxx

    CM/CM_ElasticUniaxial.hxx
    CM/CM_Material.hxx
    DOF/DOF_Motion.hxx
    DOF/DOF_Object.hxx
    DOF/DOF_Rotation.hxx
    DOF/DOF_RotationX.hxx
    DOF/DOF_RotationY.hxx
    DOF/DOF_RotationZ.hxx
    DOF/DOF_Temperature.hxx
    DOF/DOF_Time.hxx
    DOF/DOF_Translation.hxx
    DOF/DOF_TranslationX.hxx
    DOF/DOF_TranslationY.hxx
    DOF/DOF_TranslationZ.hxx
    DOFAbs/DOFAbs_TypeOfDOF.hxx
    EM/EM_ElasticTruss1d.hxx
    EM/EM_Element.hxx
    EM1d/EM1d_ElasticTruss.hxx
    EM1d/EM1d_Element.hxx
    FE1d/FE1d_Domain.hxx
    FE1d/FE1d_ElasticTrussElement.hxx
    FE1d/FE1d_Element.hxx
    FE1d/FE1d_Node.hxx
    FE1d/FE1d_Object.hxx

    MaterialLib/MaterialLib_Command.hxx
    MaterialLib/MaterialLib_MakeElastic.hxx
    MaterialLib/MaterialLib_MakeMaterial.hxx

    MeshAbs/MeshAbs_TypeOfElement.hxx
    MeshAbs/MeshAbs_TypeOfObject.hxx

    MeshDS/MeshDS.hxx
    MeshDS/MeshDS_Array1OfObject.hxx
    MeshDS/MeshDS_Builder.hxx
    MeshDS/MeshDS_Element.hxx
    MeshDS/MeshDS_Group.hxx
    MeshDS/MeshDS_ListIteratorOfListOfObject.hxx
    MeshDS/MeshDS_ListOfObject.hxx
    MeshDS/MeshDS_Mesh.hxx
    MeshDS/MeshDS_Node.hxx
    MeshDS/MeshDS_Object.hxx
    MeshDS/MeshDS_TElement.hxx
    MeshDS/MeshDS_TGroup.hxx
    MeshDS/MeshDS_TMesh.hxx
    MeshDS/MeshDS_TNode.hxx
    MeshDS/MeshDS_TObject.hxx
    MeshDS/MeshDS_Tool.hxx

    MeshExp/MeshExp.hxx

    MeshLib/MeshLib_Command.hxx
    MeshLib/MeshLib_MakeMesh.hxx

    MeshTools/MeshTools_IndexedMapOfObject.hxx
    MeshTools/MeshTools_ListIteratorOfListOfObject.hxx
    MeshTools/MeshTools_ListOfObject.hxx
    MeshTools/MeshTools_ObjectMapHasher.hxx

    ModelAbs/ModelAbs_TypeOfDimension.hxx
    ModelAbs/ModelAbs_TypeOfDOF.hxx
    ModelAbs/ModelAbs_TypeOfElement.hxx
    ModelAbs/ModelAbs_TypeOfMaterial.hxx
    ModelAbs/ModelAbs_TypeOfMaterialAttribute.hxx
    ModelAbs/ModelAbs_TypeOfModelization.hxx
    ModelAbs/ModelAbs_TypeOfObject.hxx

    ModelDS/ModelDS.hxx
    ModelDS/ModelDS_Array1OfObject.hxx
    ModelDS/ModelDS_Builder.hxx
    ModelDS/ModelDS_DegreeOfFreedom.hxx
    ModelDS/ModelDS_DataMapIteratorOfDataMapOfIntegerObject.hxx
    ModelDS/ModelDS_DataMapOfIntegerObject.hxx
    ModelDS/ModelDS_Element.hxx
    ModelDS/ModelDS_ListOfObject.hxx
    ModelDS/ModelDS_Material.hxx
    ModelDS/ModelDS_Model.hxx
    ModelDS/ModelDS_Node.hxx
    ModelDS/ModelDS_Object.hxx
    ModelDS/ModelDS_ObjectMapHasher.hxx
    ModelDS/ModelDS_TDegreeOfFreedom.hxx
    ModelDS/ModelDS_TElement.hxx
    ModelDS/ModelDS_TMaterial.hxx
    ModelDS/ModelDS_TModel.hxx
    ModelDS/ModelDS_TNode.hxx
    ModelDS/ModelDS_TObject.hxx
    ModelDS/ModelDS_Tool.hxx
    ModelLib/ModelLib_Command.hxx
    ModelLib/ModelLib_MakeModel1d.hxx
    TColDOF/TColDOF_ListIteratorOfListOfObject.hxx
    TColDOF/TColDOF_ListOfObject.hxx
    TColDOF/TColDOF_SequenceOfObject.hxx
    XSM/XSM_Elastic1d.hxx
    XSM/XSM_Section.hxx
)

set(Neptune_SOURCES
    BRepCell/BRepCell_Command.cxx
    BRepCell/BRepCell_MakeCell.cxx
    BRepCell/BRepCell_MakeLinearLine.cxx
    BRepCell/BRepCell_MakeLinearQuadrangle.cxx
    BRepCell/BRepCell_MakeLinearTriangle.cxx

    CM/CM_ElasticUniaxial.cxx
    CM/CM_Material.cxx
    DOF/DOF_Motion.cxx
    DOF/DOF_Object.cxx
    DOF/DOF_Rotation.cxx
    DOF/DOF_RotationX.cxx
    DOF/DOF_RotationY.cxx
    DOF/DOF_RotationZ.cxx
    DOF/DOF_Temperature.cxx
    DOF/DOF_Time.cxx
    DOF/DOF_Translation.cxx
    DOF/DOF_TranslationX.cxx
    DOF/DOF_TranslationY.cxx
    DOF/DOF_TranslationZ.cxx
    EM/EM_ElasticTruss1d.cxx
    EM/EM_Element.cxx
    EM1d/EM1d_ElasticTruss.cxx
    EM1d/EM1d_Element.cxx
    FE1d/FE1d_Domain.cxx
    FE1d/FE1d_ElasticTrussElement.cxx
    FE1d/FE1d_Element.cxx
    FE1d/FE1d_Node.cxx
    FE1d/FE1d_Object.cxx

    MaterialLib/MaterialLib_Command.cxx
    MaterialLib/MaterialLib_MakeElastic.cxx
    MaterialLib/MaterialLib_MakeMaterial.cxx

    MeshDS/MeshDS.cxx
    MeshDS/MeshDS_Builder.cxx
    MeshDS/MeshDS_Element.cxx
    MeshDS/MeshDS_Group.cxx
    MeshDS/MeshDS_Mesh.cxx
    MeshDS/MeshDS_Node.cxx
    MeshDS/MeshDS_Object.cxx
    MeshDS/MeshDS_TElement.cxx
    MeshDS/MeshDS_TGroup.cxx
    MeshDS/MeshDS_TMesh.cxx
    MeshDS/MeshDS_TNode.cxx
    MeshDS/MeshDS_TObject.cxx
    MeshDS/MeshDS_Tool.cxx

    MeshExp/MeshExp.cxx

    MeshLib/MeshLib_Command.cxx
    MeshLib/MeshLib_MakeMesh.cxx

    MeshTools/MeshTools_ObjectMapHasher.cxx

    ModelDS/ModelDS.cxx
    ModelDS/ModelDS_Builder.cxx
    ModelDS/ModelDS_DegreeOfFreedom.cxx
    ModelDS/ModelDS_Element.cxx
    ModelDS/ModelDS_Material.cxx
    ModelDS/ModelDS_Model.cxx
    ModelDS/ModelDS_Node.cxx
    ModelDS/ModelDS_Object.cxx
    ModelDS/ModelDS_ObjectMapHasher.cxx
    ModelDS/ModelDS_TDegreeOfFreedom.cxx
    ModelDS/ModelDS_TElement.cxx
    ModelDS/ModelDS_TMaterial.cxx
    ModelDS/ModelDS_TModel.cxx
    ModelDS/ModelDS_TNode.cxx
    ModelDS/ModelDS_TObject.cxx
    ModelDS/ModelDS_Tool.cxx
    ModelLib/ModelLib_Command.cxx
    ModelLib/ModelLib_MakeModel1d.cxx
    XSM/XSM_Elastic1d.cxx
    XSM/XSM_Section.cxx
)

# rules
add_library(Neptune SHARED ${Neptune_HEADERS} ${Neptune_SOURCES})
target_include_directories(Neptune PUBLIC ${Neptune_INCLUDE_DIRS})
target_link_libraries(Neptune PUBLIC ${Neptune_LINKED_LIBRARIES})

# install library
install(
    TARGETS Neptune
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${Neptune_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)

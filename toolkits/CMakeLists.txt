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
# Package : MeshAbs
# =============================================================================

set(MeshAbs_PKG_HEADERS
    MeshAbs/MeshAbs_TypeOfCell.hxx
    MeshAbs/MeshAbs_TypeOfGrid.hxx
    MeshAbs/MeshAbs_TypeOfNode.hxx
)

# =============================================================================
# Package : MeshDS
# =============================================================================

set(MeshDS_PKG_HEADERS
    MeshDS/MeshDS.hxx
    MeshDS/MeshDS_Array1OfNode.hxx
    MeshDS/MeshDS_Builder.hxx
    MeshDS/MeshDS_Cell.hxx
    MeshDS/MeshDS_Grid.hxx
    MeshDS/MeshDS_Group.hxx
    MeshDS/MeshDS_Mesh.hxx
    MeshDS/MeshDS_ListOfCell.hxx
    MeshDS/MeshDS_Node.hxx
    MeshDS/MeshDS_TCell.hxx
    MeshDS/MeshDS_TGrid.hxx
    MeshDS/MeshDS_TGroup.hxx
    MeshDS/MeshDS_TMesh.hxx
    MeshDS/MeshDS_TNode.hxx
    MeshDS/MeshDS_TNode1d.hxx
    MeshDS/MeshDS_TNode2d.hxx
    MeshDS/MeshDS_TNode3d.hxx
    MeshDS/MeshDS_TObject.hxx
    MeshDS/MeshDS_Tool.hxx
    MeshDS/MeshDS_TUnstructuredGrid.hxx
)

set(MeshDS_PKG_SOURCES
    MeshDS/MeshDS.cxx
    MeshDS/MeshDS_Builder.cxx
    MeshDS/MeshDS_Cell.cxx
    MeshDS/MeshDS_Grid.cxx
    MeshDS/MeshDS_Group.cxx
    MeshDS/MeshDS_Mesh.cxx
    MeshDS/MeshDS_Node.cxx
    MeshDS/MeshDS_TCell.cxx
    MeshDS/MeshDS_TGrid.cxx
    MeshDS/MeshDS_TGroup.cxx
    MeshDS/MeshDS_TMesh.cxx
    MeshDS/MeshDS_TNode.cxx
    MeshDS/MeshDS_TNode1d.cxx
    MeshDS/MeshDS_TNode2d.cxx
    MeshDS/MeshDS_TNode3d.cxx
    MeshDS/MeshDS_TObject.cxx
    MeshDS/MeshDS_Tool.cxx
    MeshDS/MeshDS_TUnstructuredGrid.cxx
)

# =============================================================================
# Package : mp
# =============================================================================

set(mp_PKG_HEADERS
    mp/mp_LinearHexahedron8N.hxx
    mp/mp_LinearLine2N.hxx
    mp/mp_LinearPentahedron6N.hxx
    mp/mp_LinearPyramid5N.hxx
    mp/mp_LinearQuadrangle4N.hxx
    mp/mp_LinearTetrahedron4N.hxx
    mp/mp_LinearTriangle3N.hxx
    mp/mp_Node.hxx
    mp/mp_Node1d.hxx
    mp/mp_Node2d.hxx
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
)

set(mp_PKG_SOURCES
    mp/mp_LinearHexahedron8N.cxx
    mp/mp_LinearLine2N.cxx
    mp/mp_LinearPentahedron6N.cxx
    mp/mp_LinearPyramid5N.cxx
    mp/mp_LinearQuadrangle4N.cxx
    mp/mp_LinearTetrahedron4N.cxx
    mp/mp_LinearTriangle3N.cxx
    mp/mp_Node.cxx
    mp/mp_Node1d.cxx
    mp/mp_Node2d.cxx
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
    TColmp/TColmp_Array1OfNode.hxx
    TColmp/TColmp_Array1OfNode1d.hxx
    TColmp/TColmp_Array1OfNode2d.hxx
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
    TColmp/TColmp_SequenceOfNode.hxx
    TColmp/TColmp_SequenceOfNode1d.hxx
    TColmp/TColmp_SequenceOfNode2d.hxx
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
# Ceres
# =============================================================================

# header files
set(Ceres_HEADERS
    ${MeshAbs_PKG_HEADERS}
    ${MeshDS_PKG_HEADERS}
    ${mp_PKG_HEADERS}
    ${TColmp_PKG_HEADERS}
)

# source files
set(Ceres_SOURCES
    ${MeshDS_PKG_SOURCES}
    ${mp_PKG_SOURCES}
)

# include directories
set(Ceres_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshAbs
    ${CMAKE_CURRENT_SOURCE_DIR}/MeshDS
    ${CMAKE_CURRENT_SOURCE_DIR}/mp
    ${CMAKE_CURRENT_SOURCE_DIR}/TColmp
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

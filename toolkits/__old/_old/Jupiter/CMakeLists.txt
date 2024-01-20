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


# include directories
set(Jupiter_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/CM
    ${CMAKE_CURRENT_SOURCE_DIR}/FE1d
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelDS
    ${CMAKE_CURRENT_SOURCE_DIR}/XSM
    ${OpenCASCADE_INCLUDE_DIRS}
)

# linked libraries
set(Jupiter_LINKED_LIBRARIES
    ${OpenCASCADE_FoundationClasses_LIBRARIES}
    Ceres
    Juno
)

# headers
set(Jupiter_HEADERS
    CM/CM_Material.hxx
    CM/CM_UniaxialElastic.hxx
    FE1d/FE1d_ElasticTrussElement.hxx
    FE1d/FE1d_Element.hxx
    FE1d/FE1d_TrussElement.hxx
    ModelDS/ModelDS_MeshRepresentation.hxx
    ModelDS/ModelDS_TMesh.hxx
    ModelDS/ModelDS_TObject.hxx
    XSM/XSM_Section.hxx
    XSM/XSM_UniaxialElastic.hxx
)

# sources
set(Jupiter_SOURCES
    CM/CM_Material.cxx
    CM/CM_UniaxialElastic.cxx
    FE1d/FE1d_ElasticTrussElement.cxx
    FE1d/FE1d_Element.cxx
    FE1d/FE1d_TrussElement.cxx
    ModelDS/ModelDS_MeshRepresentation.cxx
    ModelDS/ModelDS_TMesh.cxx
    ModelDS/ModelDS_TObject.cxx
    XSM/XSM_Section.cxx
    XSM/XSM_UniaxialElastic.cxx
)

# rules
add_library(Jupiter SHARED ${Jupiter_HEADERS} ${Jupiter_SOURCES})
target_include_directories(Jupiter PUBLIC ${Jupiter_INCLUDE_DIRS})
target_link_libraries(Jupiter PUBLIC ${Jupiter_LINKED_LIBRARIES})

# install library
install(
    TARGETS Jupiter
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${Jupiter_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)

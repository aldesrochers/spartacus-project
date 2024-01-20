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

set(Ceres_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/cmp
    ${CMAKE_CURRENT_SOURCE_DIR}/fep
    ${CMAKE_CURRENT_SOURCE_DIR}/mp
    ${CMAKE_CURRENT_SOURCE_DIR}/pp
    ${CMAKE_CURRENT_SOURCE_DIR}/xsp
    ${OpenCASCADE_INCLUDE_DIR}
)

set(Ceres_LINKED_LIBRARIES
    ${OpenCASCADE_FoundationClasses_LIBRARIES}
)

set(Ceres_HEADERS
    cmp/cmp_Elastic.hxx
    fep/fep_Node1d.hxx
    mp/mp_LinearLine2P2d.hxx
    pp/pp_Edge.hxx
    pp/pp_Edge2d.hxx
    pp/pp_Hexahedron.hxx
    pp/pp_Pentahedron.hxx
    pp/pp_Pyramid.hxx
    pp/pp_Quadrangle.hxx
    pp/pp_Quadrangle2d.hxx
    pp/pp_Tetrahedron.hxx
    pp/pp_Triangle.hxx
    pp/pp_Triangle2d.hxx
    xsp/xsp_Elastic.hxx
)

set(Ceres_SOURCES
    cmp/cmp_Elastic.cxx
    fep/fep_Node1d.cxx
    mp/mp_LinearLine2P2d.cxx
    pp/pp_Edge.cxx
    pp/pp_Edge2d.cxx
    pp/pp_Hexahedron.cxx
    pp/pp_Pentahedron.cxx
    pp/pp_Pyramid.cxx
    pp/pp_Quadrangle.cxx
    pp/pp_Quadrangle2d.cxx
    pp/pp_Tetrahedron.cxx
    pp/pp_Triangle.cxx
    pp/pp_Triangle2d.cxx
    xsp/xsp_Elastic.cxx
)

# rules
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

# =============================================================================
# Copyright (C) 2021-
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the iCelllied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 TeCellle Place, Suite 330, Boston, MA  02111-1307 USA
#
# Alexis L. Desrochers (alexisdesrochers@gmail.com)
#
# =============================================================================

set(Juno_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/VVM
    ${OpenCASCADE_INCLUDE_DIR}
)

set(Juno_LINKED_LIBRARIES
    ${OpenCASCADE_FoundationClasses_LIBRARIES}
)

set(Juno_HEADERS
    VVM/VVM.hxx
    VVM/VVM_Array1OfCell.hxx
    VVM/VVM_Array1OfGroup.hxx
    VVM/VVM_Array1OfNode.hxx
    VVM/VVM_Cell.hxx
    VVM/VVM_Group.hxx
    VVM/VVM_Mesh.hxx
    VVM/VVM_Node.hxx
    VVM/VVM_Object.hxx
)

set(Juno_SOURCES
    VVM/VVM.cxx
    VVM/VVM_Cell.cxx
    VVM/VVM_Group.cxx
    VVM/VVM_Mesh.cxx
    VVM/VVM_Node.cxx
    VVM/VVM_Object.cxx
)

# rules
add_library(Juno SHARED ${Juno_HEADERS} ${Juno_SOURCES})
target_include_directories(Juno PUBLIC ${Juno_INCLUDE_DIRS})
target_link_libraries(Juno PUBLIC ${Juno_LINKED_LIBRARIES})

# install library
install(
    TARGETS Juno
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${Juno_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)

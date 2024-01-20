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

set(CableDesigner_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${QtCore_INCLUDE_DIRS}
    ${QtGui_INCLUDE_DIRS}
    ${QtWidgets_INCLUDE_DIRS}
    ${Apollo_INCLUDE_DIRS}
)

set(CableDesigner_HEADERS
    CableDesigner_Desktop.hxx
    CableDesigner_Session.hxx
)

set(CableDesigner_SOURCES
    CableDesigner_Desktop.cxx
    CableDesigner_Main.cxx
    CableDesigner_Session.cxx
)

set(CableDesigner_LINKED_LIBRARIES
    ${QtCore_LIBRARIES}
    ${QtGui_LIBRARIES}
    ${QtWidgets_LIBRARIES}
    Apollo
)

qt_add_resources(CableDesigner_RESOURCES
    icons/Icons.qrc
)

# rules
if(WIN32)
    add_executable(CableDesigner WIN32 ${CableDesigner_HEADERS} ${CableDesigner_SOURCES} ${CableDesigner_RESOURCES} CableDesigner.rc)
else()
    add_executable(CableDesigner ${CableDesigner_HEADERS} ${CableDesigner_SOURCES} ${CableDesigner_RESOURCES})
endif()
target_include_directories(CableDesigner PUBLIC ${CableDesigner_INCLUDE_DIRS})
target_link_libraries(CableDesigner PUBLIC ${CableDesigner_LINKED_LIBRARIES})

# install library
install(
    TARGETS CableDesigner
    DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${CableDesigner_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)

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

set(Mars_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/Viewer3d
)

set(Mars_LINKED_LIBRARIES
    Jupiter
    Venus
)

set(Mars_HEADERS
    Viewer3d/Viewer3d.hxx
    Viewer3d/Viewer3d_ActionTriggers.hxx
    Viewer3d/Viewer3d_ViewAction.hxx
    Viewer3d/Viewer3d_ViewWidget.hxx
    Viewer3d/Viewer3d_Window.hxx
)

set(Mars_SOURCES
    Viewer3d/Viewer3d.cxx
    Viewer3d/Viewer3d_ViewWidget.cxx
    Viewer3d/Viewer3d_Window.cxx
)

# rules
add_library(Mars SHARED ${Mars_HEADERS} ${Mars_SOURCES})
target_include_directories(Mars PUBLIC ${Mars_INCLUDE_DIRS})
target_link_libraries(Mars PUBLIC ${Mars_LINKED_LIBRARIES})

# install library
install(
    TARGETS Mars
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${Mars_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)

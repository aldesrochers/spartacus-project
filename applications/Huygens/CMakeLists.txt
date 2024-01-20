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

set(Huygens_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
)

set(Huygens_LINKED_LIBRARIES
    Apollo
    Minerva
)

set(Huygens_HEADERS
    Huygens_Desktop.hxx
    Huygens_Displayer.hxx
    Huygens_Navigator.hxx
    Huygens_Scene.hxx
    Huygens_ViewWindow.hxx
)

set(Huygens_SOURCES
    Huygens_Desktop.cxx
    Huygens_Displayer.cxx
    Huygens_Navigator.cxx
    Huygens_Main.cxx
    Huygens_Scene.cxx
    Huygens_ViewWindow.cxx
)

qt_add_resources(Huygens_RESOURCES
    icons/Huygens_Icons.qrc
)

# rules
if(WIN32)
    add_executable(Huygens WIN32 ${Huygens_HEADERS} ${Huygens_SOURCES} ${Huygens_RESOURCES} Huygens.rc)
else()
    add_executable(Huygens ${Huygens_HEADERS} ${Huygens_SOURCES} ${Huygens_RESOURCES})
endif()
target_include_directories(Huygens PUBLIC ${Huygens_INCLUDE_DIRS})
target_link_libraries(Huygens PUBLIC ${Huygens_LINKED_LIBRARIES})

# install library
install(
    TARGETS Huygens
    DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${Huygens_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)

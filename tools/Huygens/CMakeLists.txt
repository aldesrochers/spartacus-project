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


# configure version
configure_file(Huygens_Version.hxx.in Huygens_Version.hxx)


###
# core
###

set(HuygensCore_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/core
)

set(HuygensCore_LINKED_LIBRARIES
    Juno
)

set(HuygensCore_HEADERS
    core/Huygens_Engine.hxx
)

set(HuygensCore_SOURCES
    core/Huygens_Engine.cxx
)

# rules
add_library(HuygensCore SHARED ${HuygensCore_HEADERS} ${HuygensCore_SOURCES})
target_include_directories(HuygensCore PUBLIC ${HuygensCore_INCLUDE_DIRS})
target_link_libraries(HuygensCore PUBLIC ${HuygensCore_LINKED_LIBRARIES})

###
# application
###

set(Huygens_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/app
    ${CMAKE_CURRENT_SOURCE_DIR}/core
)

set(Huygens_LINKED_LIBRARIES
    HuygensCore
    Mars
)

set(Huygens_HEADERS
    app/Huygens_Desktop.hxx
    app/Huygens_ViewerWidget.hxx
)

set(Huygens_SOURCES
    app/Huygens_Desktop.cxx
    app/Huygens_Main.cxx
    app/Huygens_ViewerWidget.cxx
)

qt_add_resources(Huygens_RESOURCES
    icons/Icons.qrc
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

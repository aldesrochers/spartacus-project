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

set(Juno_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
)

set(Juno_LINKED_LIBRARIES
    ${OpenCASCADE_ApplicationFramework_LIBRARIES}
    Diana
)

set(Juno_HEADERS

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

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

set(Vesta_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
)

set(Vesta_LINKED_LIBRARIES

)

set(Vesta_HEADERS

)

set(Vesta_SOURCES

)

# rules
add_library(Vesta SHARED ${Vesta_HEADERS} ${Vesta_SOURCES})
target_include_directories(Vesta PUBLIC ${Vesta_INCLUDE_DIRS})
target_link_libraries(Vesta PUBLIC ${Vesta_LINKED_LIBRARIES})

# install library
install(
    TARGETS Vesta
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${Vesta_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)

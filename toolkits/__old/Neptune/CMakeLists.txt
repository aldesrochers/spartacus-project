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

set(Neptune_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
)

set(Neptune_LINKED_LIBRARIES

)

set(Neptune_HEADERS

)

# rules
add_library(Neptune SHARED ${Neptune_HEADERS} ${Neptune_SOURCES})
target_include_directories(Neptune PUBLIC ${Neptune_INCLUDE_DIRS})
target_link_libraries(Neptune PUBLIC ${Neptune_LINKED_LIBRARIES})

# install library
install(
    TARGETS Neptune
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${Neptune_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)

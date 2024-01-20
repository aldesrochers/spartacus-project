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

set(Jupiter_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
)

set(Jupiter_LINKED_LIBRARIES
    ${OpenCASCADE_Visualization_LIBRARIES}
    Diana
)

set(Jupiter_HEADERS

)

set(Jupiter_SOURCES

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

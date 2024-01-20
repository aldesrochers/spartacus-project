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

# include directories
set(Venus_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${QtGui_INCLUDE_DIRS}
    ${QtWidgets_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/StdApp
)

# linked libraries
set(Venus_LINKED_LIBRARIES
    ${QtCharts_LIBRARIES}
    ${QtGui_LIBRARIES}
    ${QtWidgets_LIBRARIES}
    Apollo
)

# headers
set(Venus_HEADERS
    StdApp/StdApp_AboutDialog.hxx
)

# sources
set(Venus_SOURCES
    StdApp/StdApp_AboutDialog.cxx
)

# uis
set(Venus_UIS
    StdApp/StdApp_AboutDialog.ui
)

# rules
add_library(Venus SHARED ${Venus_HEADERS} ${Venus_SOURCES} ${Venus_UIS})
target_include_directories(Venus PUBLIC ${Venus_INCLUDE_DIRS})
target_link_libraries(Venus PUBLIC ${Venus_LINKED_LIBRARIES})

# install library
install(
    TARGETS Venus
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES ${Venus_HEADERS} DESTINATION ${Spartacus_INSTALL_HEADERS})

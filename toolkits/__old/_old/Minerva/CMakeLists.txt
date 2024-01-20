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
set(Minerva_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/Viewer3d
    ${OpenCASCADE_INCLUDE_DIR}
    ${QtCore_INCLUDE_DIRS}
    ${QtGui_INCLUDE_DIRS}
    ${QtWidgets_INCLUDE_DIRS}
)

# linked libraries
set(Minerva_LINKED_LIBRARIES
    ${OpenCASCADE_FoundationClasses_LIBRARIES}
    ${OpenCASCADE_ModelingData_LIBRARIES}
    ${OpenCASCADE_ModelingAlgorithms_LIBRARIES}
    ${OpenCASCADE_Visualization_LIBRARIES}
    ${QtCore_LIBRARIES}
    ${QtGui_LIBRARIES}
    ${QtWidgets_LIBRARIES}
)

# headers
set(Minerva_HEADERS
    Viewer3d/Viewer3d.hxx
    Viewer3d/Viewer3d_View.hxx
    Viewer3d/Viewer3d_ViewWindow.hxx
)

# qrcs
set(Minerva_QRCS

)

# sources
set(Minerva_SOURCES
    Viewer3d/Viewer3d.cxx
    Viewer3d/Viewer3d_View.cxx
    Viewer3d/Viewer3d_ViewWindow.cxx
)

# uis
set(Minerva_UIS

)

# build library
qt_add_resources(Minerva_RESOURCES ${Minerva_QRCS})
add_library(Minerva SHARED ${Minerva_HEADERS} ${Minerva_SOURCES} ${Minerva_UIS} ${Minerva_RESOURCES})
target_include_directories(Minerva PUBLIC ${Minerva_INCLUDE_DIRS})
target_link_libraries(Minerva PUBLIC ${Minerva_LINKED_LIBRARIES})

# install library
install(
    TARGETS Minerva
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES ${Minerva_HEADERS} DESTINATION ${Spartacus_INSTALL_HEADERS})

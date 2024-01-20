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

set(Apollo_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/ElCLib
    ${CMAKE_CURRENT_SOURCE_DIR}/GC
    ${CMAKE_CURRENT_SOURCE_DIR}/gce
    ${CMAKE_CURRENT_SOURCE_DIR}/GCE2d
    ${CMAKE_CURRENT_SOURCE_DIR}/Geom
    ${CMAKE_CURRENT_SOURCE_DIR}/Geom2d
    ${CMAKE_CURRENT_SOURCE_DIR}/gp
    ${CMAKE_CURRENT_SOURCE_DIR}/TColGeom2d
    ${OpenCASCADE_INCLUDE_DIR}
)

set(Apollo_LINKED_LIBRARIES
    ${OpenCASCADE_FoundationClasses_LIBRARIES}
    ${OpenCASCADE_ModelingData_LIBRARIES}
)

set(Apollo_HEADERS
    ElCLib/ElCLib_Catenary.hxx
    GC/GC_ExtraRoot.hxx
    GC/GC_MakeArcOfCatenary.hxx
    GC/GC_MakeCatenary.hxx
    gce/gce_ExtraErrorType.hxx
    gce/gce_ExtraRoot.hxx
    gce/gce_MakeCatenary.hxx
    gce/gce_MakeCatenary2d.hxx
    GCE2d/GCE2d_ExtraRoot.hxx
    GCE2d/GCE2d_MakeArcOfCatenary.hxx
    GCE2d/GCE2d_MakeCatenary.hxx
    Geom/Geom_Catenary.hxx
    Geom2d/Geom2d_Catenary.hxx
    gp/gp_Catenary.hxx
    gp/gp_Catenary2d.hxx
    TColGeom2d/TColGeom2d_SequenceOfTrimmedCurve.hxx
)

set(Apollo_SOURCES
    ElCLib/ElCLib_Catenary.cxx
    GC/GC_ExtraRoot.cxx
    GC/GC_MakeArcOfCatenary.cxx
    GC/GC_MakeCatenary.cxx
    gce/gce_ExtraRoot.cxx
    gce/gce_MakeCatenary.cxx
    gce/gce_MakeCatenary2d.cxx
    GCE2d/GCE2d_ExtraRoot.cxx
    GCE2d/GCE2d_MakeArcOfCatenary.cxx
    GCE2d/GCE2d_MakeCatenary.cxx
    Geom/Geom_Catenary.cxx
    Geom2d/Geom2d_Catenary.cxx
    gp/gp_Catenary.cxx
    gp/gp_Catenary2d.cxx
)

# rules
add_library(Apollo SHARED ${Apollo_HEADERS} ${Apollo_SOURCES})
target_include_directories(Apollo PUBLIC ${Apollo_INCLUDE_DIRS})
target_link_libraries(Apollo PUBLIC ${Apollo_LINKED_LIBRARIES})

# install library
install(
    TARGETS Apollo
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${Apollo_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)

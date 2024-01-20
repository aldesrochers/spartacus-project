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
set(Test_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# linked libraries
set(Test_LINKED_LIBRARIES
    Ceres
)

# test sources
set(Test_SOURCES
    Test_BasicFEModel.cxx
    Test_Discrete.cxx
    Test_FE1d.cxx
    Test_FE2d.cxx
    Test_Mesh1d.cxx
    Test_MeshDS.cxx
    Test_Model.cxx
    Test_mp.cxx
    Test_ReadFileSTL.cxx
    Test_RS.cxx
    Test_TimeSeries.cxx
    Test_Triangle.cxx
    Test_UCM.cxx
)

# rules
foreach(Test_FILE ${Test_SOURCES})
    get_filename_component(Test_NAME ${Test_FILE} NAME_WE)
    if(WIN32)
        add_executable(${Test_NAME} WIN32 ${Test_FILE})
    else()
        add_executable(${Test_NAME} ${Test_FILE})
    endif()
    target_include_directories(${Test_NAME} PUBLIC ${Test_INCLUDE_DIRS})
    target_link_libraries(${Test_NAME} PUBLIC ${Test_LINKED_LIBRARIES})
endforeach()




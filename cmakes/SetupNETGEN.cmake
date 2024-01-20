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

set(Netgen_ROOT_DIR $ENV{Netgen_ROOT_DIR})
if(NOT EXISTS ${Netgen_ROOT_DIR})
    message(FATAL_ERROR "Could not locate Netgen root directory.")
endif()

# try to locate include directories
find_path(Netgen_INCLUDE_DIRS nglib.h PATHS ${Netgen_ROOT_DIR}/include NO_CACHE)

# defined required netgen libraries
set(Netgen_REQUIRED_LIBRARIES
    csg
    geom2d
    interface
    mesh
    #ngcore
    nglib
    occ
    stl
)

add_definitions("-DOCCGEOMETRY")

# try to locate libraries
unset(Netgen_LIBRARIES CACHE)
foreach(_lib ${Netgen_REQUIRED_LIBRARIES})
    find_library(Netgen_${_lib} ${_lib} PATHS ${Netgen_ROOT_DIR}/lib NO_CACHE)
    if(NOT EXISTS ${Netgen_${_lib}})
        message(FATAL_ERROR "Could not locate Netgen library ${_lib}")
    endif()
    list(APPEND Netgen_LIBRARIES ${Netgen_${_lib}})
endforeach()

set(Netgen_LIBRARIES ${Netgen_LIBRARIES} CACHE PATH "Netgen libraries.")


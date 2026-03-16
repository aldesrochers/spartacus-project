cmake_minimum_required(VERSION 3.14)
project(spartacus-project VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ----------------------------------------------------------------------------
# Optional: OpenCASCADE (OCC) support
# ----------------------------------------------------------------------------
find_package(OpenCASCADE QUIET)
if(OpenCASCADE_FOUND)
    message(STATUS "OpenCASCADE found: ${OpenCASCADE_INSTALL_PREFIX}")
    add_compile_definitions(HAVE_OCC)
else()
    message(STATUS "OpenCASCADE not found – OCC_MeshModel alias disabled")
endif()

# ----------------------------------------------------------------------------
# Subdirectories
# ----------------------------------------------------------------------------
add_subdirectory(meshing)

# ----------------------------------------------------------------------------
# Tests
# ----------------------------------------------------------------------------
enable_testing()
add_subdirectory(tests)

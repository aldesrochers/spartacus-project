add_library(meshing
    MeshModel_Attributes.cxx
    MeshModel_Group.cxx
)

target_include_directories(meshing
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include/meshing>
)

# Link OpenCASCADE toolkits when available
if(OpenCASCADE_FOUND)
    target_include_directories(meshing PUBLIC ${OpenCASCADE_INCLUDE_DIR})
    target_link_libraries(meshing PUBLIC TKernel TKBRep TKG3d)
endif()

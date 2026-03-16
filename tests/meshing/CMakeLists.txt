add_executable(test_meshing
    test_MeshModel_Attributes.cxx
    test_MeshModel_Group.cxx
    test_MeshModel.cxx
)

target_link_libraries(test_meshing
    PRIVATE
        meshing
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_meshing)

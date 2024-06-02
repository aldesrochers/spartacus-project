# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "tests/CMakeFiles/Test_MeshLib_autogen.dir/AutogenUsed.txt"
  "tests/CMakeFiles/Test_MeshLib_autogen.dir/ParseCache.txt"
  "tests/CMakeFiles/Test_Model_autogen.dir/AutogenUsed.txt"
  "tests/CMakeFiles/Test_Model_autogen.dir/ParseCache.txt"
  "tests/Test_MeshLib_autogen"
  "tests/Test_Model_autogen"
  "thirdparty/tetgen/CMakeFiles/tetgen_autogen.dir/AutogenUsed.txt"
  "thirdparty/tetgen/CMakeFiles/tetgen_autogen.dir/ParseCache.txt"
  "thirdparty/tetgen/tetgen_autogen"
  "thirdparty/triangle/CMakeFiles/triangle_autogen.dir/AutogenUsed.txt"
  "thirdparty/triangle/CMakeFiles/triangle_autogen.dir/ParseCache.txt"
  "thirdparty/triangle/triangle_autogen"
  "toolkits/CMakeFiles/Ceres_autogen.dir/AutogenUsed.txt"
  "toolkits/CMakeFiles/Ceres_autogen.dir/ParseCache.txt"
  "toolkits/Ceres_autogen"
  )
endif()

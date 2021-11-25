# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/TEC_Gallery_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/TEC_Gallery_autogen.dir/ParseCache.txt"
  "TEC_Gallery_autogen"
  )
endif()

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\firstTest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\firstTest_autogen.dir\\ParseCache.txt"
  "firstTest_autogen"
  )
endif()

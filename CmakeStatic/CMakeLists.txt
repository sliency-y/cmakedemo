
message("Test Dir: ${CMAKE_BINARY_DIR}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  "${CMAKE_BINARY_DIR}/lib")


add_library(CmakeStatic STATIC "CmakeStatic.cpp" "CmakeStatic.h" "HelloCmake.h" "HelloCmake.cpp")

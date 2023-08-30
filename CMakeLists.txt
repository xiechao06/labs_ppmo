cmake_minimum_required(VERSION 3.0.0)
project(ppmo VERSION 0.1.0 LANGUAGES C CXX)

set(CXX_STANDARD_REQUIRED on)
set(CXX_STANDARD 17)

include(CTest)
enable_testing()

add_subdirectory(ch2)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

include(FindMPI)
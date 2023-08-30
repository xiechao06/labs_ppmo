project(ch2 VERSION 0.1.0 LANGUAGES CXX)

include(FindMPI)

find_package(MPI REQUIRED)
find_package(fmt REQUIRED)

foreach(target hello hello2)
    add_executable(${target} ${target}.cc)
    set_property(TARGET ${target} PROPERTY CXX_STANDARD 17)
    target_link_libraries(${target} PRIVATE mpl)
    target_link_libraries(${target} PRIVATE MPI::MPI_CXX)
    target_link_libraries(${target} PRIVATE fmt::fmt-header-only)
endforeach()



include(FetchContent)


FetchContent_Declare(
  mpl
  GIT_REPOSITORY https://github.com/rabauke/mpl.git
  GIT_TAG        v0.3.0
)

FetchContent_MakeAvailable(mpl)

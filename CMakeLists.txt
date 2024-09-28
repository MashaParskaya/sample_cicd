cmake_minimum_required(VERSION 3.14)

project(sample)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)

FetchContent_Declare(
    googlebenchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.7.0
)

FetchContent_MakeAvailable(
    googletest
    googlebenchmark
)

add_subdirectory(sum)

add_subdirectory(main)

add_subdirectory(test)

add_subdirectory(benchmark)

cmake_minimum_required(VERSION 3.6)
project(xorcrypt)

set(CMAKE_CXX_COMPILER /usr/bin/g++)

file(GLOB_RECURSE sources   src/*.cpp src/*.hpp)

add_executable(xorcrypt ${sources})

target_compile_options(xorcrypt PUBLIC -std=c++17 -Wall)

target_include_directories(xorcrypt PUBLIC src)






install(TARGETS xorcrypt DESTINATION build)

set(CPACK_PACKAGE_NAME "xorcrypt")
set(CPACK_PACKAGE_VERSION "0.0.1")

set(CPACK_MONOLITHIC_INSTALL 1)


include(CPack)


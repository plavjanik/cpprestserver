cmake_minimum_required(VERSION 3.5)
project(cpprestserver LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpprestserver cpprestserver.cpp)

find_package(PkgConfig REQUIRED)
pkg_check_modules(SERVED_PKG REQUIRED IMPORTED_TARGET served)

target_link_libraries(cpprestserver PkgConfig::SERVED_PKG)

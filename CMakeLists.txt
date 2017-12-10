
# https://eax.me/clion-any-project/

cmake_minimum_required(VERSION 2.8)
project(vc-magic-cmake)
include_directories()
add_library(dummy_dll MODULE library.cpp)
add_executable(dummy_exe exe.cpp)
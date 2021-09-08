# CMakeList.txt : CMake project for hello-vcpkg, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_library (hello-vcpkg "hello-vcpkg.cpp" "hello-vcpkg.h")

# TODO: Add tests and install targets if needed.

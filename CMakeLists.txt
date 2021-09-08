# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("hello-vcpkg")

# Include sub-projects.
find_package(fmt CONFIG REQUIRED)
add_subdirectory ("hello-vcpkg")

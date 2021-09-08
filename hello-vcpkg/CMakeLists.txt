# CMakeList.txt : CMake project for hello-vcpkg, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_library (hello-vcpkg "hello-vcpkg.cpp" "hello-vcpkg.h")

include(GNUInstallDirs)
install(TARGETS hello-vcpkg
    EXPORT hello-export
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(EXPORT hello-targets
  FILE
    HelloVcpkgTargets.cmake
  NAMESPACE
    tl::
  DESTINATION
    ${CMAKE_INSTALL_LIBDIR}/cmake/hello-vcpkg
)


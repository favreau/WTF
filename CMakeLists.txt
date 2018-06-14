cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(wtf_example VERSION 0.1.0)

set(WTF_DESCRIPTION "What the Fuck example")

# Check for C++11 support
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

# compiler selection for the non-MIC part
if(APPLE)
  set(SIMDVOXELIZER_COMPILER "CLANG" CACHE STRING "compiler to use (ICC,GCC, or CLANG)")
  set_property(CACHE SIMDVOXELIZER_COMPILER PROPERTY STRINGS ICC GCC CLANG)
else(APPLE)
  set(SIMDVOXELIZER_COMPILER "GCC" CACHE STRING "compiler to use (ICC or GCC)")
  set_property(CACHE SIMDVOXELIZER_COMPILER PROPERTY STRINGS ICC GCC)
endif()

set(WTF_SOURCES example.cpp)

include_directories(${PROJECT_SOURCE_DIR} ${CMAKE_BINARY_DIR})

ADD_EXECUTABLE(
    ${PROJECT_NAME}
    ${WTF_SOURCES}
    )

TARGET_LINK_LIBRARIES(
    ${PROJECT_NAME}
    ${WTF_LINK_LIBRARIES}
)

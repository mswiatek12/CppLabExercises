cmake_minimum_required(VERSION 3.1.0)
project(Intro)

# Prevent in-source building
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES ON)
if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(SEND_ERROR "In-source builds are not allowed.")
endif()

# Define LONG_LOOP variable with default value 0
option(LONG_LOOP "Perform long loop" OFF)

# Set appropriate flags based on LONG_LOOP value
if(LONG_LOOP)
    add_definitions(-DLONG_LOOP)
    message(STATUS "Long loop will be performed.")
else()
    message(STATUS "Long loop will NOT be performed.")
endif()

# Set build type and C++ standard
set(CMAKE_BUILD_TYPE Debug) #Release
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall")

# Include directories
set(INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${INCLUDES})

# Collect source files
file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

# Create executable
add_executable(${PROJECT_NAME} Main.cpp ${SOURCES})

# CMakeLists.txt

# We are using version 3.0.2 of CMake for this example
cmake_minimum_required( VERSION 3.0.2 )

# Workspace is mi_baremetal_sdk, at the end you should see a 
# HelloWorld directory witht the project on it
project( SDK )

set(CMAKE_CXX_FLAGS "-fpermissive -std=c++14")
# Set the directory where the bin will be built.
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)

# Add subdirectories
ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(parser)

include_directories(${CMAKE_SOURCE_DIR}/parser/inc)

#excutable
ADD_EXECUTABLE(LED_STATE_Machine ${CMAKE_SOURCE_DIR}/main.c)


#Link libs with main file.
TARGET_LINK_LIBRARIES(LED_STATE_Machine src parser) 


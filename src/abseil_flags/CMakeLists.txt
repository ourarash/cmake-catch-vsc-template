cmake_minimum_required(VERSION 3.5)

project(flags_main)

# Abseil requires C++11
set(CMAKE_CXX_STANDARD 20)

# Process Abseil's CMake build system
# add_subdirectory(../third_party/abseil-cpp)

add_executable(flags_main flags_main.cc)

# Declare dependency on the absl::strings library
target_link_libraries(flags_main absl::flags absl::flags_commandlineflag absl::flags_parse)

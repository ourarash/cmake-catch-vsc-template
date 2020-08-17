# Require CMAKE 3.1 or higher
cmake_minimum_required(VERSION 3.1)

# Project name
project(pa1)

# Build for C++20 if we can
set(CMAKE_CXX_STANDARD 20)

# Turn on any compiler-specific flags
if (WIN32)
	# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /WX")
else()
	# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
	if ("$ENV{SANITIZE}" STREQUAL "ON")
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
	endif()
	
	if(APPLE)
		set(CMAKE_XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS[variant=Debug] "YES")
		set(CMAKE_XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS[variant=MinSizeRel] "NO")
		set(CMAKE_XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS[variant=RelWithDebInfo] "YES")
		set(CMAKE_XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS[variant=Release] "NO")
	endif()
endif()

# Any source files in this directory
set(SOURCE_FILES main.cpp)

# Where any include files are
include_directories(src)

# Subdirectories to build
add_subdirectory(src)
add_subdirectory(tests)

# Name of executable
add_executable(main ${SOURCE_FILES})

# Link main vs the source library
target_link_libraries(main src)

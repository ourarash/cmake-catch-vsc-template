# Require CMAKE 3.1 or higher
cmake_minimum_required(VERSION 3.1)

# Project name
project(cppstarter)

# Build for C++20 if we can
set(CMAKE_CXX_STANDARD 20)

# Turn on any compiler-specific flags
if (WIN32)
	# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /WX")
else()
	# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
	# if ("$ENV{SANITIZE}" STREQUAL "ON")
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
	# endif()
	
	if(APPLE)
		set(CMAKE_XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS[variant=Debug] "YES")
		set(CMAKE_XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS[variant=MinSizeRel] "NO")
		set(CMAKE_XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS[variant=RelWithDebInfo] "YES")
		set(CMAKE_XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS[variant=Release] "NO")
	endif()
endif()

# Any source files in this directory
set(SOURCE_FILES src/main/main.cpp)

set(LIBRARY_NAME cpplib)

include(FetchContent)

# Downloading abseil package
FetchContent_Declare(
  abseil
  URL https://github.com/abseil/abseil-cpp/archive/master.zip)
FetchContent_Populate(abseil)
message(STATUS "abseil is available in " ${abseil_SOURCE_DIR})


# Where any include files are
include_directories(src/lib)

# Subdirectories to build
add_subdirectory(src/lib)
add_subdirectory(src/tests)
add_subdirectory(${abseil_SOURCE_DIR})
add_subdirectory(src/abseil_demo)
add_subdirectory(src/abseil_flags)


# Name of executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link
target_link_libraries(${PROJECT_NAME} ${LIBRARY_NAME})

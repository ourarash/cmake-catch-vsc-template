# If you create new headers/cpp files, add them to these list!
set(HEADER_FILES
	cpplib.h
)

set(SOURCE_FILES
  cpplib.cpp
)

# Don't change this
add_library(src ${SOURCE_FILES} ${HEADER_FILES})

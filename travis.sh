#!/bin/bash
# Cmake into build directory
echo "Compiling..."
mkdir build
cd build
CC=clang CXX=clang++ cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. || exit 1
make || exit 1
echo "Running clang-tidy..."
../run-clang-tidy.py -quiet -header-filter=.*/src/.* || exit 1
# Return to root folder (so cwd is correct)
cd ..
# Run student tests
echo "Running tests..."
timeout 10 build/tests/tests  || exit 1
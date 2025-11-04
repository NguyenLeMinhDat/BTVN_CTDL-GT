#!/bin/bash

if [ ! -d "build" ]; then
    mkdir build
fi
gcc ./src/main.c ./src/basic_sorting.c ./src/merge_sort.c ./src/quick_sort.c ./src/test_vector.c -o ./build/main
./build/main
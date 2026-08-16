#!/bin/bash
g++ $1.cpp -o $1 \
    -std=c++11 \
    -Wall \
    -Wextra \
    -pipe \
    -O2 \
    -s \
    -static \
    -lm \
    -x c++ \
    -DTHEMIS -Wl,-z,stack-size=16777216 \
    && ./$1
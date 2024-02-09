#!/bin/sh

set -xe

RAYLIB_DIR="./raylib"

clang -I"${RAYLIB_DIR}/include" -o sortalizer main.c -Wall -Wextra -L"${RAYLIB_DIR}/lib" -lraylib -lm && ./sortalizer
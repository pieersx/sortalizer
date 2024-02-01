#!/bin/sh

# export PKG_CONFIG_PATH=$HOME/opt/raylib/lib/pkgconfig/

RAYLIB_DIR="./raylib"

# Compilar y enlazar el programa
clang -I"${RAYLIB_DIR}/include" -o sortalizer main.c -Wall -Wextra -L"${RAYLIB_DIR}/lib" -lraylib -lm && ./sortalizer
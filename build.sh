#!/bin/sh

set -xe

CFLAGS="-g -Wall -Wextra -I./raylib/include/ sortalizer.c"

LIBS="-L./raylib/lib/ -lraylib -lm"

clang $CFLAGS -o sortalizer main.c $LIBS
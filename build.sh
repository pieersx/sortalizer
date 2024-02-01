#!/bin/sh

export PKG_CONFIG_PATH=$HOME/opt/raylib/lib/pkgconfig/

clang `pkg-config --cflags raylib` -o sortalizer `pkg-config --libs raylib` main.c -Wall -Wextra -lraylib -lm && ./sortalizer
 
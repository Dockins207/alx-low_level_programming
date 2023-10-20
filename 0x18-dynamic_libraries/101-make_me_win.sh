#!/bin/bash
wget -D /temp https://github.com/Dockins207/alx-low_level_programming/raw/main/0x18-dynamic_libraries/make_me_win.so
export LD_PRELOAD=/temp/make_me_win.so

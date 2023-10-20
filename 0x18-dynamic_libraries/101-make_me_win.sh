#!/bin/bash
wget -D /tmp https://github.com/Dockins207/alx-low_level_programming/raw/master/0x18-dynamic_libraries/can_win.so
export LD_PRELOAD=/tmp/can_win.so

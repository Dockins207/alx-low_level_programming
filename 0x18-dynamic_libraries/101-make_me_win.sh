#!/bin/bash
wget -P /tmp/win.so https://github.com/Dockins207/alx-low_level_programming/tree/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so

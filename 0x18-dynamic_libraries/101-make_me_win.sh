#!/bin/bash
gcc -shared -o my_printf.so -fPIC test.c
export LD_PRELOAD=my_printf.so:$LD_LIBRARY_PATH

#!/bin/bash
gcc -fPIC -c inject.c
gcc -shared -o 101-make_me_win.so inject.c

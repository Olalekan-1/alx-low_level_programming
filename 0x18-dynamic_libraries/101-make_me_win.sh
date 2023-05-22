#!/bin/bash
wget https://github.com/Olalekan-1/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/gm.so -p ../
LD_PRELOAD=../gm.so

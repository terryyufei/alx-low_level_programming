#!/bin/bash
wget -P /tmp https://github.com/terryyufei/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libwinner.so
export LD_PRELOAD=/tmp/libwinner.so

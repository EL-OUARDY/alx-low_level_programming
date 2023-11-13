#!/bin/bash
wget -P /tmp https://github.com/EL-OUARDY/alx-low_level_programming/raw/main/0x18-dynamic_libraries/random.so
export LD_PRELOAD=/tmp/random.so

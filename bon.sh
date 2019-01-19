#!/bin/sh
# criteria search on surname field then count results then clean output of empty spaces
ldapsearch -x "(sn=*bon*)" | grep '^sn:' | wc -l | bc

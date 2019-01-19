#!/bin/sh
ldapsearch -x -L "(uid=z*)" cn -Q | grep '^cn:' | sort -r --ignore-case | cut -c5-999

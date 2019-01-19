#!/bin/sh
# find all .sh files and then subsquentely remove the file extension '.sh' and the filepath
find . -type f -name '*.sh' | sed 's/\.[^.]*$//' | sed 's/.*\///'

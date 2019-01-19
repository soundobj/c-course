#!/bin/sh
# Write a command line that displays every other line for the command ls -l, starting from the first line.
ls -l | sed "n; d"

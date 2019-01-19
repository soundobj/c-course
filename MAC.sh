#/!bin/sh
# grep for the mac addresses and then remove the 'ether' key then remove empty spaces from the output
ifconfig -a | grep "ether " | sed "s/ether / /" | awk '{$1=$1};1'

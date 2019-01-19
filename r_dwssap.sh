#!/bin/sh
# TO TEST THIS PROPERLY: the tester must set the env variables FT_LINE1 and FT_LINE2 using export 
# remove comments 
# print every other even line
# reverse sort
# select login tupple
# reverse 
# add space before login for formatting
# select only lines between enviroment variables 
# replace new lines for commas 
# replace last comma for a dot
# remove preceeding space from first login to match exercise 
cat /etc/passwd | grep -v "#" | sed '1d; n; d' | sort -r | cut -d : -f 1 | rev | sed -e 's/^/ /' | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr  '\n' "," | sed "r/,/, /g" | sed  "s/.$/./" | sed "s/^ //"

#!/bin/bash

# VARIABLES

D=$(printenv MY_LINE1)
F=$(printenv MY_LINE2)

# Check if env variables is empty or not

if [[ $D == "" ]] || [[ $F == "" ]]
then
    exit;
fi

# SCRIPT

list=$(sed -e 'n;p' |
    cut -d: -f 1 |
    rev |
    sort -r |
    sed -e "${D},${F}!d" |
    tr '\n' ",\ " |
    sed -e 's/,/, /g')
list=${list::-2}

echo $list"."

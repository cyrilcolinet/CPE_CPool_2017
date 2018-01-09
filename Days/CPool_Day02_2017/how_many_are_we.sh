#!/bin/bash

# Script (no parameter given)

if [ $# == 0 ]
then
    wc -l
    exit;
fi

# Script (city parameter given)

city_param=$1

cut -d';' -f 3 | grep -i "${city_param}" | wc -l

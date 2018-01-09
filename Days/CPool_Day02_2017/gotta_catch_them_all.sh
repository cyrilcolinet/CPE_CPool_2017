#!/bin/bash

if [ $# == 0 ]
then
    exit;
fi

cut -d':' -f 5 | cut -d' ' -f 2 | grep -i "^${1}" | wc -l

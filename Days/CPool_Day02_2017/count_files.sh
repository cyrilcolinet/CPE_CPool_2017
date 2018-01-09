#!/bin/bash

count=0

for file in $(find . -path "./.git" -prune -o -type f)
do
    regular=$(test -f $file && echo "regular")

    if [[ $regular == "regular" ]]
    then
	count=$(($count+1));
    fi
done

echo $count

#!/bin/sh

if [ $# != 1 ]
then
    exit;
fi

git add .
git commit -m "${1}"
git push origin -u master

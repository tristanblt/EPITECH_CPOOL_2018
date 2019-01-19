#!/bin/bash

if [ $# == 1 ]; then
    grep ${1^^} -c
else
    wc -l
fi

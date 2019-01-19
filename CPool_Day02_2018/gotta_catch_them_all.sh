#!/bin/bash

if [ $# == 1 ]; then
    grep -E " $1" | wc -l
else
    echo "One argument please" 1>&2
fi

#!/bin/bash
let "i = 0"
let "j = 0"
while read p; do
    let "j = i % 2"
    if [ $j == 0 ]; then
       echo "$p"
    fi
    let "i = i + 1"
done

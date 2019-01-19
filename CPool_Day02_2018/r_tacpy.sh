#!/bin/bash
sed -e 's/:..*//' | tac | rev | sed '1~2d' | sort -r | sed -n $MY_LINE1','$MY_LINE2'p' | awk -vORS=', ' "{ print $1 }" | sed 's/,$/\n/' | rev | sed '0,/RE/s/ ,/./' | rev

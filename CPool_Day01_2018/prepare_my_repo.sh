#!/bin/bash

# if different from 1 argument                                                                
if [ $# != 1 ]; then
    echo "Incorrect number of params"
else
    blih -u tristan.bouillot@epitech.eu repository create $1
    blih -u tristan.bouillot@epitech.eu repository setacl $1 ramassage-tek r
    blih -u tristan.bouillot@epitech.eu repository getacl $1
fi

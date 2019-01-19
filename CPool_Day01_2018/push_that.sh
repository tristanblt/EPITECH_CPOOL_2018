#!/bin/bash

# if different from 1 argument
if [ $# == 0 ]; then
    bash -c "git add *"
    bash -c "git commit -m 'Note: apprendre a utiliser emacs'"
    bash -c "git push origin master"
else
    bash -c "git add *"
    bash -c "git commit -m '$*'"
    bash -c "git push origin master"
fi

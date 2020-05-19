#!/bin/bash 
git add --all
git commit -m $(date +%m%d%H%M)
git push -u origin master

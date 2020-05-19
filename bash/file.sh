#!/bin/bash
# -d -f -e -s -r -w -x
dir="/home/lw/桌面/learn"
file="/home/lw/camera.py"
if [ -d $dir ]
then 
echo "is a directory"
fi

if [ -f $file ]
then 
echo "is a file"
fi

if [ -r $file ]
then 
echo "read"
fi

if [ -w  $file ]
then 
echo "write"
fi
if [ -s $file ]
then 
echo "run"
fi
#!/bin/bash
a="wjjw"
# b="weq"
b=$a
c=1
d=1
e=$[c+d]
echo $c $d $e

if test $a = $b
then 
echo a等于b
fi
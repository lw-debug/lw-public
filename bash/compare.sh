#!/bin/bash
a=10
b=10
if [ $a!=$b ] 
then
    echo "a不等于b"
fi
if [ $a -ge $b ]
then
echo "a大于等于b"
fi

if [ $a -ge $b ]
then
echo "a小于等于b"
fi



a=10
b=20

if [ $a != $b ]
then
   echo "$a != $b : a 不等于 b"
else
   echo "$a == $b: a 等于 b"
fi
if [ $a -lt 100 -a $b -gt 15 ]
then
   echo "$a 小于 100 且 $b 大于 15 : 返回 true"
else
   echo "$a 小于 100 且 $b 大于 15 : 返回 false"
fi
if [[ $a -lt 100 || $b -gt 100 ]]
then
   echo "$a 小于 100 或 $b 大于 100 : 返回 true"
else
   echo "$a 小于 100 或 $b 大于 100 : 返回 false"
fi





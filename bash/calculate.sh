#!/bin/bash 
#在expr里运算符之间加空格,* 要转义
a=110
b=20
val=`expr $a + $b`
echo "a+b: $val"

val=`expr $a - $b`
echo "a-b: $val"

val=`expr $a \* $b`
echo "a*b: $val"

val=`expr $a / $b`
echo "a/b: $val"

val=`expr $a  % $b`
echo "a%b: $val"

a=$b
val=`expr $a == $b`
echo "a==b: $val"
val=`expr $a != $b`
echo "a!=b: $val"
#[] 与表达式之间需要空格
if [ $a==$b ];then
    echo "ab"
else 
    echo "a!=b"
fi
if [ $a -eq $b ];then
printf "equal \n"
fi
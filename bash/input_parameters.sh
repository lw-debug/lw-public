#!/bin/bash
echo "这是输入参数的实验"
echo ${0}
echo ${1}
echo $#
# echo "'${*}'" 
#* 返回一个字符串“1 2 3 4”
# @返回n个字符串 “1” “2" ...
#但echo 时是一样的，for 循环不一样
# echo $$
:<<B
for i in "$@"; do
    echo $i
done
for i in "$*"; do
    echo $i
done
B
if [ "$1" ]; then
    echo "包含第一个参数"
else
    echo "没有包含第一参数"
fi

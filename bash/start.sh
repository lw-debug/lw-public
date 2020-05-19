#!/bin/bash
:<<EOF
myname="lw"
str='my name is '${myname}''
echo ${str:0}
echo `expr index "${str}" m`
EOF
#或 
:<<A
注释内容...
注释内容...
注释内容...
A
array1=(1 2 3 4 5)
array2[6]=6
array2[1]=7
array2[3]=8
array2[5]=123
array2[7]=10
echo ${array1[@]}
echo ${array2[5]}
echo ${#array2[@]} 
echo ${array2[*]} 
#返回array2[5]的长度，123返回3
#返回array2[@]的长度即数组元素个数，返回5

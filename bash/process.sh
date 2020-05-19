#!/bin/bash
#if 
a=123
b=234
# a=21312
:<<IF
if test $a == $b
then
    printf "a=b"
elif test $a -gt $b
then 
    printf "a>b"
else
    echo "a<b"
fi
IF

:<<FOR
for((i=0;i<10;i++))
do 
    echo $i
done

for i in 1 2 3 4 5 
do
    printf %d $i
done
FOR

:<<WHILE
j=0
while((j++ < 10))
do
    printf $j
done

i=0
while true; 
do
    echo $i
    let i++ 
done
########### 死循环用 while : 或者 while true
while :
do
echo 0
done
WHILE
i=$1
echo "in case"
case $i in 
    1) echo 1
    ;;
    2) echo 2
    ;;
    *) echo $i
esac 


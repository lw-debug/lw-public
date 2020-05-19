#!/bin/bash
function func()
{

    echo "first func"
    echo $1 $3
    return 2
}

echo "test"
func 1 34 43
echo $?
echo "end"

:<<COPY
echo "Hello World !" | grep -e Hello
echo $?
echo "Hello World !" | grep -e bye
echo $?
if echo "Hello World !" | grep -e Hello
then
    echo true
else
    echo false
fi

if echo "Hello World !" | grep -e Bye
then
    echo true
else
    echo false
fi

function demoFun1(){
    return 0
}

function demoFun2(){
    return 12
}

if demoFun1
then
    echo true
else
    echo false
fi

if demoFun2
then
    echo ture
else
    echo false
fi

COPY
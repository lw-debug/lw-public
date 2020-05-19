#!/bin/bash
#加-是左对齐，默认右对齐
printf "%-10s %-8s %-10s %-6s\n" 姓名 性别 年龄 体重
printf "%-10s %-8s %-6s %-6.2f\n" 刘未 男 24  56.123
printf "%-10s %-8s %-6s %-6.2f\n" 刘末 女 24  50.189
printf "%d  \'%s\' \n" 1 '1' 1 1 111
#格式重用，相当于调用3次 ds

# printf "a string, no processing:<%s>\n" "A\nB"
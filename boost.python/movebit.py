#!/usr/bin/env python

tem=0
for i in range(4):
    x=x-(tem<<(4-i))
    tem=x>>(3-i)
    print(tem)
    

# print(a>>4)
# print(b>>6)
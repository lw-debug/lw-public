#!/usr/bin/env python3
import os
cmd = "roscore"
kill1 = "killall -9 roscore"
kill2 = "killall -9 rosmaster"
# os.popen(cmd)
res = os.system(cmd)
print(res)
if res:
    os.popen(kill1)
    os.popen(kill2)
    print(1111)
    res = os.system(cmd)

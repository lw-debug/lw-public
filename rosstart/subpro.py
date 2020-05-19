#!/usr/bin/env python3
# _*_* coding:utf-8 *_*_
import os
import time
cmd1 = "gnome-terminal -e 'bash -c \"roscore; exec bash\"'"
cmd2 = "gnome-terminal -e 'bash -c \"rosrun turtlesim turtlesim_node;\
     exec bash\"'"
os.popen(cmd1)
time.sleep(5)
os.popen(cmd2)

import function
import time
num = 10000000
my = function.function("lw", 24, 3640)
my.printinfo()
# print(my.name)
my.name="23112"
print(my.name)
my.printinfo()
time1 = time.time()
my.round(num)
time2 = time.time()
for i in range(num):
    pass
time3 = time.time()
print(time2-time1) 
print(time3-time2)

stru=function.functionstruct()
stru.a=1
stru.b=3
print(stru.add())

my.time1=1
my.time2=5
print(my.addtime())

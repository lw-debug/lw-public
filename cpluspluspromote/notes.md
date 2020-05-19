#C++提高笔记
##difference c & c++
###1.c++会对全局变量进行重定义检查，c不会
  int val;//在全局的bss段，初始化为0
  int val=20;//在全局data段
###2.使用struct定义变量不用带（struct 关键字）
###3.C++参数不匹配会报错,c是warning
###4.C++增加了bool true false
    bool  true=1 false=0 bool flag=20 -20; =>>flag=1
    sizeof(bool)=1 
###5.c语言三目运算符返回值，不能当左值，c++可以
    int a=10,b=20,c;
    c=a>b?a:b;
    (a>b?a:b)=30; c语言不行，c++可以 表示b=30
###6.C的const 假的 可通过指针间接修改，C++ 的常量会在全局区而不是栈区，会在符号表生成键值表，只读。即a用10替换
c定义不赋值则为0,C++ 必须初始化
    int const a=10;int arr[10];//c error，C++ ok 
    int const a=10;int *p=(int *)&a;//此时p指向系统在栈区开辟的空间值为10,可改
###7 enum c里可赋值0或者名字，c++只能用枚举里的名字
##1.namespace
1.using namespace XXX; namespace XXX{}
2.for(int i=0;;) i的作用域只在{}里
##2 引用只有c++有，实质是变量的别名,引用申明一定要初始化，一旦确定不能变,引用实质是常指针（指向不变的指针）注意与常量指针不同
引用类型必须一致 如const int a=10;必须const &re=a;但const引用能引用一般类型，此时引用不能改变引用值    
        int a;int &re=a;
    const int b=10;int &ree=b;error
    const int &ree=b;ok 
    const int &reee=a;ok but reee=a+1;error
    即此引用不能修改值，所以常作为函数参数
    const int &a=40;a是40所对应内存空间的别名
    func(int &p) func(a);即int &p=a;{}此时能改a
    get_Mem2(Teacher  * &p)指针引用，参数是teacher * p是指针的别名


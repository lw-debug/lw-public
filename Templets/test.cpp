#include <iostream>
using namespace std;

int main()
{
int *p;
char *q;
p=new int[10];
*p=0;
p++;
*p=1;
p++;
*p=2;
p++;
*p=259;
q=(char *)(void *)p;
cout<<int(*q)<<endl;

q++;
cout<<*p<<endl;
cout<<int(*q)<<endl;
    return 0;
}
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
//12
int main(int argc,char **argv)
{
    int a[]={1,2,3,5,5,6,7,8};
    typedef int A[8];
    A *b;
    b=a;
    // printf("%d\n",argc);
    // printf("%s",argv[0]);
    printf("%d %d %d\n",(b)[0],(*b)[1],1);
    return 0;
}

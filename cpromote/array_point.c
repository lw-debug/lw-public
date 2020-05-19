#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
//12
int main()
{
    int (*p)[10]=NULL;
    int a[10]={1,2,3,4};
    p=&a;
    printf("%d",*(*p+1));
    return 0;
}

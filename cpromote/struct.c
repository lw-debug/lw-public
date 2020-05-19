#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
//12
typedef struct MYstruct
{
    /* data */
    char a[3];
    int b;
    double c;
    char d[3];
    int e;
    
}MYstruct;

int main()
{
    MYstruct my;
    printf("sizeof: %d\n",sizeof(MYstruct));
    printf("%ld\n",(int)(my.a));
    printf("%ld\n",(int)&my.b);
    printf("%ld\n",(int)&my.c);
    printf("%ld\n",(int)my.d);
    printf("%ld\n",(int)&my.e);
    return 0;
}

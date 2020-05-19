#include<stdio.h>
int main()
{
    unsigned int val1=1;
    unsigned int val2=2;
    unsigned int val3;
    // asm("movl %1,%0":"=r"(result):"m"(input)); 
   asm volatile("addl %2,%1":"=r"(val3):"r"(val1),"r"(val2));
printf("val1=%d\tval2=%d\tval3=%d\t\n",val1,val2,val3);


    ;
    return 0;

}
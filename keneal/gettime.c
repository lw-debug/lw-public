#include <stdio.h>
#include<time.h>
int main()
{
    /* use lib get time
    time_t tt;
    struct tm *ti;
    tt=time(NULL);
    ti=localtime(&tt);
    printf("time:%d:%d:%d:%d:%d:%d\n",ti->tm_year,ti->tm_mon,ti->tm_yday,ti->tm_hour,ti->tm_min,ti->tm_sec);
*/

//use asm
    time_t tt;
    struct tm *ti;
    asm volatile(
    "movl $0,%%ebx\n"
    "movl $0xd,%%eax\n"
    "int $0x80\n"
    "movl %%eax,%0\n"
    :"=m"(tt)
    );
    ti=localtime(&tt);
    printf("time:%d:%d:%d:%d:%d:%d\n",ti->tm_year,ti->tm_mon,ti->tm_yday,ti->tm_hour,ti->tm_min,ti->tm_sec);
return 0;
}

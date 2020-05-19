#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<string.h>
//12
char *get_str1(void)
{
    char str[] = "abcde";
    char *p= str;
    printf("str:%s\tp:%d\tadd:%d\t\n",p,p,&p);
    printf("str:%s\tp:%d\tadd:%d\t\n",str,str,&str);

    return str;
}
char *get_str2(void)
{
    char *q = "abcde";
    return q;
}
int main()
{
    char *p = NULL;
    char *q = NULL;
    p=get_str1();
    q=get_str2();
    printf("str:%s\tp:%d\tadd:%d\t\n",p,p,&p);
    printf("str2:%s\tq:%d\tadd:%d\t\n",q,q,&q);
    return 0;
}

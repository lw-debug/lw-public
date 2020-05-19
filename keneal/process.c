#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int pid;
    pid = fork();
    if (pid < 0)
    {
        fprintf(stderr, "创建错误");
        exit(-1);
    }
    else if (pid == 0)
    {
        /* code */
        printf("success,child processs\n");
    }
    else
    {
        /* code */
        printf("success,Parent processs\n");
        printf("complete child processs\n");
    }

    return 0;
}
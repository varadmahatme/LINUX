#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
printf("The process is =%d\n", (int)getpid());
printf("The parent process is =%d\n", (int)getppid());
return 0;
}
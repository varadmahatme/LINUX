#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
fork();
fork();

printf("Hello bro!\n PID = %d\n", getpid());

return 0;

}
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	printf("The pid of current process is %d", getpid());
	printf("The pid of parent process is %d", getppid());
	return 0;

}
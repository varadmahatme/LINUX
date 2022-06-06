#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{

	pid_t pid;
	pid=fork();
	if(pid!=0)
	{
	system ("sleep 2");
	printf("The pid of parent process is %d ", pid);
	}
	
	else
	{
	system ("sleep 2");
	printf("The pid of parent process is %d ", pid);
	}
	return 0;
}	

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
pid_t child_pid;
printf("The main program process ID is %d \n", (int) getpid());
child_pid=fork();

if(child_pid != 0)// creation of child process
{ 
	printf("This is the parent process id of main process, with id %d\n",(int)getppid());
	printf("The child process ID is =%d\n", (int) child_pid);
}
else
{ 
	printf("This is the child process with id  %d\n",(int)getpid()); //output
	printf("This is the parent process ID of child process, with id =%d\n", (int) getppid());
}
return 0;
}

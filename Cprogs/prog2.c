#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
pid_t pid;
char *message;
int n;
printf("Im in main now \n");
pid=fork();
printf("The pid of child process is =%d\n", (int)pid);
switch(pid)

{ 

case -1: perror("Fork Creation Failed");
exit(1);
case 0:
	message="This is the child";
	n=3;
	break;
default:
	message = "This is the Parent";
	n=3;
	break;
}

for(;n>0;n--)
{
puts(message);
//sleep(1);
}

exit(0);
}
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int i;
	for(i=0;i<20;i++)
	{
		system("sleep 1");
		system("echo this is program 1 `date`\n");
	}
	system("ps");
	return 0;
}
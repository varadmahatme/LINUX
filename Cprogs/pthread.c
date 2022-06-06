#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

void * myturn(void * arg)
{
	for(int i =0;i<=8;i++)
	{	
		sleep(1);
		printf("My turn %d \n",i);
	}

}
void yourturn()
{
	for(int j=0;j<=5;j++)
	{
		sleep(2);
		printf("Your turn %d \n",j);
	}

}

int main()
{
	pthread_t newthread;
	pthread_create(&newthread,NULL,myturn,NULL);
	yourturn();
	return 0;
	pthread_join(&newthread,NULL);
}
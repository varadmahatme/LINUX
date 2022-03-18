#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>
#include<ctype.h>

void *athread_function(void *arg);
void *bthread_function(void *arg);
int run_now;
int main()
{
	int res;
	run_now=1;
	pthread_t a_thread, b_thread;
	
	res = pthread_create(&a_thread,NULL, athread_function, NULL);
	
	if(res!=0)
	{
		perror("Thread Creation Failed");
		exit(EXIT_FAILURE);
	}
res = pthread_create(&b_thread,NULL, bthread_function, NULL);
	
	if(res!=0)
	{
		perror("Thread Creation Failed");
		exit(EXIT_FAILURE);
	}
	pthread_join(a_thread, NULL);
	pthread_join(b_thread, NULL);
	printf("\n");
	exit(EXIT_SUCCESS);

char Ch;
 
  printf("\n Please Enter any alphabet\n");
  scanf(" %c", &Ch);

  if (isalpha(Ch) )
   {  
     Ch = toupper(Ch); 
     printf ("\n Uppercase of Entered character is %c", Ch);
   }
  else
   {
     printf("\n Please Enter Valid Alphabet");
   }  

}
void *athread_function(void *arg)
{
	int print_count2=0;
	while(print_count2++<20)
	{
		if(run_now==2)
		{
			printf("2");
			run_now=1;
		}
		else
		{
			sleep(1);
		}	
	}
	pthread_exit("Thank Your for the CPU time..\n");
}

void *bthread_function(void *arg)
{
	int print_count1=0;
	while(print_count1++<20)
	{
		if(run_now==1)
		{
			printf("1");
			run_now=2;
		}
		else
		{
			sleep(1);
		}	
	}
	pthread_exit("Thank Your for the CPU time..\n");
}
